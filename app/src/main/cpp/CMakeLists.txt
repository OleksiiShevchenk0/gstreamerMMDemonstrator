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

add_library( libsigc-2.0
        SHARED
        IMPORTED
        )

add_library( glibmm-2.4
        SHARED
        IMPORTED
        )
set_target_properties( gstreamermm-android-universal-1.10.0 libsigc-2.0 glibmm-2.4
        # Specifies the parameter you want to define.
        PROPERTIES
        IMPORTED_LOCATION /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/lib/libgstreamermm-1.0.so
        IMPORTED_LOCATION /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/lib/libsigc-2.0.so
        IMPORTED_LOCATION /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/lib/libglibmm-2.4.so
        )

include_directories( /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/include/gstreamermm-1.0
                     /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-1.10.0/gstreamer/gstreamermm
        /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/include/glibmm-2.4
        /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/include
        /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs
        /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-1.10.0/MSVC_2015/gstreamermm
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/sources/android_universal/x86/glibmm-2.4/include
        /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64/glib
        /home/oshevchenko/Logitevch/GstreamerDemonstrator/app/libs/gstreamermm-android-universal-1.10.0/x86_64//include
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/sources/android_universal/x86/glibmm-2.62.0/glib
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/dist/android_universal/x86/include/glib-2.0
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/sources/android_universal/x86/glib-2.62.6/_builddir/glib
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/sources/android_universal/x86_64/libsigc++-2.10.3
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/dist/android_universal/x86_64/include/gstreamer-1.0
        /home/oshevchenko/cerbero/VC_Sentinel_Gst_Cerbero/build/dist/android_universal/x86_64/include/gstreamer-1.0
        /home/oshevchenko/cerbero/VC_Sentinel_Gst_Cerbero/build/dist/android_universal/x86_64/include/giomm-2.4
        /home/oshevchenko/Logitevch/VC_Sentinel_Gst_Cerbero/build/sources/android_universal/x86_64/glibmm-2.62.0/gio/
        )
#include_directories( ../../app/libs/gstreamermm-android-universal-1.10.0/${ANDROID_ABI}/include/gstreamermm/ )
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
##        gstreamermm-android-universal-1.10.0
##        ${log-lib}
#        )