#!/usr/bin/python3
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

# makeindex.py - create HTML indices for the OpenGL extension registry
#
# Use: makeindex.py key
# where 'key' is 'arbnumber', 'number', or 'esnumber' for ARB OpenGL,
# Vendor OpenGL, and OpenGL ES extensions, respectively.
#
# Only extensions marked 'public' will be included in the index.

import copy, os, re, string, sys, json

# Keys in glregistry:
#   arbnumber   OpenGL ARB extension # (if present)
#   number      OpenGL vendor/EXT extension # (if present)
#   esnumber    OpenGL ES extension # (if present)
#   flags       Set containing one or more of 'public' 'private' 'obsolete' 'incomplete'
#   url         Relative URL to extension spec
#   esurl       Relative URL to ES-specific extension spec (if present)
#   alias       Set of additional extension strings defined in the same document
#   comments    Arbitrary string with metainformation about the extension
#   supporters  Set of strings with supporting vendor names (both obsolete
#               and incomplete - useless save for historical purposes)

def makeLink(name, link):
    return '<a href="' + url + '">' + name + '</a>'

# See if the specified key of the extension has the specified flag
def hasFlag(extension, key, flag):
    return (key in extension and flag in extension[key])

def loadJson(path):
    with open(path) as file:
        return json.load(file)

if __name__ == '__main__':
    if (len(sys.argv) > 1):
        key = sys.argv[1]
    else:
        key = 'number'

    isGLES = (key == 'esnumber')

    # print('makeindex: key =', key)

    # Load the registry
    registry = loadJson('registry.json')

    # Select extensions with the matching key
    dict = {k:v for k,v in registry.items() if key in v.keys()}

    # print('Filtered', len(dict), 'extensions')

    # Sort matching extensions by the key value
    sortext = sorted(dict.items(), key = lambda kv : kv[1].get(key))

    # Generate the HTML ordered list of extensions (selecting only public ones)
    print('<ol>')
    for (name,ext) in sortext:
        index = ext.get(key)

        if hasFlag(ext, 'flags', 'public'):
            # Only select the alternate ES path if we're generating the ES index
            if (isGLES and 'esurl' in ext):
                url = ext['esurl']
            else:
                url = ext['url']

            # Create the main indexed link
            print('<li value=', index, '>', makeLink(name, url), sep='')

            if ('alias' in ext):
                for alias in sorted(ext['alias']):
                    print('\n    <br> ', makeLink(alias, url), sep='')

            print('</li>')
    print('</ol>')
