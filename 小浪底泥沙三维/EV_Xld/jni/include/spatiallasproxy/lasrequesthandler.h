#ifndef EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASREQUESTHANDLER_H
#define EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASREQUESTHANDLER_H

#include "core/workqueue.h"
#include "spatiallasproxy/laslodgenerator.h"

namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			enum LasRequestType
			{
				LasRT_NoMERGE,
				LasRT_ToMERGE
			};

			class CLasWorkQueue : public EarthView::World::Core::CBackgroundQueue
			{
				friend class CLasRequestHandler;
				friend class CLasResponseHandler;

			public:
				class  LasRequest : public EarthView::World::Core::CWorkQueue::RequestPara
				{
				public:
					friend std::ostream &operator <<( std::ostream &o, const LasRequest &res )
					{
						o << "Las request" <<endl;
						return o;
					}
					
					virtual _extfree EarthView::World::Core::CWorkQueue::RequestPara* clone()const
					{
						LasRequest* req = new LasRequest();
						*req = *this;
						return req;
					}

					virtual ev_bool operator<(const RequestPara& rhs) const;

					LasRequest()
					{
						mType = LasRT_NoMERGE;
						mpLasLODGenerator = NULL;
						mpLasFileInfo = NULL;
						mpLasMergedFileInfo = NULL;
						mCurrTotalPercent= 0.0;
						mID = -1;
					}

					LasRequestType mType;
					CLasLODGenerator* mpLasLODGenerator;
					CLasFileInfo* mpLasFileInfo;//LasRT_NoMERGE������õ�
					CLasMergedFileInfo* mpLasMergedFileInfo;//LasRT_ToMERGE������õ�
					ev_real64 mCurrTotalPercent;
					ev_int32 mID;
				};

				class  LasResponse : public EarthView::World::Core::CWorkQueue::ResponsePara
				{
				public:
					friend std::ostream &operator <<( std::ostream &o, const LasResponse &res )
					{
						o << "Las response" <<endl;
						return o;
					}

					virtual _extfree EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
					{
						LasResponse* rsp = new LasResponse();
						*rsp = *this;
						return rsp;
					}
				};

				class  CLasRequestHandler : public EarthView::World::Core::CWorkQueue::CRequestHandler
				{
				private:
					CLasWorkQueue* mpParent;
				public:
					CLasRequestHandler(CLasWorkQueue* parent);
					virtual ~CLasRequestHandler();

					virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);
					virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);
				};

				class  CLasResponseHandler : public EarthView::World::Core::CWorkQueue::CResponseHandler
				{
				private:
					CLasWorkQueue* mpParent;
				public:
					CLasResponseHandler(CLasWorkQueue* parent);
					virtual ~CLasResponseHandler();

					virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
					virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				};

				class  CLasChannelListener : public EarthView::World::Core::CWorkQueueChannelListener
				{
				private:
					CLasWorkQueue* mpParent;
				public:
					CLasChannelListener(CLasWorkQueue* parent);
					virtual ~CLasChannelListener();

					virtual ev_bool preRequestSorted(ev_uint16 channelID);
					virtual ev_void postRequestSorted(ev_uint16 channelID);
				};

			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLasWorkQueue();
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CLasWorkQueue();
				/// <summary>
				///�����̶߳��У����ͬ���͵�channel�����ж���������ֶ�ָ�����ȼ�
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void initialise();
				/// <summary>
				///�ر��̶߳���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void shutdown();
				/// <summary>
				/// ��ȡ�̶߳��е�����
				/// </summary>
				/// <param name=""></param>
				/// <returns>�̶߳��е�����</returns>
				virtual EVString getGroupName() const;
				/// <summary>
				///��ȡ�̶߳��е����֣������ظ�
				/// </summary>
				/// <param name=""></param>
				/// <returns>�̶߳��е�����</returns>
				virtual EVString getName() const;
				/// <summary>
				///��ȡ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::CWorkQueue* getWorkQueue();
				/// <summary>
				///�����������һ�����ݵ�����
				/// </summary>
				/// <param name="request">���������</param>
				/// <returns>����Ľ��</returns>
				virtual ev_uint64 addRequest(LasRequest request);
				/// <summary>
				///�ж�����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void abortRequest(ev_uint64 id);
				/// <summary>
				///�Ƿ��ж���������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void abortAllRequest(ev_bool abort);
				/// <summary>
				///
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void abortRequestByFilter(ev_uint64 filter);
				/// <summary>
				///
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool isQueueRunningByFilter(ev_uint64 filter);
				/// <summary>
				///�Ƿ���δ���������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool hasRequest();

			protected:
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *res, const EarthView::World::Core::CWorkQueue *srcQ);
				virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
								
				virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);
				virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);

			private:
				static EVString msBackgroundQueueGroupName;
				static EVString msBackgroundQueueName;

				CLasRequestHandler* mpLasRequestHandle;
				CLasResponseHandler* mpLasResponseHandle;

				ev_uint32 mChannel;
				CLasChannelListener* mpChannelListener; 

				EarthView::World::Core::CWorkQueue* mpWorkQueue;

				ev_bool mAbortAllRequest;

				ev_uint32 mRequestCount;
			};

			class CLasWorkQueueManager : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CLasWorkQueueManager();

			protected:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLasWorkQueueManager();

			public:
				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CLasWorkQueueManager* getSingletonPtr();
				/// <summary>
				/// �ͷŵ���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void releaseSingletonPtr();
				/// <summary>
				/// ��ȡָ�����ƵĹ�������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLasWorkQueue* getLasWorkQueueByName(const EVString& name);
				/// <summary>
				/// ����ָ�����ƵĹ�������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLasWorkQueue* createOrRetrieveLasWorkQueue(const EVString& name);
				/// <summary>
				/// ����ָ�����ƵĹ�������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void destroyLasWorkQueueByName(const EVString& name);

			protected:
				static CLasWorkQueueManager* mpSingletonPtr;
				typedef map<EVString,CLasWorkQueue*> LasWorkQueues;
				LasWorkQueues mLasWorkQueueMap;
				ev_int32 mLasWorkQueueCount;
			};
		}
	}
}
#endif
