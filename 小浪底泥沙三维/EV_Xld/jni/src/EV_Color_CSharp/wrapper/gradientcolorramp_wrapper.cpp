/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/gradientcolorramp.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback)(_in ev_uint32 count);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback)(_in ev_uint32 index);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback)();
				typedef EarthView::World::Spatial::Display::CColorRamp*  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback)(_in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CGradientColorRampProxy : public EarthView::World::Spatial::Display::CGradientColorRamp
				{
				private:
					EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback;
					EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback;
				public:
					CGradientColorRampProxy(EarthView::World::Core::CNameValuePairList *pList) : CGradientColorRamp(pList)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback = NULL;
						m_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32(EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32(EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32(EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType(EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp(EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream(EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp(EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::EVColorRampType getColorRampType() const
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVColorRampType returnValue = (EarthView::World::Spatial::Display::EVColorRampType)m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback();
							return returnValue;
						}
						else
							return this->CGradientColorRamp::getColorRampType();
					}
					virtual void createRamp(_in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback(count);
						}
						else
							return this->CGradientColorRamp::createRamp(count);
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CColorRamp* returnValue = m_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGradientColorRamp::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGradientColorRamp::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CGradientColorRamp::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CGradientColorRamp::fromXmlElement(element);
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp)
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback(pColorRamp);
							return returnValue;
						}
						else
							return this->CGradientColorRamp::equal(pColorRamp);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGradientColorRamp::fromStream(stream);
					}
					virtual ev_uint32 getColorCount() const
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGradientColorRamp::getColorCount();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CGradientColorRamp::getColorRef(index);
					}
				};
				REGISTER_FACTORY_CLASS(CGradientColorRampProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVColorRampType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::getColorRampType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVColorRampType objXXXX = ptrNativeObject->getColorRampType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getColorRampType_EVColorRampType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVColorRampType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::getColorRampType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getStartColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getStartColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getEndColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getEndColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_setStartColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->setStartColor(color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_setEndColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->setEndColor(color);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getType_EVGradientColorRampType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVGradientColorRampType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_setType_void_EVGradientColorRampType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Spatial::Display::EVGradientColorRampType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_useMultiStop_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->useMultiStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getStopCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getStopCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_setUseMultiStop_void_ev_bool(void *pObjectXXXX, _in ev_bool used )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->setUseMultiStop(used);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_addStop_ev_int32_IColor_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color, _in ev_uint32 offset )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->addStop(color, offset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_contains_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 offset )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->contains(offset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_remove_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_removeAll_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeAll();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getStop_IColor_ev_uint32(void *pObjectXXXX, _in ev_uint32 offset )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getStop(offset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_getPosition_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getPosition(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::createRamp(count);
					else
						ptrNativeObject->createRamp(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_createRamp_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::createRamp(count);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_clone_CColorRamp_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::equal(pColorRamp);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pColorRamp);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_equal_ev_bool_CColorRamp_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::equal(pColorRamp);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					if (dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGradientColorRamp_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CGradientColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CGradientColorRamp::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32_Callback* pCallback )
				{
					CGradientColorRampProxy* ptr = dynamic_cast<CGradientColorRampProxy*>((EarthView::World::Spatial::Display::CGradientColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CGradientColorRamp_getColorRef_IColor_ev_uint32(pCallback);
					}
				}
			}
		}
	}
}
