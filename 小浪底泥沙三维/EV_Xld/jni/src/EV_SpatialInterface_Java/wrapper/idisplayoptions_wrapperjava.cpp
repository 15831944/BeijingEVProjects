/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idisplayoptions.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVCompositingModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CM_SourceOver,
					CM_SourceCopy
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVCompositingQualityHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CQ_Invalid,
					CQ_Default,
					CQ_HighSpeed,
					CQ_HighQuality,
					CQ_GammaCorrected,
					CQ_AssumeLinear
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVTextRenderingHintHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TRH_SystemDefault,
					TRH_SingleBitPerPixelGridFit,
					TRH_SingleBitPerPixel,
					TRH_AntiAliasGridFit,
					TRH_AntiAlias,
					TRH_ClearTypeGridFit
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVInterpolationModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					IM_Invalid,
					IM_Default,
					IM_LowQuality,
					IM_HighQuality,
					IM_Bilinear,
					IM_Bicubic,
					IM_NearestNeighbor,
					IM_HighQualityBilinear,
					IM_HighQualityBicubic
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVSmoothingModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SM_Invalid,
					SM_Default,
					SM_HighSpeed,
					SM_HighQuality,
					SM_None,
					SM_AntiAlias
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVPixelOffsetModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					POM_nvalid,
					POM_Default,
					POM_HighSpeed,
					POM_HighQuality,
					POM_None,
					POM_Half
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			class JIDisplayOptionsProxy : public EarthView::World::Display::IDisplayOptions
			{
			 private:
				EarthView::World::Core::ev_string m_getCompositingMode_EVCompositingMode_callback;
				EarthView::World::Core::ev_string m_setEVCompositingMode_EVCompositingMode_callback;
				EarthView::World::Core::ev_string m_getCompositingQuality_EVCompositingQuality_callback;
				EarthView::World::Core::ev_string m_setCompositingQuality_EVCompositingQuality_callback;
				EarthView::World::Core::ev_string m_getTextRenderingHint_EVTextRenderingHint_callback;
				EarthView::World::Core::ev_string m_setTextRenderingHint_EVTextRenderingHint_callback;
				EarthView::World::Core::ev_string m_getInterpolationMode_EVInterpolationMode_callback;
				EarthView::World::Core::ev_string m_setInterpolationMode_EVInterpolationMode_callback;
				EarthView::World::Core::ev_string m_getSmoothingMode_EVSmoothingMode_callback;
				EarthView::World::Core::ev_string m_setSmoothingMode_EVSmoothingMode_callback;
				EarthView::World::Core::ev_string m_getPixelOffsetMode_EVPixelOffsetMode_callback;
				EarthView::World::Core::ev_string m_setPixelOffsetMode_EVPixelOffsetMode_callback;
				EarthView::World::Core::ev_string m_loadFromXML_CXmlElement_callback;
				EarthView::World::Core::ev_string m_toXmlElement_void_callback;
			public:
				JIDisplayOptionsProxy(EarthView::World::Core::CNameValuePairList *pList) : IDisplayOptions(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_getCompositingMode_EVCompositingMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCompositingMode_EVCompositingMode_callback = __method;
				}
				void register_setEVCompositingMode_EVCompositingMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEVCompositingMode_EVCompositingMode_callback = __method;
				}
				void register_getCompositingQuality_EVCompositingQuality_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCompositingQuality_EVCompositingQuality_callback = __method;
				}
				void register_setCompositingQuality_EVCompositingQuality_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCompositingQuality_EVCompositingQuality_callback = __method;
				}
				void register_getTextRenderingHint_EVTextRenderingHint_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextRenderingHint_EVTextRenderingHint_callback = __method;
				}
				void register_setTextRenderingHint_EVTextRenderingHint_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTextRenderingHint_EVTextRenderingHint_callback = __method;
				}
				void register_getInterpolationMode_EVInterpolationMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolationMode_EVInterpolationMode_callback = __method;
				}
				void register_setInterpolationMode_EVInterpolationMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInterpolationMode_EVInterpolationMode_callback = __method;
				}
				void register_getSmoothingMode_EVSmoothingMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSmoothingMode_EVSmoothingMode_callback = __method;
				}
				void register_setSmoothingMode_EVSmoothingMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSmoothingMode_EVSmoothingMode_callback = __method;
				}
				void register_getPixelOffsetMode_EVPixelOffsetMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPixelOffsetMode_EVPixelOffsetMode_callback = __method;
				}
				void register_setPixelOffsetMode_EVPixelOffsetMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPixelOffsetMode_EVPixelOffsetMode_callback = __method;
				}
				void register_loadFromXML_CXmlElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadFromXML_CXmlElement_callback = __method;
				}
				void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_toXmlElement_void_callback = __method;
				}
				virtual ev_bool getCompositingMode(EarthView::World::Display::EVCompositingMode* mode)
				{
					if (this->_gRef != NULL && this->m_getCompositingMode_EVCompositingMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong mode_j = (jlong) mode;
						jmethodID __method = __gr->getMethod("getCompositingMode_EVCompositingMode_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::getCompositingMode(mode);
					}
				}
				virtual void setEVCompositingMode(EarthView::World::Display::EVCompositingMode mode)
				{
					if (this->_gRef != NULL && this->m_setEVCompositingMode_EVCompositingMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint mode_j = (jint) mode;
						jmethodID __method = __gr->getMethod("setEVCompositingMode_EVCompositingMode_callback");
						__env->CallVoidMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::setEVCompositingMode(mode);
					}
				}
				virtual ev_bool getCompositingQuality(EarthView::World::Display::EVCompositingQuality* quality)
				{
					if (this->_gRef != NULL && this->m_getCompositingQuality_EVCompositingQuality_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong quality_j = (jlong) quality;
						jmethodID __method = __gr->getMethod("getCompositingQuality_EVCompositingQuality_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , quality_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::getCompositingQuality(quality);
					}
				}
				virtual void setCompositingQuality(EarthView::World::Display::EVCompositingQuality quality)
				{
					if (this->_gRef != NULL && this->m_setCompositingQuality_EVCompositingQuality_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint quality_j = (jint) quality;
						jmethodID __method = __gr->getMethod("setCompositingQuality_EVCompositingQuality_callback");
						__env->CallVoidMethod(__obj, __method , quality_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::setCompositingQuality(quality);
					}
				}
				virtual ev_bool getTextRenderingHint(EarthView::World::Display::EVTextRenderingHint* hint)
				{
					if (this->_gRef != NULL && this->m_getTextRenderingHint_EVTextRenderingHint_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong hint_j = (jlong) hint;
						jmethodID __method = __gr->getMethod("getTextRenderingHint_EVTextRenderingHint_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , hint_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::getTextRenderingHint(hint);
					}
				}
				virtual void setTextRenderingHint(EarthView::World::Display::EVTextRenderingHint hint)
				{
					if (this->_gRef != NULL && this->m_setTextRenderingHint_EVTextRenderingHint_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint hint_j = (jint) hint;
						jmethodID __method = __gr->getMethod("setTextRenderingHint_EVTextRenderingHint_callback");
						__env->CallVoidMethod(__obj, __method , hint_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::setTextRenderingHint(hint);
					}
				}
				virtual ev_bool getInterpolationMode(EarthView::World::Display::EVInterpolationMode* mode)
				{
					if (this->_gRef != NULL && this->m_getInterpolationMode_EVInterpolationMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong mode_j = (jlong) mode;
						jmethodID __method = __gr->getMethod("getInterpolationMode_EVInterpolationMode_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::getInterpolationMode(mode);
					}
				}
				virtual void setInterpolationMode(EarthView::World::Display::EVInterpolationMode mode)
				{
					if (this->_gRef != NULL && this->m_setInterpolationMode_EVInterpolationMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint mode_j = (jint) mode;
						jmethodID __method = __gr->getMethod("setInterpolationMode_EVInterpolationMode_callback");
						__env->CallVoidMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::setInterpolationMode(mode);
					}
				}
				virtual ev_bool getSmoothingMode(EarthView::World::Display::EVSmoothingMode* mode)
				{
					if (this->_gRef != NULL && this->m_getSmoothingMode_EVSmoothingMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong mode_j = (jlong) mode;
						jmethodID __method = __gr->getMethod("getSmoothingMode_EVSmoothingMode_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::getSmoothingMode(mode);
					}
				}
				virtual void setSmoothingMode(EarthView::World::Display::EVSmoothingMode mode)
				{
					if (this->_gRef != NULL && this->m_setSmoothingMode_EVSmoothingMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint mode_j = (jint) mode;
						jmethodID __method = __gr->getMethod("setSmoothingMode_EVSmoothingMode_callback");
						__env->CallVoidMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::setSmoothingMode(mode);
					}
				}
				virtual ev_bool getPixelOffsetMode(EarthView::World::Display::EVPixelOffsetMode* mode)
				{
					if (this->_gRef != NULL && this->m_getPixelOffsetMode_EVPixelOffsetMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong mode_j = (jlong) mode;
						jmethodID __method = __gr->getMethod("getPixelOffsetMode_EVPixelOffsetMode_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::getPixelOffsetMode(mode);
					}
				}
				virtual void setPixelOffsetMode(EarthView::World::Display::EVPixelOffsetMode mode)
				{
					if (this->_gRef != NULL && this->m_setPixelOffsetMode_EVPixelOffsetMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint mode_j = (jint) mode;
						jmethodID __method = __gr->getMethod("setPixelOffsetMode_EVPixelOffsetMode_callback");
						__env->CallVoidMethod(__obj, __method , mode_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::setPixelOffsetMode(mode);
					}
				}
				virtual void loadFromXML(EarthView::World::Core::CXmlElement& element)
				{
					if (this->_gRef != NULL && this->m_loadFromXML_CXmlElement_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong element_j = (jlong) &element;
						jmethodID __method = __gr->getMethod("loadFromXML_CXmlElement_callback");
						__env->CallVoidMethod(__obj, __method , element_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->IDisplayOptions::loadFromXML(element);
					}
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement()
				{
					if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplayOptions::toXmlElement();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JIDisplayOptionsProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getCompositingMode_1EVCompositingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVCompositingMode *mode = (EarthView::World::Display::EVCompositingMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getCompositingMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getCompositingMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1getCompositingMode_1EVCompositingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCompositingMode_EVCompositingMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCompositingMode_EVCompositingMode_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getCompositingMode_1EVCompositingMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVCompositingMode *mode = (EarthView::World::Display::EVCompositingMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getCompositingMode(mode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setEVCompositingMode_1EVCompositingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVCompositingMode mode = (EarthView::World::Display::EVCompositingMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::setEVCompositingMode(mode);
				}
				else
				{
					pObjectX->setEVCompositingMode(mode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1setEVCompositingMode_1EVCompositingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEVCompositingMode_EVCompositingMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEVCompositingMode_EVCompositingMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setEVCompositingMode_1EVCompositingMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVCompositingMode mode = (EarthView::World::Display::EVCompositingMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::setEVCompositingMode(mode);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getCompositingQuality_1EVCompositingQuality(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong quality_j)
			{
				EarthView::World::Display::EVCompositingQuality *quality = (EarthView::World::Display::EVCompositingQuality*) quality_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getCompositingQuality(quality);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getCompositingQuality(quality);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1getCompositingQuality_1EVCompositingQuality(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCompositingQuality_EVCompositingQuality_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCompositingQuality_EVCompositingQuality_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getCompositingQuality_1EVCompositingQuality_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong quality_j)
			{
				EarthView::World::Display::EVCompositingQuality *quality = (EarthView::World::Display::EVCompositingQuality*) quality_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getCompositingQuality(quality);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setCompositingQuality_1EVCompositingQuality(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint quality_j)
			{
				EarthView::World::Display::EVCompositingQuality quality = (EarthView::World::Display::EVCompositingQuality) quality_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::setCompositingQuality(quality);
				}
				else
				{
					pObjectX->setCompositingQuality(quality);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1setCompositingQuality_1EVCompositingQuality(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCompositingQuality_EVCompositingQuality_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCompositingQuality_EVCompositingQuality_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setCompositingQuality_1EVCompositingQuality_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint quality_j)
			{
				EarthView::World::Display::EVCompositingQuality quality = (EarthView::World::Display::EVCompositingQuality) quality_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::setCompositingQuality(quality);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getTextRenderingHint_1EVTextRenderingHint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hint_j)
			{
				EarthView::World::Display::EVTextRenderingHint *hint = (EarthView::World::Display::EVTextRenderingHint*) hint_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getTextRenderingHint(hint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getTextRenderingHint(hint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1getTextRenderingHint_1EVTextRenderingHint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextRenderingHint_EVTextRenderingHint_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextRenderingHint_EVTextRenderingHint_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getTextRenderingHint_1EVTextRenderingHint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hint_j)
			{
				EarthView::World::Display::EVTextRenderingHint *hint = (EarthView::World::Display::EVTextRenderingHint*) hint_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getTextRenderingHint(hint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setTextRenderingHint_1EVTextRenderingHint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint hint_j)
			{
				EarthView::World::Display::EVTextRenderingHint hint = (EarthView::World::Display::EVTextRenderingHint) hint_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::setTextRenderingHint(hint);
				}
				else
				{
					pObjectX->setTextRenderingHint(hint);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1setTextRenderingHint_1EVTextRenderingHint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTextRenderingHint_EVTextRenderingHint_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTextRenderingHint_EVTextRenderingHint_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setTextRenderingHint_1EVTextRenderingHint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint hint_j)
			{
				EarthView::World::Display::EVTextRenderingHint hint = (EarthView::World::Display::EVTextRenderingHint) hint_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::setTextRenderingHint(hint);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getInterpolationMode_1EVInterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVInterpolationMode *mode = (EarthView::World::Display::EVInterpolationMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getInterpolationMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getInterpolationMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1getInterpolationMode_1EVInterpolationMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolationMode_EVInterpolationMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolationMode_EVInterpolationMode_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getInterpolationMode_1EVInterpolationMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVInterpolationMode *mode = (EarthView::World::Display::EVInterpolationMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getInterpolationMode(mode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setInterpolationMode_1EVInterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVInterpolationMode mode = (EarthView::World::Display::EVInterpolationMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::setInterpolationMode(mode);
				}
				else
				{
					pObjectX->setInterpolationMode(mode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1setInterpolationMode_1EVInterpolationMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInterpolationMode_EVInterpolationMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInterpolationMode_EVInterpolationMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setInterpolationMode_1EVInterpolationMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVInterpolationMode mode = (EarthView::World::Display::EVInterpolationMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::setInterpolationMode(mode);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getSmoothingMode_1EVSmoothingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVSmoothingMode *mode = (EarthView::World::Display::EVSmoothingMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getSmoothingMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getSmoothingMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1getSmoothingMode_1EVSmoothingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSmoothingMode_EVSmoothingMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSmoothingMode_EVSmoothingMode_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getSmoothingMode_1EVSmoothingMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVSmoothingMode *mode = (EarthView::World::Display::EVSmoothingMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getSmoothingMode(mode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setSmoothingMode_1EVSmoothingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVSmoothingMode mode = (EarthView::World::Display::EVSmoothingMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::setSmoothingMode(mode);
				}
				else
				{
					pObjectX->setSmoothingMode(mode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1setSmoothingMode_1EVSmoothingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSmoothingMode_EVSmoothingMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSmoothingMode_EVSmoothingMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setSmoothingMode_1EVSmoothingMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVSmoothingMode mode = (EarthView::World::Display::EVSmoothingMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::setSmoothingMode(mode);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getPixelOffsetMode_1EVPixelOffsetMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVPixelOffsetMode *mode = (EarthView::World::Display::EVPixelOffsetMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getPixelOffsetMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPixelOffsetMode(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1getPixelOffsetMode_1EVPixelOffsetMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPixelOffsetMode_EVPixelOffsetMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPixelOffsetMode_EVPixelOffsetMode_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Idisplayoptions_getPixelOffsetMode_1EVPixelOffsetMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mode_j)
			{
				EarthView::World::Display::EVPixelOffsetMode *mode = (EarthView::World::Display::EVPixelOffsetMode*) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::getPixelOffsetMode(mode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setPixelOffsetMode_1EVPixelOffsetMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVPixelOffsetMode mode = (EarthView::World::Display::EVPixelOffsetMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::setPixelOffsetMode(mode);
				}
				else
				{
					pObjectX->setPixelOffsetMode(mode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1setPixelOffsetMode_1EVPixelOffsetMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPixelOffsetMode_EVPixelOffsetMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPixelOffsetMode_EVPixelOffsetMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_setPixelOffsetMode_1EVPixelOffsetMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::EVPixelOffsetMode mode = (EarthView::World::Display::EVPixelOffsetMode) mode_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::setPixelOffsetMode(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_loadFromXML_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
			{
				EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					pObjectX->EarthView::World::Display::IDisplayOptions::loadFromXML(element);
				}
				else
				{
					pObjectX->loadFromXML(element);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1loadFromXML_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadFromXML_CXmlElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadFromXML_CXmlElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_loadFromXML_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
			{
				EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplayOptions::loadFromXML(element);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Idisplayoptions_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplayOptionsProxy))
				{
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplayoptions_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplayOptionsProxy *pObjectX = (JIDisplayOptionsProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_toXmlElement_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Idisplayoptions_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IDisplayOptions *pObjectX = (EarthView::World::Display::IDisplayOptions*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Display::IDisplayOptions::toXmlElement();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
