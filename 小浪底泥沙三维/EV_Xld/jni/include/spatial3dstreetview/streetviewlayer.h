#ifndef EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWLAYER_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/itheme.h"
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include "spatial3dlayer/featuregrouplayer.h"
#include "spatial3dengine/i3dlayer.h"
#include "spatial3dengine/globecamera.h"
#include "spatial3dstreetview/streetviewstructs.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

				class CStreetViewLayerFactory;

				class EV_Spatial3DStreetView_DLL CStreetViewLayerListener : public EarthView::World::Core::CBaseObject
				{
				ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CStreetViewLayerListener(_in EarthView::World::Core::CNameValuePairList *pList) {};
				public:
					CStreetViewLayerListener() {};
					virtual ev_void onLayerHidden() {};
					virtual ev_void onLayerRemoved() {};
				};

				class EV_Spatial3DStreetView_DLL CStreetViewLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CStreetViewLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CStreetViewLayer();
					CStreetViewLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);

					virtual ~CStreetViewLayer();

					/// <summary>
					/// ͼ���Ƿ�ѡ��
					/// </summary>
					/// <returns>��ѡ�񷵻�true�����򷵻�false</returns>
					virtual ev_bool isSelectable() const;

					/// <summary>
					/// ����ͼ��ѡ��״̬
					/// </summary>
					/// <param name="selectable">true ��ѡ��false û�б�ѡ��</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);


					/// <summary>
					/// ͼ�㶨λ
					/// <param name="latitude">γ��</param>
					/// <param name="longitude">����</param>
					/// <param name="altitude">�߶�</param>
					/// <returns>true��ת�ɹ���falseͼ��������</returns>
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude ,_out ev_real64& altitude);
					
				
					/// <summary>
					/// ��ȡͼ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ�������</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// ͼ���¡
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					/// <summary>
					/// ����ͼ��ɼ���
					/// </summary>
					/// <param name="visible">�ɼ���</param>
					virtual ev_void setVisible_impl(ev_bool visible);

				

					/// <summary>
					/// Globe����һ��ͼ��֮����õĺ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// Globeж��һ��ͼ��֮����õĺ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved_impl(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// ���ݼ������¼���֪ͨ
					/// </summary>
					/// <param name="strDatasetName">���ݼ�����</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);

					/// <summary>
					/// ��ȡ��ͼ�������������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();

					/// <summary>
					/// xml�����л�
					/// </summary>
					/// <param name="element">xmlԪ��</param>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ���л���xmlԪ��
					/// </summary>
					/// <returns>xmlԪ��</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// ���л���xml�ı�
					/// </summary>
					/// <returns>xml�ı�</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// ���л�����
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// ����ͼ�����Χ
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ�����Χ</returns>
					const EarthView::World::Spatial::Geometry::CEnvelope& getGeoExtent() const;

					ev_void notifyAbortLayerRequest();

					/// <summary>
					/// ���طֿ鼶���
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ֿ鼶���</returns>
					virtual ev_int32 getBlockLevel()
					{
						return mBlockLevel;
					}

					/// <summary>
					/// ���ؿ��Ӿ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>���Ӿ���</returns>
					virtual ev_real64 getVisibleDistance()
					{
						return mVisibleDistance;
					}

					/// <summary>
					/// ��ʽ���������ƣ������淶�ַ�תΪ"_"
					/// </summary>
					/// <param name="srcName">��������</param>   
					/// <returns>��������</returns>		
					static EVString makeCacheName(const EVString& srcName);

					/// <summary>
					/// ͨ����γ�Ȼ�ȡ���ڿ��ڵ����е�
					/// </summary>
					/// <param name="lon">����</param>   
					/// <param name="lat">γ��</param>
					/// <param name="streetPoints">���ڿ��ڵ����е�</param>
					/// <returns>�Ƿ��ȡ�ɹ�</returns>
					virtual ev_bool getStreetPointsByLonLat(_in ev_real64 lon, _in ev_real64 lat, _out EarthView::World::Spatial::Download::CStreetPointList& streetPoints);

					/// <summary>
					/// ͨ��������evid��ȡ�����˽ṹ
					/// </summary>
					/// <param name="blockCode">�����</param>   
					/// <param name="evid">����</param>
					/// <param name="point">�����˽ṹ</param>   
					/// <returns>�Ƿ��ȡ�ɹ�</returns>
					virtual ev_bool getTopologyPoint(EVString blockCode, ev_uint32 evid, CLayerStreetPoint& point);

					/// <summary>
					/// ��ȡͼ����������
					/// </summary>
					/// <param name=""></param>     
					/// <returns>���</returns>
					virtual EarthView::World::Spatial3D::CGlobeCamera* getGlobeCamera()
					{
						return mpCacheCamera;
					}
					
					/// <summary>
					/// ע��־�ͼ�����
					/// </summary>
					/// <param name="listener">�־�ͼ�����</param>     
					/// <returns></returns>
					virtual ev_void addStreetViewLayerListener(CStreetViewLayerListener* listener);

					/// <summary>
					/// ��ע��־�ͼ�����
					/// </summary>
					/// <param name="listener">�־�ͼ�����</param>     
					/// <returns></returns>
					virtual ev_void removeStreetViewLayerListener(CStreetViewLayerListener* listener);

					virtual ev_real64 clampedPixelSize(EVString blockCode, ev_real64& distance, ev_real64& radius);

					/// <summary>
					/// �������ĵ�־������
					/// </summary>
					/// <param name="blockCode">�־������</param>     
					/// <returns></returns>
					virtual ev_void setCenterPoint(EVString blockCode);
				
				ev_internal:
					/// <summary>
					/// Globeˢ��ʱ���õĺ���
					/// </summary>
					/// <param name="camera">��ǰ�����</param>
					/// <param name="updateType">ˢ������</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
				
				protected:
					void init();
					ev_void initDefaultTheme();
					ev_void copyCameraParams(EarthView::World::Graphic::COctreeCamera& camera) const;
					/// <summary>
					/// ���ˢ��ʱ������
					/// </summary>
					/// <param name="cam">���</param>
					/// <param name="force">�Ƿ�ǿ��ˢ��</param>
					/// <returns></returns>
					virtual ev_void _processByCamera(EarthView::World::Graphic::COctreeCamera* cam, ev_bool force);
					ev_void parseMetaDataInfo();

					ev_void buildVisibleStreetViewBlocks(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleaseExtensions, list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdateExtensions);
					ev_void updateGeometry(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleaseExtensions,list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdateExtensions);
					ev_bool processStreetViewBlock(const EVString& blockCode, EarthView::World::Geometry3D::CMultiGeometry3DExtension*& geoExtension);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processStreetViewLayer(const EVString& blockCode, CStreetPointList& pointList);
					CStreetBlock* getStreetViewBlock(const EVString& blockCode, CStreetPointList& pointList);
					ev_void processSelfNearPoints(const EVString& blockCode, CStreetPointList& pointList);
					ev_void processOtherNearPoints(const EVString& blockCode, CStreetPointList& pointList);
					ev_void calculateStreetViewDirection(CLayerStreetPoint& front, CLayerStreetPoint& back);
					ev_void writeString( const EVString& string,EarthView::World::Core::CDataStream& stream );
					ev_void loadExtensions(const EVString& nodeCode, EarthView::World::Geometry3D::CMultiGeometry3DExtension* needLoadExtension);
					ev_void buildTopology(const EVString& nodeCode);
					CLayerStreetPoint& getLayerPoint(EVString blockCode, ev_uint32 evid, ev_bool& found);
					ev_bool existLayerPoint(EVString blockCode, ev_uint32 evid);
					ev_void addLayerPoint(EVString blockCode, CLayerStreetPoint& point);
					ev_void removeLayerPoints(EVString blockCode);
					ev_void dividePointListByPhotoFile(CStreetPointList& pointList, map<EVString, CStreetPointList>& pointListMap);
					CLayerStreetPoint* getNearestBlockBeginEdgePoint(EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
					CLayerStreetPoint* getNearestBlockEndEdgePoint(EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
					ev_bool getNearPoint(EVString blockCode, ev_uint32 evid, CLayerStreetPoint& point);
					ev_void addNearPoint(EVString blockCode, CLayerStreetPoint& point);
					ev_bool getNearPointList(EVString blockCode, CStreetPointList& pointList);
					ev_void addNearPointList(EVString blockCode, CStreetPointList& pointList);
					ev_void removeNearPointList(EVString blockCode);

					ev_void releaseExtension(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
					ev_void releaseExtension(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& extensions);

					EarthView::World::Spatial::GeoDataset::IDataset* mpDataSet;
					
					EVString mDataSourceName;
					EVString mDataSetName;
					EVString mCacheDatasetName;
					friend class CStreetViewLayerFactory;
					
					/// <summary>
					/// ר��ͼ
					/// </summary>
					EarthView::World::Spatial::Theme::ITheme* mpTheme;					
					EarthView::World::Core::CReadWriteLock mThemeLock;//theme��
					
					EarthView::World::Spatial::Geometry::CEnvelope mGeoExtent;

					/******************
					���˽ṹ
					******************/	
					EarthView::World::Core::CReadWriteLock mCurrentPointMutex;
					map<EVString, map<ev_uint32, CLayerStreetPoint> > mCurrentPoints;
					set<EVString> mLoadingBlocks;
					EarthView::World::Core::CReadWriteLock mCurrentExtensionMutex;
					map<EVString, EarthView::World::Geometry3D::CMultiGeometry3DExtension*> mCurrentExtensions;					
					set<EVString> mLoadingExtensions;
					EarthView::World::Core::CReadWriteLock mNearPointMutex;
					map<EVString, map<ev_uint32, CLayerStreetPoint> > mNearPoints;
					EarthView::World::Core::CReadWriteLock mNearBlockMutex;
					map<EVString, CStreetPointList> mNearBlocks;
					EVString mCenterBlockCode;

					EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
					//EarthView::World::Core::MemoryDataStreamPtr mpThemeDataStream;

					ev_real64 mVisibleDistance;

					mutable EarthView::World::Core::CReadWriteLock mCameraLock;//�����
					//EarthView::World::Graphic::COctreeCamera* mpCacheCamera;
					EarthView::World::Spatial3D::CGlobeCamera* mpCacheCamera;

					ev_int32 mBlockLevel;

					friend class CStreetViewLayerUpdator;
					CStreetViewLayerUpdator* mUpdator;

					vector<CStreetViewLayerListener*> mpStreetViewLayerListeners;
					
					friend class CStreetViewBackgroundQueue;
				};

				/// <summary>
				/// �๤��
				/// </summary>
				class EV_Spatial3DStreetView_DLL CStreetViewLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CStreetViewLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CStreetViewLayerFactory();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~CStreetViewLayerFactory();
				public:
					/// <summary>
					/// ���ص�����ͼ�㹤��
					/// </summary>
					static EarthView::World::Spatial3D::CStreetViewLayerFactory* getSingletonPtr();
					/// <summary>
					/// �ͷŵ�����ͼ�㹤��
					/// </summary>
					/// <returns></returns>
					static ev_void releaseSingletonPtr();
					/// <summary>
					/// ��ȡͼ�������
					/// </summary>
					/// <returns>Globeͼ�������</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// ����һ��GlobeLayerͼ��ʵ��
					/// </summary>
					/// <param name="name">ͼ�������</param>
					/// <param name="ds">���ݼ�����</param>
					/// <returns>Globe�����Ĳ�Ʒ</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// ����һ��GlobeLayerͼ��ʵ��
					/// </summary>
					/// <param name="element">xmlԪ��</param>
					/// <returns>Globe�����Ĳ�Ʒ</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ����һ��GlobeLayerͼ��ʵ��
					/// </summary>
					/// <returns>Globe�����Ĳ�Ʒ</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// ����һ��Globeͼ��
					/// </summary>
					/// <param name="layer">���ٹ����Ĳ�Ʒ</param>
					/// <returns>�Ƿ�ɹ�</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msLayerFactoryName;
				private:
					static EarthView::World::Spatial3D::CStreetViewLayerFactory* mSingletonPtr;
				};
			
		}
	}
}
#endif

