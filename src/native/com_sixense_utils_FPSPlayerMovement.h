/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sixense_utils_FPSPlayerMovement */

#ifndef _Included_com_sixense_utils_FPSPlayerMovement
#define _Included_com_sixense_utils_FPSPlayerMovement
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_sixense_utils_FPSPlayerMovement_create
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_FPSPlayerMovement_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    setGame
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_FPSPlayerMovement_setGame
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    update
 * Signature: (Lcom/sixense/ControllerData;Lcom/sixense/ControllerData;F)I
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_utils_FPSPlayerMovement_update
  (JNIEnv *, jobject, jobject, jobject, jfloat);

/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    getWalkDir
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_sixense_utils_FPSPlayerMovement_getWalkDir
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    setParameter
 * Signature: (Lcom/sixense/utils/enums/EnumMovementParam;F)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_FPSPlayerMovement_setParameter
  (JNIEnv *, jobject, jobject, jfloat);

/*
 * Class:     com_sixense_utils_FPSPlayerMovement
 * Method:    getParameter
 * Signature: (Lcom/sixense/utils/enums/EnumMovementParam;)F
 */
JNIEXPORT jfloat JNICALL Java_com_sixense_utils_FPSPlayerMovement_getParameter
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif