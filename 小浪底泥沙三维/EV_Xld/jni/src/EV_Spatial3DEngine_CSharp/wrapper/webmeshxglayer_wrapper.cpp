/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/webmeshxglayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CWebMeshXGLayerProxy : public EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback;
				public:
					CWebMeshXGLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebMeshXGLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CWebMeshXGLayer::fromXmlElement(element);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CWebMeshXGLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback();
						}
						else
							return this->CWebMeshXGLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CWebMeshXGLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getLayerSelection();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CWebMeshXGLayer::setSelectable(selectable);
					}
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getGotoParam(latitude, longitude, altitude);
					}
					virtual ev_real64 getAltitudeValue()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getAltitudeValue();
					}
					virtual void getPosition(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CWebMeshXGLayer::getPosition(lat, lon, alt);
					}
					virtual void getSpatialInfo(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CWebMeshXGLayer::getSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getDataset();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CWebMeshXGLayer::setVisible(visible);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CWebMeshXGLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CWebMeshXGLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CWebMeshXGLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CWebMeshXGLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWebMeshXGLayer::toStream(stream);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback(&ray, viewport, &point);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::selectBy(ray, viewport, point);
					}
					virtual void setEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CWebMeshXGLayer::setEnvParam(ambient, diffuse, specular);
					}
					virtual void getEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CWebMeshXGLayer::getEnvParam(ambient, diffuse, specular);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CWebMeshXGLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CWebMeshXGLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CWebMeshXGLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CWebMeshXGLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::isVisible();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getSceneManager();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWebMeshXGLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getDataSource();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CWebMeshXGLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CWebMeshXGLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CWebMeshXGLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CWebMeshXGLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CWebMeshXGLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CWebMeshXGLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setRecordObjectVisible_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 id, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->setRecordObjectVisible(id, flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setRecordObjectVisible_void_IntVector_ev_bool(void *pObjectXXXX, _in const void* ids, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->setRecordObjectVisible(*(EarthView::World::Core::IntVector*)ids, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getRecordObjectVisible_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getRecordObjectVisible(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setHighLight_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 id, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->setHighLight(id, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHighLight_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHighLight(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearHightLight_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->clearHightLight();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setComponentHighLight_void_ev_uint32_EVString_ev_bool(void *pObjectXXXX, _in ev_uint32 id, _in const char* compName, _in ev_bool flag )
				{
					EarthView::World::Core::ev_string compName1 = compName;
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->setComponentHighLight(id, compName1, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getComponentHighLight_ev_bool_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 id, _in const char* compName )
				{
					EarthView::World::Core::ev_string compName1 = compName;
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getComponentHighLight(id, compName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearComponentHightLight_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->clearComponentHightLight();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSelectedComponent_ev_bool_ev_uint32_ev_uint64_ev_int32_ev_int32_ev_int32_CComponent(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint64 objectHandle, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _out void* outComp )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedComponent(id, objectHandle, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial3D::CComponent*)outComp);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSelectedComponent_ev_bool_ev_uint32_ev_uint64_ev_int32_ev_int32_ev_int32_ev_uint32_CComponent(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint64 objectHandle, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _in ev_uint32 parentLevel, _out void* outComp )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedComponent(id, objectHandle, submeshIndex, instanceIndex, segmentIndex, parentLevel, *(EarthView::World::Spatial3D::CComponent*)outComp);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSelectedObjectName_ev_bool_ev_uint32_ev_uint64_EVString(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint64 objectHandle, _out char*& name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectName(id, objectHandle, name1);
					name=name1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSelectedObjectPosition_ev_bool_ev_uint32_ev_uint64_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint64 objectHandle, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localOrientation )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectPosition(id, objectHandle, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::setLayerSelection(selection);
					else
						ptrNativeObject->setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setLayerSelection_void_ILayerSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getRecordFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getRecordFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getAltitudeValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_selectBy_ev_bool_CRay_CViewport_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CWebMeshXGLayerProxy* ptr = dynamic_cast<CWebMeshXGLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback)(_in char*& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CWebMeshXGLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CWebMeshXGLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebMeshXGLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback(name_Char, ds);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayerFactory::createInstance(name, ds);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CWebMeshXGLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CWebMeshXGLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CWebMeshXGLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getSingletonPtr_CWebMeshXGLayerFactory( )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* objXXXX = EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CWebMeshXGLayerFactoryProxy* ptr = dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::createInstance(name1, ds);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(name1, ds);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback )
				{
					CWebMeshXGLayerFactoryProxy* ptr = dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_IDataset_NoVirtual(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::createInstance(name1, ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CWebMeshXGLayerFactoryProxy* ptr = dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CWebMeshXGLayerFactoryProxy* ptr = dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CWebMeshXGLayerFactoryProxy* ptr = dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_msObqLayerFactoryName()
				{
					const EVString objXXXX = EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory::msObqLayerFactoryName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CWebMeshXGLayerFactoryProxy* ptr = dynamic_cast<CWebMeshXGLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebMeshXGLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
