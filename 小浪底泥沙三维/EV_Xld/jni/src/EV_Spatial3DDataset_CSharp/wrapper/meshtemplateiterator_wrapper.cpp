/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/meshtemplateiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback)(_in ev_bool bCreateNewOne);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				class CMeshTemplateIteratorProxy : public EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator
				{
				private:
					EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback;
				public:
					CMeshTemplateIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshTemplateIterator(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields(EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateIterator::next();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next(_in ev_bool bCreateNewOne)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback(bCreateNewOne);
							return returnValue;
						}
						else
							return this->CMeshTemplateIterator::next(bCreateNewOne);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateIterator::getFields();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMeshTemplateIterator::getField(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CMeshTemplateIterator::findField(fieldName);
					}
				};
				REGISTER_FACTORY_CLASS(CMeshTemplateIteratorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_Callback* pCallback )
				{
					CMeshTemplateIteratorProxy* ptr = dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool(void *pObjectXXXX, _in ev_bool bCreateNewOne )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::next(bCreateNewOne);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->next(bCreateNewOne);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_Callback* pCallback )
				{
					CMeshTemplateIteratorProxy* ptr = dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_next_IFeature_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bCreateNewOne )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::next(bCreateNewOne);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::getFields();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFields();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_Callback* pCallback )
				{
					CMeshTemplateIteratorProxy* ptr = dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getFields_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::getFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::getField(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateIteratorProxy* ptr = dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_getField_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::getField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_Callback* pCallback )
				{
					CMeshTemplateIteratorProxy* ptr = dynamic_cast<CMeshTemplateIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateIterator_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
