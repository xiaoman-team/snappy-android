/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_xiaoman_library_android_snappy_SnappyNative */

#ifndef _Included_cn_xiaoman_library_android_snappy_SnappyNative
#define _Included_cn_xiaoman_library_android_snappy_SnappyNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    nativeLibraryVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_nativeLibraryVersion
        (JNIEnv *, jobject);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    rawCompress
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_rawCompress__JJJ
        (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    rawUncompress
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_rawUncompress__JJJ
        (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    rawCompress
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_rawCompress__Ljava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2I
        (JNIEnv *, jobject, jobject, jint, jint, jobject, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    rawCompress
 * Signature: (Ljava/lang/Object;IILjava/lang/Object;I)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_rawCompress__Ljava_lang_Object_2IILjava_lang_Object_2I
        (JNIEnv *, jobject, jobject, jint, jint, jobject, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    rawUncompress
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_rawUncompress__Ljava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2I
        (JNIEnv *, jobject, jobject, jint, jint, jobject, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    rawUncompress
 * Signature: (Ljava/lang/Object;IILjava/lang/Object;I)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_rawUncompress__Ljava_lang_Object_2IILjava_lang_Object_2I
        (JNIEnv *, jobject, jobject, jint, jint, jobject, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    maxCompressedLength
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_maxCompressedLength
        (JNIEnv *, jobject, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    uncompressedLength
 * Signature: (Ljava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_uncompressedLength__Ljava_nio_ByteBuffer_2II
        (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    uncompressedLength
 * Signature: (Ljava/lang/Object;II)I
 */
JNIEXPORT jint JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_uncompressedLength__Ljava_lang_Object_2II
        (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    uncompressedLength
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_uncompressedLength__JJ
        (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    isValidCompressedBuffer
 * Signature: (Ljava/nio/ByteBuffer;II)Z
 */
JNIEXPORT jboolean JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_isValidCompressedBuffer__Ljava_nio_ByteBuffer_2II
        (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    isValidCompressedBuffer
 * Signature: (Ljava/lang/Object;II)Z
 */
JNIEXPORT jboolean JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_isValidCompressedBuffer__Ljava_lang_Object_2II
        (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    isValidCompressedBuffer
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_isValidCompressedBuffer__JJJ
        (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     cn_xiaoman_library_android_snappy_SnappyNative
 * Method:    arrayCopy
 * Signature: (Ljava/lang/Object;IILjava/lang/Object;I)V
 */
JNIEXPORT void JNICALL Java_cn_xiaoman_library_android_snappy_SnappyNative_arrayCopy
        (JNIEnv *, jobject, jobject, jint, jint, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif