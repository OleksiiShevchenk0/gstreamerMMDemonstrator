#include <jni.h>
#include <string>
#include "testApp.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_gstreamermm_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void JNICALL
        Java_com_example_gstreamermm_MainActivity_playFile(
        JNIEnv* env,
jobject /* this */) {
    playFile();
}