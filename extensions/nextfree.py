#!/usr/bin/env python
#
# Copyright (c) 2017 The Khronos Group Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# nextfree.py - determine the next unused extension numbers.
# Use this when registering a new ARB, vendor, and/or OpenGL ES extension.
#
# Use: nextfree.py

import copy, os, re, string, sys, json

def write(*args, **kwargs):
    file = kwargs.pop('file', sys.stdout)
    end = kwargs.pop('end', '\n')
    file.write(' '.join([str(arg) for arg in args]))
    file.write(end)

def loadJson(path):
    with open(path) as file:
        return json.load(file)

# Load the registry
registry = loadJson('registry.json')

# Track each number separately
keys = { 'arbnumber', 'number', 'esnumber' }
max = {}
for k in keys:
    max[k] = 0

# Loop over all extensions updating the max value
for name,v in registry.items():
    for k in keys:
        if k in v.keys():
            n = v[k]
            if (n > max[k]):
                max[k] = n

# Report next free values
for k in keys:
    write('Next free', k, '=', max[k] + 1)
