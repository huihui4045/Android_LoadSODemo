#include <jni.h>
#include "native-head.h"


JNIEXPORT jint JNICALL
Java_com_load_so_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject jclass) {

    return addTest(12,50);
}
