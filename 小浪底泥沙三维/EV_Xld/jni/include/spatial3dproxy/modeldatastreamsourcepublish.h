#ifndef EV_SPATIAL_3DPROXY_MODEL_DATASTREAM_SOURCE_PUBLISH
#define  EV_SPATIAL_3DPROXY_MODEL_DATASTREAM_SOURCE_PUBLISH
#include "core/stdheaders.h"
#include "spatial3dengine/modelpublish.h"
#include "graphic/mesh.h"
#include "graphic/texture.h"
#include "graphic/material.h"
#include "spatial3ddataset/meshtemplatedataset.h"
#include "spatial3dproxy/spatial3dproxy_config.h"

namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{

			class  EV_SPATIAL3DPROXY_DLL CModelDataStreamSourcePublishTool : public EarthView::World::Spatial3D::CModelPublishTool_DBDesSource
			{
			ev_private:
				//һ��ģ������
				class PublishData
				{	
				public:
					EarthView::World::Core::MemoryDataStreamPtr mpMesh;
					EarthView::World::Core::MemoryDataStreamPtr mpSkeleton; 
					EarthView::World::Core::MemoryDataStreamPtr mpAnimation; 
					vector<EarthView::World::Core::MemoryDataStreamPtr> mpTextures; 
					vector<EarthView::World::Core::MemoryDataStreamPtr> mpMaterials; 

					PublishData()
					{

					}
				};

ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CModelDataStreamSourcePublishTool(_in EarthView::World::Core::CNameValuePairList *pList){};

			public:
				/// <summary>
				///  ���캯��
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				CModelDataStreamSourcePublishTool();

				/// <summary>
				///  ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				~CModelDataStreamSourcePublishTool();

				ev_private:
				/// <summary>
				/// �����Ҫ������ģ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void addPublishData(const CModelData& publishData);

				ev_uint32 getCurrentMeshID();

			protected:
				/// <summary>
				/// ����ǰԤ����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool _preProcessing();

				/// <summary>
				/// ��ȡԴ����Դ�����Ա�������ֶνṹ�б�
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceAttrNameAndAttrStructVector(AttrNameAndFieldsMap& attrnameandfieldsmap);

				/// <summary>
				/// ��ȡԴ����Դ�����Ա�����ͽڵ������б�
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceNodecodeNameAndAttrNameVector(NodeCodeAndAttrNameMap& nodecodeandattrnamemap);

				/// <summary>
				/// ��ȡԴ����Դ�е�ģ�����ƺ�nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceNodecodeAndModelNameVector(_in vector<EVString>& nodecodes, _out NodeCodeAndModelNameMap& nodecodeandmodelnamemap);

				/// <summary>
				/// ��ʼ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool  _startPublish();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_void _clear();
			private:	
				vector<EVString> mModelNames;
				EVString mAttrTableName;
				EarthView::World::Spatial::GeoDataset::CFields* mpAttrTableFields;
				EarthView::World::Spatial::GeoDataset::CFields* mpDefaultAttrTableFields;
				EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* mpDesDataset;

				//<mesh>
				list<CModelData> mPublishDatas;
				vector<int> mPublishedModelIds;
				ev_uint32 mCurrentMeshID;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void writeMesh(CModelData& publishData);
			};
		}
	}
}
#endif