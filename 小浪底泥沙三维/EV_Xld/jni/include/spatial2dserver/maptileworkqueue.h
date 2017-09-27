#ifndef EARTHVIEW_WORLD_SPATIAL_MAPTILEWORKQUEUE_H
#define EARTHVIEW_WORLD_SPATIAL_MAPTILEWORKQUEUE_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "spatial2dserver/ogcwmstheme.h"
#include "core/workqueue.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/ienvelope.h"
#include "core/defaultworkqueuestandard.h"
#include "tileutility/tiledata.h"
#include "tileutility/tilepathenums.h"
#include "spatialserverclient/evmetaobjectinfo.h"
#include "spatialserverclient/evdatasets.h"



struct CWMSChartTileParam
{
	EVString srid;
	EVString box;
	EVString displayMode;
	EVString colorMode;
	EVString symbolMode;
	EVString isoBath;
	EVString annoMode;
};

namespace EarthView{
	namespace World{
		namespace Spatial2D{
class CMapTileWorkQueueManager : public EarthView::World::Core::CBackgroundQueue
{
	friend class CMapTileRequestHandler;
	friend class CMapTileResponseHandler;
public:
	class  MapTileResponse : public EarthView::World::Core::CWorkQueue::ResponsePara
	{
ev_private:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="pList">���캯��������ֵ�Ա�</param>
		/// <returns></returns>
		MapTileResponse(EarthView::World::Core::CNameValuePairList* pList){}
		MapTileResponse(){}
		virtual ~MapTileResponse(){}
	public:
ev_private:
		friend std::ostream &operator <<( std::ostream &o, const MapTileResponse &res )
		{
			o << "loadentity response" <<endl;
			return o;
		}
	public:
		virtual _extfree EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
		{
			MapTileResponse* rsp = new MapTileResponse();
			*rsp = *this;
			return rsp;
		}
	};

	class MapTileRequest : public EarthView::World::Core::CWorkQueue::RequestPara
	{
ev_private:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="pList">���캯��������ֵ�Ա�</param>
		/// <returns></returns>
		MapTileRequest(EarthView::World::Core::CNameValuePairList* pList){}
	public:
		ev_uint64 id;
		ev_real64 space;
		ev_real64 sxPos,syPos;
		ev_int32 row,col;
		ev_int32 level;
		EarthView::World::Spatial::Display::CDrawServerLayerTheme* draw;
		EarthView::World::Spatial::GeoDataset::IDataset* dataset;
		EVString m_Filter;
		CWMSChartTileParam mChartParam;//chart
		
		EVString m_TileSetIdentifier; //ogc wmts

		//ogc wms
		EVString style;
		EVString sridStr;
		EVString format;
		EarthView::World::Spatial::Geometry::CEnvelope extent;
		ev_int32 width;
		ev_int32 height;
		EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType requestType;
		//ogc wms
	public:
		MapTileRequest()
		{
			space = 0;
			sxPos = syPos = 0;
		}
		virtual ~MapTileRequest()
		{
		}
ev_private:
		friend std::ostream &operator <<( std::ostream &o, const MapTileRequest &res )
		{
			o << "loadentity request" <<endl;
			return o;
		}
//		virtual ev_bool operator<(const EarthView::World::Core::CWorkQueue::RequestPara& rhs) const;
	public:
		virtual _extfree EarthView::World::Core::CWorkQueue::RequestPara* clone()const
		{
			MapTileRequest* req = new MapTileRequest();
			*req = *this;
			return req;
		}
	};

	class CMapTileRequestHandler : public EarthView::World::Core::CWorkQueue::CRequestHandler
	{
ev_private:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="pList">���캯��������ֵ�Ա�</param>
		/// <returns></returns>
		CMapTileRequestHandler(EarthView::World::Core::CNameValuePairList* pList);
	private:
		CMapTileWorkQueueManager* mpParent;
	public:
		CMapTileRequestHandler(CMapTileWorkQueueManager* parent);
		virtual ~CMapTileRequestHandler();

		/// <summary>
		/// ����ǰ�����󣬾�������ģ������+ģ�͹�����Դ����
		/// </summary>
		/// <param name="workqueue">��ǰ�Ķ���</param>
		/// <param name="request">���ݵ�����</param>
		/// <returns>��Ӧ</returns>
		virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

