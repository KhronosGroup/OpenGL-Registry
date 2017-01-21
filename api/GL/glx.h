#ifndef __glx_h_
#define __glx_h_ 1

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright (c) 2013-2017 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/
/*
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/

/* Generated on date 20170121 */

/* Generated C header for:
 * API: glx
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: None
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef GLX_VERSION_1_0
#define GLX_VERSION_1_0 1
typedef struct __GLXcontextRec *GLXContext;
typedef XID GLXDrawable;
typedef XID GLXPixmap;
#define GLX_EXTENSION_NAME                "GLX"
#define GLX_PbufferClobber                0
#define GLX_BufferSwapComplete            1
#define __GLX_NUMBER_EVENTS               17
#define GLX_BAD_SCREEN                    1
#define GLX_BAD_ATTRIBUTE                 2
#define GLX_NO_EXTENSION                  3
#define GLX_BAD_VISUAL                    4
#define GLX_BAD_CONTEXT                   5
#define GLX_BAD_VALUE                     6
#define GLX_BAD_ENUM                      7
#define GLX_USE_GL                        1
#define GLX_BUFFER_SIZE                   2
#define GLX_LEVEL                         3
#define GLX_RGBA                          4
#define GLX_DOUBLEBUFFER                  5
#define GLX_STEREO                        6
#define GLX_AUX_BUFFERS                   7
#define GLX_RED_SIZE                      8
#define GLX_GREEN_SIZE                    9
#define GLX_BLUE_SIZE                     10
#define GLX_ALPHA_SIZE                    11
#define GLX_DEPTH_SIZE                    12
#define GLX_STENCIL_SIZE                  13
#define GLX_ACCUM_RED_SIZE                14
#define GLX_ACCUM_GREEN_SIZE              15
#define GLX_ACCUM_BLUE_SIZE               16
#define GLX_ACCUM_ALPHA_SIZE              17
typedef XVisualInfo *( *PFNGLXCHOOSEVISUALPROC) (Display *dpy, int screen, int *attribList);
typedef GLXContext ( *PFNGLXCREATECONTEXTPROC) (Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct);
typedef void ( *PFNGLXDESTROYCONTEXTPROC) (Display *dpy, GLXContext ctx);
typedef Bool ( *PFNGLXMAKECURRENTPROC) (Display *dpy, GLXDrawable drawable, GLXContext ctx);
typedef void ( *PFNGLXCOPYCONTEXTPROC) (Display *dpy, GLXContext src, GLXContext dst, unsigned long mask);
typedef void ( *PFNGLXSWAPBUFFERSPROC) (Display *dpy, GLXDrawable drawable);
typedef GLXPixmap ( *PFNGLXCREATEGLXPIXMAPPROC) (Display *dpy, XVisualInfo *visual, Pixmap pixmap);
typedef void ( *PFNGLXDESTROYGLXPIXMAPPROC) (Display *dpy, GLXPixmap pixmap);
typedef Bool ( *PFNGLXQUERYEXTENSIONPROC) (Display *dpy, int *errorb, int *event);
typedef Bool ( *PFNGLXQUERYVERSIONPROC) (Display *dpy, int *maj, int *min);
typedef Bool ( *PFNGLXISDIRECTPROC) (Display *dpy, GLXContext ctx);
typedef int ( *PFNGLXGETCONFIGPROC) (Display *dpy, XVisualInfo *visual, int attrib, int *value);
typedef GLXContext ( *PFNGLXGETCURRENTCONTEXTPROC) (void);
typedef GLXDrawable ( *PFNGLXGETCURRENTDRAWABLEPROC) (void);
typedef void ( *PFNGLXWAITGLPROC) (void);
typedef void ( *PFNGLXWAITXPROC) (void);
typedef void ( *PFNGLXUSEXFONTPROC) (Font font, int first, int count, int list);
#ifdef GLX_GLXEXT_PROTOTYPES
XVisualInfo *glXChooseVisual (Display *dpy, int screen, int *attribList);
GLXContext glXCreateContext (Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct);
void glXDestroyContext (Display *dpy, GLXContext ctx);
Bool glXMakeCurrent (Display *dpy, GLXDrawable drawable, GLXContext ctx);
void glXCopyContext (Display *dpy, GLXContext src, GLXContext dst, unsigned long mask);
void glXSwapBuffers (Display *dpy, GLXDrawable drawable);
GLXPixmap glXCreateGLXPixmap (Display *dpy, XVisualInfo *visual, Pixmap pixmap);
void glXDestroyGLXPixmap (Display *dpy, GLXPixmap pixmap);
Bool glXQueryExtension (Display *dpy, int *errorb, int *event);
Bool glXQueryVersion (Display *dpy, int *maj, int *min);
Bool glXIsDirect (Display *dpy, GLXContext ctx);
int glXGetConfig (Display *dpy, XVisualInfo *visual, int attrib, int *value);
GLXContext glXGetCurrentContext (void);
GLXDrawable glXGetCurrentDrawable (void);
void glXWaitGL (void);
void glXWaitX (void);
void glXUseXFont (Font font, int first, int count, int list);
#endif
#endif /* GLX_VERSION_1_0 */

