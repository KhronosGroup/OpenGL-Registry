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

# printreg(reg, varname)
# Prints a registry Python data structure (see registry.json) in a consistent
# fashion.

def tab():
    return '        '

def quote(str):
    return '\'' + str + '\''

def printKey(key, value):
    print(tab() + quote(key), ':', value + ',')

def printNum(ext, key):
    if (key in ext.keys()):
        printKey(key, str(ext[key]))

def printSet(ext, key):
    if (key in ext.keys()):
        value = ( '{ ' +
                  ', '.join([quote(str(tag)) for tag in sorted(ext[key])]) +
                  ' }' )
        printKey(key, value)

def printStr(ext, key):
    if (key in ext.keys()):
        printKey(key, quote(str(ext[key])))

def striplibs(s):
    return ( s.replace('GL_','').
               replace('GLU_','').
               replace('GLX_','').
               replace('WGL_','') )

def printreg(reg, varname):
    print(varname, '= {')

    # print('keys in registry =', len(reg.keys()))

    print('# OpenGL extension number and name registry')
    print('')

    for key in sorted(reg.keys(), key = striplibs):
        ext = reg[key]

        print('    ' + quote(key), ': {')
        printNum(ext, 'arbnumber')
        printNum(ext, 'number')
        printNum(ext, 'esnumber')
        printSet(ext, 'flags')
        printSet(ext, 'supporters')
        printStr(ext, 'url')
        printStr(ext, 'esurl')
        printSet(ext, 'alias')
        printStr(ext, 'comments')
        print('    },')

    print('}')

