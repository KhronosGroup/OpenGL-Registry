# Copyright 2017-2021 The Khronos Group Inc.
# SPDX-License-Identifier: Apache-2.0

# Generate the PHP index file includes for OpenGL ARB, OpenGL ES, and
# OpenGL EXT/Vendor extensions.

# python3 is required. Sorry, python2 dudes.

PYTHON = python3
SCRIPTS = registry.py makeindex.py

all: arbext.php esext.php glext.php

arbext.php: $(SCRIPTS)
	$(PYTHON) makeindex.py arbnumber >$@

esext.php: $(SCRIPTS)
	$(PYTHON) makeindex.py esnumber >$@

glext.php: $(SCRIPTS)
	$(PYTHON) makeindex.py number >$@