#ifndef GLX_VERSION_1_1
#define GLX_VERSION_1_1 1
#define GLX_VENDOR                        0x1
#define GLX_VERSION                       0x2
#define GLX_EXTENSIONS                    0x3
typedef const char *( *PFNGLXQUERYEXTENSIONSSTRINGPROC) (Display *dpy, int screen);
typedef const char *( *PFNGLXQUERYSERVERSTRINGPROC) (Display *dpy, int screen, int name);
typedef const char *( *PFNGLXGETCLIENTSTRINGPROC) (Display *dpy, int name);
#ifdef GLX_GLXEXT_PROTOTYPES
const char *glXQueryExtensionsString (Display *dpy, int screen);
const char *glXQueryServerString (Display *dpy, int screen, int name);
const char *glXGetClientString (Display *dpy, int name);
#endif
#endif /* GLX_VERSION_1_1 */

#ifndef GLX_VERSION_1_2
#define GLX_VERSION_1_2 1
typedef Display *( *PFNGLXGETCURRENTDISPLAYPROC) (void);
#ifdef GLX_GLXEXT_PROTOTYPES
Display *glXGetCurrentDisplay (void);
#endif
#endif /* GLX_VERSION_1_2 */

#ifndef GLX_VERSION_1_3
#define GLX_VERSION_1_3 1
typedef XID GLXContextID;
typedef struct __GLXFBConfigRec *GLXFBConfig;
typedef XID GLXWindow;
typedef XID GLXPbuffer;
#define GLX_WINDOW_BIT                    0x00000001
#define GLX_PIXMAP_BIT                    0x00000002
#define GLX_PBUFFER_BIT                   0x00000004
#define GLX_RGBA_BIT                      0x00000001
#define GLX_COLOR_INDEX_BIT               0x00000002
#define GLX_PBUFFER_CLOBBER_MASK          0x08000000
#define GLX_FRONT_LEFT_BUFFER_BIT         0x00000001
#define GLX_FRONT_RIGHT_BUFFER_BIT        0x00000002
#define GLX_BACK_LEFT_BUFFER_BIT          0x00000004
#define GLX_BACK_RIGHT_BUFFER_BIT         0x00000008
#define GLX_AUX_BUFFERS_BIT               0x00000010
#define GLX_DEPTH_BUFFER_BIT              0x00000020
#define GLX_STENCIL_BUFFER_BIT            0x00000040
#define GLX_ACCUM_BUFFER_BIT              0x00000080
#define GLX_CONFIG_CAVEAT                 0x20
#define GLX_X_VISUAL_TYPE                 0x22
#define GLX_TRANSPARENT_TYPE              0x23
#define GLX_TRANSPARENT_INDEX_VALUE       0x24
#define GLX_TRANSPARENT_RED_VALUE         0x25
#define GLX_TRANSPARENT_GREEN_VALUE       0x26
#define GLX_TRANSPARENT_BLUE_VALUE        0x27
#define GLX_TRANSPARENT_ALPHA_VALUE       0x28
#define GLX_DONT_CARE                     0xFFFFFFFF
#define GLX_NONE                          0x8000
#define GLX_SLOW_CONFIG                   0x8001
#define GLX_TRUE_COLOR                    0x8002
#define GLX_DIRECT_COLOR                  0x8003
#define GLX_PSEUDO_COLOR                  0x8004
#define GLX_STATIC_COLOR                  0x8005
#define GLX_GRAY_SCALE                    0x8006
#define GLX_STATIC_GRAY                   0x8007
#define GLX_TRANSPARENT_RGB               0x8008
#define GLX_TRANSPARENT_INDEX             0x8009
#define GLX_VISUAL_ID                     0x800B
#define GLX_SCREEN                        0x800C
#define GLX_NON_CONFORMANT_CONFIG         0x800D
#define GLX_DRAWABLE_TYPE                 0x8010
#define GLX_RENDER_TYPE                   0x8011
#define GLX_X_RENDERABLE                  0x8012
#define GLX_FBCONFIG_ID                   0x8013
#define GLX_RGBA_TYPE                     0x8014
#define GLX_COLOR_INDEX_TYPE              0x8015
#define GLX_MAX_PBUFFER_WIDTH             0x8016
#define GLX_MAX_PBUFFER_HEIGHT            0x8017
#define GLX_MAX_PBUFFER_PIXELS            0x8018
#define GLX_PRESERVED_CONTENTS            0x801B
#define GLX_LARGEST_PBUFFER               0x801C
#define GLX_WIDTH                         0x801D
#define GLX_HEIGHT                        0x801E
#define GLX_EVENT_MASK                    0x801F
#define GLX_DAMAGED                       0x8020
#define GLX_SAVED                         0x8021
#define GLX_WINDOW                        0x8022
#define GLX_PBUFFER                       0x8023
#define GLX_PBUFFER_HEIGHT                0x8040
#define GLX_PBUFFER_WIDTH                 0x8041
typedef GLXFBConfig *( *PFNGLXGETFBCONFIGSPROC) (Display *dpy, int screen, int *nelements);
typedef GLXFBConfig *( *PFNGLXCHOOSEFBCONFIGPROC) (Display *dpy, int screen, const int *attrib_list, int *nelements);
typedef int ( *PFNGLXGETFBCONFIGATTRIBPROC) (Display *dpy, GLXFBConfig config, int attribute, int *value);
typedef XVisualInfo *( *PFNGLXGETVISUALFROMFBCONFIGPROC) (Display *dpy, GLXFBConfig config);
typedef GLXWindow ( *PFNGLXCREATEWINDOWPROC) (Display *dpy, GLXFBConfig config, Window win, const int *attrib_list);
typedef void ( *PFNGLXDESTROYWINDOWPROC) (Display *dpy, GLXWindow win);
typedef GLXPixmap ( *PFNGLXCREATEPIXMAPPROC) (Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list);
typedef void ( *PFNGLXDESTROYPIXMAPPROC) (Display *dpy, GLXPixmap pixmap);
typedef GLXPbuffer ( *PFNGLXCREATEPBUFFERPROC) (Display *dpy, GLXFBConfig config, const int *attrib_list);
typedef void ( *PFNGLXDESTROYPBUFFERPROC) (Display *dpy, GLXPbuffer pbuf);
typedef void ( *PFNGLXQUERYDRAWABLEPROC) (Display *dpy, GLXDrawable draw, int attribute, unsigned int *value);
typedef GLXContext ( *PFNGLXCREATENEWCONTEXTPROC) (Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef Bool ( *PFNGLXMAKECONTEXTCURRENTPROC) (Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable ( *PFNGLXGETCURRENTREADDRAWABLEPROC) (void);
typedef int ( *PFNGLXQUERYCONTEXTPROC) (Display *dpy, GLXContext ctx, int attribute, int *value);
typedef void ( *PFNGLXSELECTEVENTPROC) (Display *dpy, GLXDrawable draw, unsigned long event_mask);
typedef void ( *PFNGLXGETSELECTEDEVENTPROC) (Display *dpy, GLXDrawable draw, unsigned long *event_mask);
#ifdef GLX_GLXEXT_PROTOTYPES
GLXFBConfig *glXGetFBConfigs (Display *dpy, int screen, int *nelements);
GLXFBConfig *glXChooseFBConfig (Display *dpy, int screen, const int *attrib_list, int *nelements);
int glXGetFBConfigAttrib (Display *dpy, GLXFBConfig config, int attribute, int *value);
XVisualInfo *glXGetVisualFromFBConfig (Display *dpy, GLXFBConfig config);
GLXWindow glXCreateWindow (Display *dpy, GLXFBConfig config, Window win, const int *attrib_list);
void glXDestroyWindow (Display *dpy, GLXWindow win);
GLXPixmap glXCreatePixmap (Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list);
void glXDestroyPixmap (Display *dpy, GLXPixmap pixmap);
GLXPbuffer glXCreatePbuffer (Display *dpy, GLXFBConfig config, const int *attrib_list);
void glXDestroyPbuffer (Display *dpy, GLXPbuffer pbuf);
void glXQueryDrawable (Display *dpy, GLXDrawable draw, int attribute, unsigned int *value);
GLXContext glXCreateNewContext (Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
Bool glXMakeContextCurrent (Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
GLXDrawable glXGetCurrentReadDrawable (void);
int glXQueryContext (Display *dpy, GLXContext ctx, int attribute, int *value);
void glXSelectEvent (Display *dpy, GLXDrawable draw, unsigned long event_mask);
void glXGetSelectedEvent (Display *dpy, GLXDrawable draw, unsigned long *event_mask);
#endif
#endif /* GLX_VERSION_1_3 */

#ifndef GLX_VERSION_1_4
#define GLX_VERSION_1_4 1
typedef void ( *__GLXextFuncPtr)(void);
#define GLX_SAMPLE_BUFFERS                100000
#define GLX_SAMPLES                       100001
typedef __GLXextFuncPtr ( *PFNGLXGETPROCADDRESSPROC) (const GLubyte *procName);
#ifdef GLX_GLXEXT_PROTOTYPES
__GLXextFuncPtr glXGetProcAddress (const GLubyte *procName);
#endif
#endif /* GLX_VERSION_1_4 */

#ifdef __cplusplus
}
#endif

#endif
