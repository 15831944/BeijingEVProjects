/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idatasetiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback)();
				class IDatasetIteratorProxy : public EarthView::World::Spatial::GeoDataset::IDatasetIterator
				{
				private:
					EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback;
				public:
					IDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : IDatasetIterator(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset(EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback();
							return returnValue;
						}
						else
							return this->IDatasetIterator::next();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IDatasetIterator::getSize();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->IDatasetIterator::getDatasetType();
					}
				};
				REGISTER_FACTORY_CLASS(IDatasetIteratorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<IDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetIterator::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_Callback* pCallback )
				{
					IDatasetIteratorProxy* ptr = dynamic_cast<IDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetIterator::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<IDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetIterator*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetIterator::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_Callback* pCallback )
				{
					IDatasetIteratorProxy* ptr = dynamic_cast<IDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetIterator::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<IDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetIterator::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					IDatasetIteratorProxy* ptr = dynamic_cast<IDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDatasetIterator_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDatasetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDatasetIterator::getDatasetType();
					return (int)objXXXX;
				}
			}
		}
	}
}
