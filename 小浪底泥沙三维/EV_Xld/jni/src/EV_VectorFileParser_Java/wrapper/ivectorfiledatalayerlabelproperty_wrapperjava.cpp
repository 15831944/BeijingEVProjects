/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/ivectorfiledatalayerlabelproperty.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorFileParser
			{
				class JIVectorFileDataLayerLabelPropertyProxy : public EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty
				{
				 private:
					EarthView::World::Core::ev_string m_isVisible_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_ignoreScale_void_callback;
					EarthView::World::Core::ev_string m_setIgnoreScale_ev_bool_callback;
					EarthView::World::Core::ev_string m_getMinScale_void_callback;
					EarthView::World::Core::ev_string m_setMinScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getMaxScale_void_callback;
					EarthView::World::Core::ev_string m_setMaxScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_isOnTopOfFeature_void_callback;
					EarthView::World::Core::ev_string m_setOnTopOfFeature_ev_bool_callback;
					EarthView::World::Core::ev_string m_isParallelToLineAlways_void_callback;
					EarthView::World::Core::ev_string m_setParallelToLineAlways_ev_bool_callback;
					EarthView::World::Core::ev_string m_isHorizontalAlways_void_callback;
					EarthView::World::Core::ev_string m_setHorizontalAlways_ev_bool_callback;
					EarthView::World::Core::ev_string m_isInPolygon_void_callback;
					EarthView::World::Core::ev_string m_setInPolygon_ev_bool_callback;
					EarthView::World::Core::ev_string m_getRelationOfFontAndAxis_void_callback;
					EarthView::World::Core::ev_string m_setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback;
					EarthView::World::Core::ev_string m_setTextSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getTextSymbol_void_callback;
					EarthView::World::Core::ev_string m_setField_EVString_callback;
					EarthView::World::Core::ev_string m_getField_void_callback;
					EarthView::World::Core::ev_string m_setFractionLabel_ev_bool_callback;
					EarthView::World::Core::ev_string m_getIsFractionLabel_void_callback;
					EarthView::World::Core::ev_string m_setNumeratorField_EVString_callback;
					EarthView::World::Core::ev_string m_getNumeratorField_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JIVectorFileDataLayerLabelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorFileDataLayerLabelProperty(pList)
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
					void register_isVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isVisible_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_ignoreScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ignoreScale_void_callback = __method;
					}
					void register_setIgnoreScale_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setIgnoreScale_ev_bool_callback = __method;
					}
					void register_getMinScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinScale_void_callback = __method;
					}
					void register_setMinScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMinScale_ev_real64_callback = __method;
					}
					void register_getMaxScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxScale_void_callback = __method;
					}
					void register_setMaxScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaxScale_ev_real64_callback = __method;
					}
					void register_isOnTopOfFeature_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isOnTopOfFeature_void_callback = __method;
					}
					void register_setOnTopOfFeature_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setOnTopOfFeature_ev_bool_callback = __method;
					}
					void register_isParallelToLineAlways_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isParallelToLineAlways_void_callback = __method;
					}
					void register_setParallelToLineAlways_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParallelToLineAlways_ev_bool_callback = __method;
					}
					void register_isHorizontalAlways_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isHorizontalAlways_void_callback = __method;
					}
					void register_setHorizontalAlways_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setHorizontalAlways_ev_bool_callback = __method;
					}
					void register_isInPolygon_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isInPolygon_void_callback = __method;
					}
					void register_setInPolygon_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setInPolygon_ev_bool_callback = __method;
					}
					void register_getRelationOfFontAndAxis_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRelationOfFontAndAxis_void_callback = __method;
					}
					void register_setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback = __method;
					}
					void register_setTextSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTextSymbol_ISymbol_callback = __method;
					}
					void register_getTextSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTextSymbol_void_callback = __method;
					}
					void register_setField_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setField_EVString_callback = __method;
					}
					void register_getField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getField_void_callback = __method;
					}
					void register_setFractionLabel_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFractionLabel_ev_bool_callback = __method;
					}
					void register_getIsFractionLabel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIsFractionLabel_void_callback = __method;
					}
					void register_setNumeratorField_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setNumeratorField_EVString_callback = __method;
					}
					void register_getNumeratorField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNumeratorField_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual ev_bool isVisible() const
					{
						if (this->_gRef != NULL && this->m_isVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isVisible_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::isVisible();
						}
					}
					virtual void setVisible(ev_bool bVisible)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bVisible_j = (jboolean) bVisible;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bVisible_j);
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
							return this->IVectorFileDataLayerLabelProperty::setVisible(bVisible);
						}
					}
					virtual ev_bool ignoreScale() const
					{
						if (this->_gRef != NULL && this->m_ignoreScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ignoreScale_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::ignoreScale();
						}
					}
					virtual void setIgnoreScale(ev_bool bIgnore)
					{
						if (this->_gRef != NULL && this->m_setIgnoreScale_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bIgnore_j = (jboolean) bIgnore;
							jmethodID __method = __gr->getMethod("setIgnoreScale_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bIgnore_j);
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
							return this->IVectorFileDataLayerLabelProperty::setIgnoreScale(bIgnore);
						}
					}
					virtual ev_real64 getMinScale() const
					{
						if (this->_gRef != NULL && this->m_getMinScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::getMinScale();
						}
					}
					virtual void setMinScale(ev_real64 dMinScale)
					{
						if (this->_gRef != NULL && this->m_setMinScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble dMinScale_j = (jdouble) dMinScale;
							jmethodID __method = __gr->getMethod("setMinScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dMinScale_j);
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
							return this->IVectorFileDataLayerLabelProperty::setMinScale(dMinScale);
						}
					}
					virtual ev_real64 getMaxScale() const
					{
						if (this->_gRef != NULL && this->m_getMaxScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::getMaxScale();
						}
					}
					virtual void setMaxScale(ev_real64 dMaxScale)
					{
						if (this->_gRef != NULL && this->m_setMaxScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble dMaxScale_j = (jdouble) dMaxScale;
							jmethodID __method = __gr->getMethod("setMaxScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dMaxScale_j);
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
							return this->IVectorFileDataLayerLabelProperty::setMaxScale(dMaxScale);
						}
					}
					virtual ev_bool isOnTopOfFeature() const
					{
						if (this->_gRef != NULL && this->m_isOnTopOfFeature_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isOnTopOfFeature_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::isOnTopOfFeature();
						}
					}
					virtual void setOnTopOfFeature(ev_bool bOnTop)
					{
						if (this->_gRef != NULL && this->m_setOnTopOfFeature_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bOnTop_j = (jboolean) bOnTop;
							jmethodID __method = __gr->getMethod("setOnTopOfFeature_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bOnTop_j);
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
							return this->IVectorFileDataLayerLabelProperty::setOnTopOfFeature(bOnTop);
						}
					}
					virtual ev_bool isParallelToLineAlways() const
					{
						if (this->_gRef != NULL && this->m_isParallelToLineAlways_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isParallelToLineAlways_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::isParallelToLineAlways();
						}
					}
					virtual void setParallelToLineAlways(ev_bool bParallel)
					{
						if (this->_gRef != NULL && this->m_setParallelToLineAlways_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bParallel_j = (jboolean) bParallel;
							jmethodID __method = __gr->getMethod("setParallelToLineAlways_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bParallel_j);
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
							return this->IVectorFileDataLayerLabelProperty::setParallelToLineAlways(bParallel);
						}
					}
					virtual ev_bool isHorizontalAlways() const
					{
						if (this->_gRef != NULL && this->m_isHorizontalAlways_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isHorizontalAlways_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::isHorizontalAlways();
						}
					}
					virtual void setHorizontalAlways(ev_bool bHorizontal)
					{
						if (this->_gRef != NULL && this->m_setHorizontalAlways_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bHorizontal_j = (jboolean) bHorizontal;
							jmethodID __method = __gr->getMethod("setHorizontalAlways_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bHorizontal_j);
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
							return this->IVectorFileDataLayerLabelProperty::setHorizontalAlways(bHorizontal);
						}
					}
					virtual ev_bool isInPolygon() const
					{
						if (this->_gRef != NULL && this->m_isInPolygon_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isInPolygon_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::isInPolygon();
						}
					}
					virtual void setInPolygon(ev_bool bIn)
					{
						if (this->_gRef != NULL && this->m_setInPolygon_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bIn_j = (jboolean) bIn;
							jmethodID __method = __gr->getMethod("setInPolygon_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bIn_j);
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
							return this->IVectorFileDataLayerLabelProperty::setInPolygon(bIn);
						}
					}
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const
					{
						if (this->_gRef != NULL && this->m_getRelationOfFontAndAxis_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRelationOfFontAndAxis_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVFontAndAxisRelationType __values1 = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::getRelationOfFontAndAxis();
						}
					}
					virtual void setRelationOfFontAndAxis(EarthView::World::Spatial::Display::EVFontAndAxisRelationType type)
					{
						if (this->_gRef != NULL && this->m_setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
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
							return this->IVectorFileDataLayerLabelProperty::setRelationOfFontAndAxis(type);
						}
					}
					virtual void setTextSymbol(const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_setTextSymbol_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong pSymbol_j = (jlong) pSymbol;
							jmethodID __method = __gr->getMethod("setTextSymbol_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , pSymbol_j);
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
							return this->IVectorFileDataLayerLabelProperty::setTextSymbol(pSymbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if (this->_gRef != NULL && this->m_getTextSymbol_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTextSymbol_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::getTextSymbol();
						}
					}
					virtual void setField(const EVString& field)
					{
						if (this->_gRef != NULL && this->m_setField_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring field_wch = field;
							jstring field_j = __env->NewString((const jchar*)field_wch.getString(), field_wch.size());
							jmethodID __method = __gr->getMethod("setField_EVString_callback");
							__env->CallVoidMethod(__obj, __method , field_j);
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
							return this->IVectorFileDataLayerLabelProperty::setField(field);
						}
					}
					virtual EVString getField() const
					{
						if (this->_gRef != NULL && this->m_getField_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getField_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::getField();
						}
					}
					virtual void setFractionLabel(ev_bool fraction)
					{
						if (this->_gRef != NULL && this->m_setFractionLabel_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean fraction_j = (jboolean) fraction;
							jmethodID __method = __gr->getMethod("setFractionLabel_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , fraction_j);
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
							return this->IVectorFileDataLayerLabelProperty::setFractionLabel(fraction);
						}
					}
					virtual ev_bool getIsFractionLabel() const
					{
						if (this->_gRef != NULL && this->m_getIsFractionLabel_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getIsFractionLabel_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->IVectorFileDataLayerLabelProperty::getIsFractionLabel();
						}
					}
					virtual void setNumeratorField(const EVString& field)
					{
						if (this->_gRef != NULL && this->m_setNumeratorField_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring field_wch = field;
							jstring field_j = __env->NewString((const jchar*)field_wch.getString(), field_wch.size());
							jmethodID __method = __gr->getMethod("setNumeratorField_EVString_callback");
							__env->CallVoidMethod(__obj, __method , field_j);
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
							return this->IVectorFileDataLayerLabelProperty::setNumeratorField(field);
						}
					}
					virtual EVString getNumeratorField() const
					{
						if (this->_gRef != NULL && this->m_getNumeratorField_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getNumeratorField_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::getNumeratorField();
						}
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* clone() const
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ILabelProperty *__values1 = (EarthView::World::Spatial::Display::ILabelProperty*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileDataLayerLabelProperty::clone();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
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
							return this->IVectorFileDataLayerLabelProperty::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
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
							return this->IVectorFileDataLayerLabelProperty::toXmlElement();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->IVectorFileDataLayerLabelProperty::toStream(stream);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->IVectorFileDataLayerLabelProperty::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIVectorFileDataLayerLabelPropertyProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bVisible_j)
				{
					ev_bool bVisible = (ev_bool) bVisible_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setVisible(bVisible);
					}
					else
					{
						pObjectX->setVisible(bVisible);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bVisible_j)
				{
					ev_bool bVisible = (ev_bool) bVisible_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setVisible(bVisible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_ignoreScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::ignoreScale();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->ignoreScale();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1ignoreScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ignoreScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ignoreScale_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_ignoreScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::ignoreScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setIgnoreScale_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIgnore_j)
				{
					ev_bool bIgnore = (ev_bool) bIgnore_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setIgnoreScale(bIgnore);
					}
					else
					{
						pObjectX->setIgnoreScale(bIgnore);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setIgnoreScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setIgnoreScale_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setIgnoreScale_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setIgnoreScale_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIgnore_j)
				{
					ev_bool bIgnore = (ev_bool) bIgnore_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setIgnoreScale(bIgnore);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getMinScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMinScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getMinScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getMinScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMinScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setMinScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dMinScale_j)
				{
					ev_real64 dMinScale = (ev_real64) dMinScale_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMinScale(dMinScale);
					}
					else
					{
						pObjectX->setMinScale(dMinScale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setMinScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMinScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMinScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setMinScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dMinScale_j)
				{
					ev_real64 dMinScale = (ev_real64) dMinScale_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMinScale(dMinScale);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getMaxScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMaxScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getMaxScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getMaxScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMaxScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setMaxScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dMaxScale_j)
				{
					ev_real64 dMaxScale = (ev_real64) dMaxScale_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMaxScale(dMaxScale);
					}
					else
					{
						pObjectX->setMaxScale(dMaxScale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setMaxScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaxScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaxScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setMaxScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dMaxScale_j)
				{
					ev_real64 dMaxScale = (ev_real64) dMaxScale_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMaxScale(dMaxScale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isOnTopOfFeature_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isOnTopOfFeature();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isOnTopOfFeature();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1isOnTopOfFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isOnTopOfFeature_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isOnTopOfFeature_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isOnTopOfFeature_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isOnTopOfFeature();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setOnTopOfFeature_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bOnTop_j)
				{
					ev_bool bOnTop = (ev_bool) bOnTop_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setOnTopOfFeature(bOnTop);
					}
					else
					{
						pObjectX->setOnTopOfFeature(bOnTop);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setOnTopOfFeature_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setOnTopOfFeature_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setOnTopOfFeature_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setOnTopOfFeature_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bOnTop_j)
				{
					ev_bool bOnTop = (ev_bool) bOnTop_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setOnTopOfFeature(bOnTop);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isParallelToLineAlways_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isParallelToLineAlways();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isParallelToLineAlways();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1isParallelToLineAlways_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isParallelToLineAlways_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isParallelToLineAlways_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isParallelToLineAlways_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isParallelToLineAlways();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setParallelToLineAlways_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bParallel_j)
				{
					ev_bool bParallel = (ev_bool) bParallel_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setParallelToLineAlways(bParallel);
					}
					else
					{
						pObjectX->setParallelToLineAlways(bParallel);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setParallelToLineAlways_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParallelToLineAlways_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParallelToLineAlways_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setParallelToLineAlways_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bParallel_j)
				{
					ev_bool bParallel = (ev_bool) bParallel_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setParallelToLineAlways(bParallel);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isHorizontalAlways_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isHorizontalAlways();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isHorizontalAlways();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1isHorizontalAlways_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isHorizontalAlways_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isHorizontalAlways_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isHorizontalAlways_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isHorizontalAlways();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setHorizontalAlways_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHorizontal_j)
				{
					ev_bool bHorizontal = (ev_bool) bHorizontal_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setHorizontalAlways(bHorizontal);
					}
					else
					{
						pObjectX->setHorizontalAlways(bHorizontal);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setHorizontalAlways_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setHorizontalAlways_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setHorizontalAlways_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setHorizontalAlways_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHorizontal_j)
				{
					ev_bool bHorizontal = (ev_bool) bHorizontal_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setHorizontalAlways(bHorizontal);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isInPolygon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isInPolygon();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isInPolygon();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1isInPolygon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isInPolygon_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isInPolygon_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_isInPolygon_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isInPolygon();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setInPolygon_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIn_j)
				{
					ev_bool bIn = (ev_bool) bIn_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setInPolygon(bIn);
					}
					else
					{
						pObjectX->setInPolygon(bIn);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setInPolygon_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setInPolygon_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setInPolygon_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setInPolygon_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIn_j)
				{
					ev_bool bIn = (ev_bool) bIn_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setInPolygon(bIn);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getRelationOfFontAndAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getRelationOfFontAndAxis();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType __values1 = pObjectX->getRelationOfFontAndAxis();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getRelationOfFontAndAxis_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRelationOfFontAndAxis_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRelationOfFontAndAxis_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getRelationOfFontAndAxis_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getRelationOfFontAndAxis();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setRelationOfFontAndAxis_1EVFontAndAxisRelationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType type = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType) type_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setRelationOfFontAndAxis(type);
					}
					else
					{
						pObjectX->setRelationOfFontAndAxis(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setRelationOfFontAndAxis_1EVFontAndAxisRelationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setRelationOfFontAndAxis_1EVFontAndAxisRelationType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType type = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType) type_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setRelationOfFontAndAxis(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setTextSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setTextSymbol(pSymbol);
					}
					else
					{
						pObjectX->setTextSymbol(pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setTextSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTextSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTextSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setTextSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setTextSymbol(pSymbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getTextSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getTextSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getTextSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getTextSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTextSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTextSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getTextSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getTextSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setField(field);
					}
					else
					{
						pObjectX->setField(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setField_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setField_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setField(field);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getField();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getField();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getField_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getField();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setFractionLabel_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean fraction_j)
				{
					ev_bool fraction = (ev_bool) fraction_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setFractionLabel(fraction);
					}
					else
					{
						pObjectX->setFractionLabel(fraction);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setFractionLabel_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFractionLabel_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFractionLabel_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setFractionLabel_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean fraction_j)
				{
					ev_bool fraction = (ev_bool) fraction_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setFractionLabel(fraction);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getIsFractionLabel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getIsFractionLabel();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getIsFractionLabel();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getIsFractionLabel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIsFractionLabel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIsFractionLabel_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getIsFractionLabel_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getIsFractionLabel();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setNumeratorField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setNumeratorField(field);
					}
					else
					{
						pObjectX->setNumeratorField(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1setNumeratorField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setNumeratorField_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setNumeratorField_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_setNumeratorField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setNumeratorField(field);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getNumeratorField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getNumeratorField();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getNumeratorField();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1getNumeratorField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNumeratorField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNumeratorField_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_getNumeratorField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getNumeratorField();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						EarthView::World::Spatial::Display::ILabelProperty* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileDataLayerLabelPropertyProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfiledatalayerlabelproperty_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileDataLayerLabelPropertyProxy *pObjectX = (JIVectorFileDataLayerLabelPropertyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
