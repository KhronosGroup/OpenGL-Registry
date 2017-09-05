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

# Generate the PHP index file includes for OpenGL ARB, OpenGL ES, and
# OpenGL EXT/Vendor extensions.

# python3 is required. Sorry, python2 dudes.

PYTHON = python
SCRIPTS = registry.py makeindex.py

all: arbext.php esext.php glext.php

arbext.php: $(SCRIPTS)
	$(PYTHON) makeindex.py arbnumber >$@

esext.php: $(SCRIPTS)
	$(PYTHON) makeindex.py esnumber >$@

glext.php: $(SCRIPTS)
	$(PYTHON) makeindex.py number >$@
