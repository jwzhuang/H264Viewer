/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_co_halfninja_videokit_Videokit */

#ifndef _Included_tw_jwzhuang_h264_H264Decoder
#define _Included_tw_jwzhuang_h264_H264Decoder
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jint JNICALL Java_tw_jwzhuang_ipcamviewer_h264_Decoder_Init(JNIEnv* env, jobject thiz);
JNIEXPORT jint JNICALL Java_tw_jwzhuang_ipcamviewer_h264_Decoder_free(JNIEnv* env, jobject thiz);
JNIEXPORT jint JNICALL Java_tw_jwzhuang_ipcamviewer_h264_Decoder_decodeFrame(JNIEnv* env, jobject thiz, const jbyteArray pSrcData, const jint dwDataLen, const jbyteArray pDeData);
#ifdef __cplusplus
}
#endif
#endif