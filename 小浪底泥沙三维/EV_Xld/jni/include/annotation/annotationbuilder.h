#ifndef EARTHVIEW_WORLD_ANNOTATIONBUILDER_COFING_H
#define EARTHVIEW_WORLD_ANNOTATIONBUILDER_COFING_H
#include "annotation/config.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ilabelproperty.h"
#include "spatialinterface/ifeature.h"
#include "spatialdisplay/spatialdisplay.h"
#include "annotation/annotationoperator.h"
#include "databaseutility/sqldatabase.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class ILabelEngine;
}}}}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class CAnnotationOperatorImpl;
				class EV_ANNOTATION_EXPORTS CAnnotationBuilder
					: public EarthView::World::Core::CAllocatedObject
				{
					struct LabelInfo 
					{
						ev_bool state;
						EarthView::World::Spatial::Geometry::IGeometry * g;
						EarthView::World::Spatial::Display::ISymbol * symbol;
						ev_int32 featureID;
						EVString textString;
					};
				public:
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~CAnnotationBuilder();
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CAnnotationBuilder(EarthView::World::Spatial::Atlas::IMap *ref_map ,
						EarthView::World::Spatial::Display::ISpatialDisplay *ref_spatialDisplay,
						const EarthView::World::Spatial::Geometry::IEnvelope *extent,
						EarthView::World::Spatial::GeoDataset::IDataSource *ds,
						EarthView::World::Core::Database::CSqlDatabase	db);

					ev_void addLayer(EarthView::World::Spatial::Atlas::IVectorLayer * ref_dataLayer,
						ev_bool bAppend,EVString &name);
					
					ev_bool build();
					
					/// <summary>
					/// �����ɹ��Ƿ��Զ��ر�ͼ��ע��
					/// </summary>
					ev_bool isAutoCloseLayerLabel();
					ev_void setAutoCloseLayerLabel(ev_bool b);
					/// <summary>
					/// �����Ƿ�ͨ��ѡ������ע��
					/// </summary>
					/// <param name="name">����</param>
					/// <returns></returns>
					ev_void setCreateAnnotationWithSelection(ev_bool b);
					/// <summary>
					/// ������ڵ���ע�ǣ�ֹͣ����
					/// </summary>
					/// <param name="b">true��ʾ׷��</param>
					/// <returns></returns>
					ev_void setTerminated();
					/// <summary>
					/// ��ȡ��ɰٷֱ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>��ɰٷֱ�</returns>
					ev_real64 getFinishPercent();
					/// <summary>
					/// ��ȡ������Ϣ
					/// </summary>
					EVString getErrorMsg();
				private:
					ev_bool createAnnoFeatureClass(CAnnotationOperatorImpl* pOperator);
					ev_void insertALabel(const EarthView::World::Spatial::Display::CLabelElement * element,EarthView::World::Spatial::Display::ISymbol* pSymbol, ev_bool bIsSampleSrs,double ratio,CAnnotationOperatorImpl* pOperator);
					ev_void initialMapEnvironment();
					ev_void initialAnnoLayerEnvironment(EarthView::World::Spatial::Atlas::ILayer * layer);
					ev_bool initialLayerLabelEnvironment(EarthView::World::Spatial::Atlas::ILayer * layer);
					ev_void initialLayerFeatureEnvironment(EarthView::World::Spatial::Atlas::ILayer * layer);
					ev_bool build2(); // current layer
					//ev_void addAnnoFeature()
					ev_bool addAnnoFeature(EarthView::World::Spatial::Display::ILabelProperty* pLabelLayerProperty, EarthView::World::Spatial::GeoDataset::IFeatureClass *pFC, CAnnotationOperatorImpl* pOperator, double ratio, ev_int32 nSubIndex, ev_int32 nSubCount,ev_real64 dFinished, ev_real64 dTatolPercent,ev_bool bIsSampleSrs);
				ev_private:
					CAnnotationBuilder(EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_int32 mdCurrentIndex;
					ev_vector<EarthView::World::Spatial::Atlas::IVectorLayer*> mvLayers;
					ev_vector<EVString> mvAnnoNames;
					ev_vector<ev_bool> mvIsAppend;
					EarthView::World::Spatial::Atlas::IMap *mpMap;
					EarthView::World::Spatial::Display::ISpatialDisplay *mpDisplay;

					EarthView::World::Spatial::Geometry::IEnvelope *mpExtent;
					ev_real64 mScale;
					ev_bool mbCreateWithSelection;
					EarthView::World::Spatial::Display::ILabelEngine* mpLabelEngine;

					EarthView::World::Core::Database::CSqlDatabase		m_ddb;
					EarthView::World::Spatial::GeoDataset::IDataSource *m_DstDataSource;

					ev_bool mbAutoCloseLayerLabel;
					ev_bool mbIsProcessing;
					ev_bool mbCancel;
					ev_real64 m_dFinishPercent;
					EVString  mstrErrorMsg;
				};
			}
		}
	}
}

#endif 