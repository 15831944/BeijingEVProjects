/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/localdemdatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
			typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback)();
			class CLocalDemDataSourceProxy : public EarthView::World::Spatial3D::CLocalDemDataSource
			{
			private:
				EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback;
			public:
				CLocalDemDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CLocalDemDataSource(pList)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString(EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32(EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool(EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString(EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource(EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::getName();
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::getPropertySet();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::isValid();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::getDatasetInfo(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::getDatasetInfos(type);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::openDataset(name);
				}
				virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::closeDataset(dataset);
				}
				virtual ev_bool deleteDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::deleteDataset(name);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::toXML();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::clone();
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CLocalDemDataSource::createFeatureClass(name, geofield, fields);
				}
			};
			REGISTER_FACTORY_CLASS(CLocalDemDataSourceProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getType();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getPropertySet();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getPropertySet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getDatasetInfo(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getDatasetInfo(name1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_createDataset_ev_bool_EVString_EVString_IFields(_in const char* name, _in const char* dstFolder, _in const EarthView::World::Spatial::GeoDataset::IFields* attrFields )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string dstFolder1 = dstFolder;
				ev_bool objXXXX = EarthView::World::Spatial3D::CLocalDemDataSource::createDataset(name1, dstFolder1, attrFields);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::openDataset(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::openDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
			{
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::closeDataset(dataset);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
			{
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::closeDataset(dataset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::deleteDataset(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::deleteDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::toXML();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_clone_IDataSource_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataSource::clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_CLocalDemDataSource_getDataset_IDataset_EVString(void *pObjectXXXX, _in char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CLocalDemDataSource* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
			{
				CLocalDemDataSourceProxy* ptr = dynamic_cast<CLocalDemDataSourceProxy*>((EarthView::World::Spatial3D::CLocalDemDataSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
				}
			}
		}
	}
}
