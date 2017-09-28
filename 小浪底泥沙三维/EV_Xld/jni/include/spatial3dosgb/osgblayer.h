#ifndef EARTHVIEW_WORLD_SPATIAL3D_OSGBLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_OSGBLAYER_H

#include "spatial3dosgb/spatial3dosgbconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatial3dengine/i3dlayer.h"
#include "graphic/rendersystem.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class CBingMapTree;
			}

				class COsgbLayerFactory;


				class EV_Spatial3D_OSGB_DLL COsgbLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					COsgbLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					COsgbLayer();
					COsgbLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
				public:
					virtual ~COsgbLayer();

					/// <summary>
					/// ��ȡ�߶�ģʽ 
					/// </summary>
					/// <returns>ev_real64,�߶�ֵ</returns>
					virtual ev_real64 getAltitudeValue();

					/// <summary>
					/// ���ø߶�
					/// </summary>
					/// <param name="altitudeValue">�߶�ֵ</param>
					/// <returns></returns>
					virtual void setAltitudeValue(ev_real64 altitudeValue);
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

				
ev_internal:
					/// <summary>
					/// Globeˢ��ʱ���õĺ���
					/// </summary>
					/// <param name="camera">��ǰ�����</param>
					/// <param name="updateType">ˢ������</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					ev_bool initBingMapTrees(ev_bool needRefresh);

					ev_void updateBingMapTree(EVString& quadKey, bool needLoad);

				protected:
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataSet;
					
					EVString mDataSourceName;
					EVString mDataSetName;
					friend class COsgbLayerFactory;

					ev_vector<EarthView::World::Spatial3D::Atlas::CBingMapTree*> mBingMapTreeVec;
					ev_map<EVString, ev_bool> mBingMapQuadMap;
					ev_real64 mAltValue;

					EarthView::World::Spatial::Download::COSGBLayerMetaData* mLayerMetaData;

				private:
					class CD3DDeviceListener : public EarthView::World::Graphic::CRenderSystem::CRenderSystemListener
					{
					public:					
						CD3DDeviceListener(COsgbLayer* pOsgbLayer);
						~CD3DDeviceListener();

						virtual void eventOccurred(const EVString &eventName,
							const EarthView::World::Core::NameValuePairList *parameters );
					private:
						COsgbLayer* mOsgbLayer;
						ev_bool mVisible;
						ev_bool mDeviceLost;
					};

					CD3DDeviceListener* m_D3DDeviceListener;
				};

				/// <summary>
				/// �๤��
				/// </summary>
				class EV_Spatial3D_OSGB_DLL COsgbLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					COsgbLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					COsgbLayerFactory();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~COsgbLayerFactory();
				public:
					/// <summary>
					/// ���ص�����ͼ�㹤��
					/// </summary>
					static EarthView::World::Spatial3D::COsgbLayerFactory* getSingletonPtr();
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
					static EarthView::World::Spatial3D::COsgbLayerFactory* mSingletonPtr;
				};
			
		}
	}
}
#endif

