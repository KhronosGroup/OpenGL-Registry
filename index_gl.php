<?php
$static_title = 'Khronos OpenGL&reg; Registry';

include_once("../../assets/static_pages/khr_page_top.php");
?>

<p> The OpenGL Registry contains specifications, header files, and
    related documentation for OpenGL and related APIs including GLU,
    GLX, and WGL. In addition to the core API specifications, many
    extensions to these APIs have been defined by vendors, groups of
    vendors, and the ARB. The Registry also contains specifications and
    header files for all registered extensions, written as modifications
    to the appropriate core API specifications. </p>

<p> The Registry also includes naming conventions, guidelines for
    creating new extensions and writing suitable extension
    specifications, and other documentation related to these APIs. </p>

<p> <b>Table of Contents</b>
<ul>
<li> <b><a href="#apispecs">Current OpenGL API, Shading Language, GLX,
     and Related Specifications and Reference Pages</a></b> </li>
<li> <a href="#headers">Core API and Extension Header Files</a> </li>
<li> <b>
     <a href="https://www.khronos.org/files/ip-disclosures/opengl/"> IP
     Disclosures</a> Potentially Affecting OpenGL Implementations
     </b></li>
<li> <b> Extension Specifications </b>
    <ul>
    <li> <a href="#arbextspecs">OpenGL ARB Extensions Specifications</a> </li>
    <li> <a href="#otherextspecs">OpenGL Vendor and EXT Extension Specifications</a>
         </li>
    </ul> </li>
<li> Older Material for Reference
    <ul>
    <li> <b><a href="#oldspecs">Older OpenGL and GLX Specifications and
         Reference Pages</a></b> </li>
    <li> <a href="#abi">OpenGL Application Binary Interface for Linux</a>
         </li>
    </ul> </li>
</ul>

<hr>

<h2> <a name="apispecs"></a>
     Current OpenGL API, OpenGL Shading Language and GLX Specifications and
     Reference Pages </h2>

<ul>
<li> <b> Current Specifications (OpenGL 4.6) </b>
<li> OpenGL 4.6 API Specification (updated July 30, 2017)
    <ul>
    <li> <a href="specs/gl/glspec46.core.pdf"> Core Profile Specification
         </a> </li>
        <!--
    <li> <a href="specs/gl/glspec46.core.withchanges.pdf"> Core Profile
         Specification with changes marked </a> </li>
        -->
    <li> <a href="specs/gl/glspec46.compatibility.pdf"> Compatibility Profile
         Specification </a> </li>
        <!--
    <li> <a href="specs/gl/glspec46.compatibility.withchanges.pdf">
         Compatibility Profile Specification with changes marked </a>
         </li>
        -->
    </ul> </li>
<li> OpenGL Shading Language 4.60 Specification (updated July 23, 2017)
    <ul>
    <li> <a href="specs/gl/GLSLangSpec.4.60.pdf"> GLSL Specification </a>
         </li>
    <li> <a href="specs/gl/GLSLangSpec.4.60.diff.pdf"> GLSL Specification
         with changes marked </a> </li>
    </ul> </li>
<li> <a href="http://www.opengl.org/sdk/docs/man4/"> OpenGL 4.5 API and
     Shading Language Reference Pages </a> (not yet updated) </li>

<li> <b> OpenGL X Window System Binding (GLX 1.4) Specification </b> </li>
<li> <a href="specs/gl/glx1.4.pdf"> GLX 1.4 Specification </a> </li>

<li> <a href="https://www.khronos.org/developers/reference-cards"> OpenGL
     Quick Reference Card </a> (available for different API versions). </li>
</ul>


<h2> <a name="headers"></a> API and Extension Header Files </h2>

<p> Because extensions vary from platform to platform and driver to
    driver, OpenGL developers can't expect interfaces for all extensions
    to be defined in the standard <tt>gl.h</tt>, <tt>glx.h</tt>, and
    <tt>wgl.h</tt> header files supplied with the OS / graphics drivers.
    Additional header files are provided here, including: </p>

<ul>
<li> <tt><a href="api/GL/glext.h">&lt;GL/glext.h&gt;</a></tt> - OpenGL
     1.2 and above compatibility profile and extension interfaces. </li>
<li> <tt><a href="api/GL/glcorearb.h">&lt;GL/glcorearb.h&gt;</a></tt> -
     OpenGL core profile and ARB extension interfaces, as described in
     appendix G.2 of the OpenGL 4.3 Specification. Does not include
     interfaces found only in the compatibility profile. </li>
<li> <tt><a href="api/GL/glxext.h">&lt;GL/glxext.h&gt;</a></tt> - GLX
     1.3 and above API and GLX extension interfaces. </li>
<li> <tt><a href="api/GL/wglext.h">&lt;GL/wglext.h&gt;</a></tt> - WGL
     extension interfaces. </li>
</ul>

<p> These headers define interfaces including enumerants; prototypes; and,
    for platforms supporting dynamic runtime extension queries, such as
    Linux and Microsoft Windows, function pointer typedefs. Please report
    problems as Issues in the <a
    href="index.php#repository">OpenGL-Registry</a> repository. </p>

<hr>

<!-- Older Material -->

<h2> <a name="oldspecs"></a>
     Older OpenGL and GLX Specifications and Reference Pages
     </h2>

<ul>

    <!-- Does not link to diff/withchanges specs, yet -->