		/// <summary>
		/// ���hanler�Ƿ��ܴ���ǰ����������Ӧ
		/// </summary>
		/// <param name="workqueue">��ǰ�Ķ���</param>
		/// <param name="request">���ݵ�����</param>
		/// <returns>�ܷ���Ӧ</returns>
		virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

	};

	class CMapTileResponseHandler : public EarthView::World::Core::CWorkQueue::CResponseHandler
	{
ev_private:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="pList">���캯��������ֵ�Ա�</param>
		/// <returns></returns>
		CMapTileResponseHandler(EarthView::World::Core::CNameValuePairList* pList);
	private:
		CMapTileWorkQueueManager* mpParent;
	public:
		CMapTileResponseHandler(CMapTileWorkQueueManager* parent);
		virtual ~CMapTileResponseHandler();

		/// <summary>
		/// ���hanler�Ƿ��ܴ���ǰ����������Ӧ
		/// </summary>
		/// <param name="workqueue">��ǰ�Ķ���</param>
		/// <param name="response">���ݵ���Ӧ</param>
		/// <returns>�Ƿ��ܴ���</returns>
		virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);

		/// <summary>
		/// ����ǰ����Ӧ����������ģ������+ģ�͹�����Դ����
		/// </summary>
		/// <param name="workqueue">��ǰ�Ķ���</param>
		/// <param name="response">���ݵ���Ӧ</param>
		/// <returns></returns>
		virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
	};

protected:
	virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
	virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *res, const EarthView::World::Core::CWorkQueue *srcQ);

	virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
	virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

private:
	static EVString msBackgroundQueueGroupName;
	static EVString msBackgroundQueueName;

	CMapTileRequestHandler* mpRequestHandle;
	CMapTileResponseHandler* mpResponseHandle;

	set<EarthView::World::Spatial::Display::CDrawServerLayerTheme*> mDrawingObjects;
	EarthView::World::Core::CReadWriteLock mLock;

	static CMapTileWorkQueueManager* mpSingletonPtr;
	EarthView::World::Core::CWorkQueue* mpWorkQueue;
	ev_uint32 mChannel;
	ev_bool mbInit;
	/// <summary>
	/// ���캯��
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CMapTileWorkQueueManager();
ev_private:
	/// <summary>
	/// ���캯��
	/// </summary>
	/// <param name="pList">���캯��������ֵ�Ա�</param>
	/// <returns></returns>
	CMapTileWorkQueueManager(EarthView::World::Core::CNameValuePairList* pList){}
public:
	/// <summary>
	/// ��ȡ����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	static	CMapTileWorkQueueManager* getSingletonPtr();
	/// <summary>
	/// ע��draw����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	void registerDrawingObject(EarthView::World::Spatial::Display::CDrawServerLayerTheme *draw);
	/// <summary>
	/// ע��raw����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	void unRegisterDrawingObject(EarthView::World::Spatial::Display::CDrawServerLayerTheme *draw);
	/// <summary>
	/// ����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	static void releaseSingleton();

	/// <summary>
	/// ��������
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CMapTileWorkQueueManager();

	/// <summary>
	///�����������һ�����ݵ�����
	/// </summary>
	/// <param name="request">���������</param>
	/// <returns>����Ľ��</returns>
	virtual ev_uint64 addRequest(MapTileRequest& request);

	/// <summary>
	///�����̶߳��У����ͬ���͵�channel�����ж���������ֶ�ָ�����ȼ�
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual void initialise();

	/// <summary>
	///�ر��̶߳���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual void shutdown();

	/// <summary>
	///�ж�����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual void abortRequest(ev_uint64 ticket);

	ev_uint32 getWorkQueueChanel()
	{
		return mChannel;
	}
	ev_bool isQueueRunningByFilter(ev_uint16 channel,ev_uint64 filter);
	EarthView::World::Core::CWorkQueue* getWorkQueue();

};
class CMapTileDownloadQueue : public EarthView::World::Core::CDefaultWorkQueue
{
public:
	CMapTileDownloadQueue(){}
	virtual ~CMapTileDownloadQueue(){}				

	ev_bool isQueueRunningByFilter(ev_uint16 channel,ev_uint64 filter);
};
}}}
#endif