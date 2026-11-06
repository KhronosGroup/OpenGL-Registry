cmake_minimum_required(VERSION 3.10)
project(OpenGLRegistry)

include(GNUInstallDirs)

configure_file(opengl-headers.pc.in opengl-headers.pc @ONLY)

install(DIRECTORY "${CMAKE_SOURCE_DIR}/api/" DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/opengl-headers.pc" DESTINATION "${CMAKE_INSTALL_DATADIR}/pkgconfig")