<li> <b> OpenGL 4.5 </b>
<li> <a href="specs/gl/glspec45.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec45.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.4.50.pdf"> OpenGL Shading Language
     4.50 Specification </a> </li>

<li> <b> OpenGL 4.4 </b>
<li> <a href="specs/gl/glspec44.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec44.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.4.40.pdf"> OpenGL Shading Language
     4.40 Specification </a> </li>

<li> <b> OpenGL 4.3 </b>
<li> <a href="specs/gl/glspec43.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec43.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.4.30.pdf"> OpenGL Shading Language
     4.30 Specification </a> </li>

<li> <b> OpenGL 4.2 </b>
<li> <a href="specs/gl/glspec42.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec42.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.4.20.pdf"> OpenGL Shading Language
     4.20 Specification </a> </li>

<li> <b> OpenGL 4.1 </b>
<li> <a href="specs/gl/glspec41.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec41.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.4.10.pdf"> OpenGL Shading Language 4.10
     Specification </a> </li>

<li> <b> OpenGL 4.0 </b>
<li> <a href="specs/gl/glspec40.core.pdf"> (API Core Profile) </a> </li>
<li> A <a href="http://www.cutt.co.jp/book/978-4-87783-255-1.html"> Japanese
     translation </a> of the API core profile specification is also
     available. </li>
<li> <a href="specs/gl/glspec40.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.4.00.pdf"> OpenGL Shading Language 4.00
     Specification </a> </li>

<li> <b> OpenGL 3.3 </b>
<li> <a href="specs/gl/glspec33.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec33.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.3.30.pdf"> OpenGL Shading Language
     3.30 Specification </a> </li>

<li> <b> OpenGL 3.3 Reference Pages </b>
<li> <a href="http://www.opengl.org/sdk/docs/man3/"> OpenGL 3.3 Reference
     Pages </a> </li>

<li> <b> OpenGL 3.2 </b>
<li> <a href="specs/gl/glspec32.core.pdf"> (API Core Profile) </a> </li>
<li> <a href="specs/gl/glspec32.compatibility.pdf"> (API Compatibility Profile) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.1.50.pdf"> OpenGL Shading Language
     1.50 Specification </a> </li>

<li> <b> OpenGL 3.1 </b>
<li> <a href="specs/gl/glspec31.pdf"> (API Specification) </a> </li>
<li> <a href="specs/gl/glspec31undep.pdf">
        (with GL_ARB_compatibility extension) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.1.40.pdf"> OpenGL Shading Language
     1.40 Specification </a> </li>

<li> <b> OpenGL 3.0 </b>
<li> <a href="specs/gl/glspec30.pdf"> (API Specification) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.1.30.pdf"> OpenGL Shading Language
     1.30 Specification </a> </li>

<li> <b> OpenGL 2.1 </b>
<li> <a href="specs/gl/glspec21.pdf"> (API Specification) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.1.20.pdf"> OpenGL Shading Language
     1.20 Specification </a> </li>

<li> <b> OpenGL 2.1 Reference Pages </b>
<li> <a href="http://www.opengl.org/sdk/docs/man/"> OpenGL 2.1 Reference
     Pages </a> </li>

<li> <b> OpenGL 2.0 </b>

<li> <a href="specs/gl/glspec20.pdf"> (API Specification) </a> </li>
<li> <a href="specs/gl/GLSLangSpec.1.10.pdf"> OpenGL Shading Language
     1.10 Specification </a> </li>

<li> <b> OpenGL 1.x </b>

<li> <a href="specs/gl/glspec15.pdf"> OpenGL 1.5 API Specification </a>
<li> <a href="specs/gl/glspec14.pdf"> OpenGL 1.4 API Specification </a>
<li> <a href="specs/gl/glspec13.pdf"> OpenGL 1.3 API Specification </a>
<li> <a href="specs/gl/glspec121.pdf"> OpenGL 1.2.1 API Specification </a>
<li> <a href="specs/gl/glspec11.ps"> OpenGL 1.1 API Specification (PostScript format) </a>
<li> <a href="specs/gl/glspec10.pdf"> OpenGL 1.0 API Specification </a>

<li> <b> Older GLX Specifications </b>

<li> <a href="specs/gl/glx1.3.pdf"> GLX 1.3 Specification </a>
<li> <a href="specs/gl/glxencode1.3.pdf"> GLX 1.3 Protocol Encoding
     Specification </a>
<li> <a href="specs/gl/glx1.2.ps"> GLX 1.2 Specification (PostScript format) </a>
<li> <a href="specs/gl/GLXprotocol.ps"> GLX Protocol Slides (PostScript
     format; only of historical interest) </a>

<li> <b> OpenGL Utility Library (GLU) Specification </b>
<li> <a href="specs/gl/glu1.3.pdf"> GLU 1.3 Specification (November 4, 1998) </a>

</ul>

<h2> <a name="abi"></a>
    OpenGL Application Binary Interface for Linux </h2>

<p> The <a href="ABI/">OpenGL Application Binary Interface for Linux</a> is
    also available. Note that the ABI is extremely old and of little use
    today. </p>

<h2> <a name="arbextspecs"></a>
     ARB Extensions by number</h2>

<?php include("extensions/arbext.php"); ?>

<h2> <a name="otherextspecs"></a>
     Vendor and EXT Extensions by number</h2>

<?php include("extensions/glext.php"); ?>

<?php include_once("../../assets/static_pages/khr_page_bottom.php"); ?>
</body>
</html>
