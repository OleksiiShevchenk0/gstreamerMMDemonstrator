# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)
#gstreamerMM
set(gstreamerMM)
set(gstreamerMM_DIR ${} )
# Declares and names the project.

project("gstreamermm")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        gstreamermm

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        testApp.cpp
        native-lib.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.
add_library( gstreamermm-android-universal-1.10.0
        SHARED
        IMPORTED
)
set_target_properties( # Specifies the target library.
        gstreamermm-android-universal-1.10.0

        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ../../app/libs/gstreamermm-android-universal-1.10.0${ANDROID_ABI}/lib/libgstreamermm-1.0.so )
include_directories( ../../app/libs/gstreamermm-android-universal-1.10.0${ANDROID_ABI}/include/gstreamermm/ )
#find_library( # Sets the name of the path variable.
##        log-lib
##        gstreamermm
#        # Specifies the name of the NDK library that
#        # you want CMake to locate.
##        log
#        )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

#target_link_libraries( # Specifies the target library.
#
##        ${log-lib}
#        )