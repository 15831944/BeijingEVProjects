#ifndef __PARSESHAPEFILE_H__
#define __PARSESHAPEFILE_H__

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/stringdefines.h"
#include "spatial3ddataexchange/entitymetadata.h"
#include "spatial3ddataexchange/shapeassignedfields.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange{


class EV_Spatial3DDataExchange_DLL ShapeFieldsList : public EarthView::World::Core::CBaseObject
{
ev_private:
	typedef vector<EVString> InternalList;
	typedef InternalList::iterator iterator;
	typedef InternalList::const_iterator const_iterator;
	typedef InternalList::reverse_iterator reverse_iterator;
	typedef InternalList::const_reverse_iterator const_reverse_iterator;
	typedef InternalList::reference reference;
	typedef InternalList::const_reference const_reference;
	typedef InternalList::value_type value_type;
	RESERVE_CONTAINER_FUNCTION(mList); 			///�������������ĺ���(��������ͺͷ���ֵ�޹صĺ�������begin/end)
	iterator insert(iterator pos, EVString t);

ev_private:
	ShapeFieldsList(_in EarthView::World::Core::CNameValuePairList *pList);

private:
	InternalList mList;

public:
	ShapeFieldsList();
	~ShapeFieldsList();

	void push_back(EVString field);
	void pop_back();

	EVString& front();
	EVString& back();
	void insert(ev_uint32 pos, EVString ref_t);
	void remove(ev_size_t pos);
	ev_bool empty() const;
	const EVString& operator[](ev_size_t n);
	const EVString& operator[](ev_size_t n) const;
	const EVString& at(ev_size_t n);
	const EVString& at(ev_size_t n) const;
	ev_size_t size() const;
	void resize(ev_size_t newSize);
	void clear();
};

class EV_Spatial3DDataExchange_DLL EntityMetaDataList : public EarthView::World::Core::CBaseObject
{
ev_private:
	typedef vector<CEntityMetaData> InternalList;
	typedef InternalList::iterator iterator;
	typedef InternalList::const_iterator const_iterator;
	typedef InternalList::reverse_iterator reverse_iterator;
	typedef InternalList::const_reverse_iterator const_reverse_iterator;
	typedef InternalList::reference reference;
	typedef InternalList::const_reference const_reference;
	typedef InternalList::value_type value_type;
	RESERVE_CONTAINER_FUNCTION(mList); 			///�������������ĺ���(��������ͺͷ���ֵ�޹صĺ�������begin/end)
	iterator insert(iterator pos, CEntityMetaData t);

ev_private:
	EntityMetaDataList(_in EarthView::World::Core::CNameValuePairList *pList);

private:
	InternalList mList;

public:
	EntityMetaDataList();
	~EntityMetaDataList();

	void push_back(CEntityMetaData data);
	void pop_back();

	CEntityMetaData& front();
	CEntityMetaData& back();
	void insert(ev_uint32 pos, CEntityMetaData ref_t);
	void remove(ev_size_t pos);
	ev_bool empty() const;
	const CEntityMetaData& operator[](ev_size_t n);
	const CEntityMetaData& operator[](ev_size_t n) const;
	const CEntityMetaData& at(ev_size_t n);
	const CEntityMetaData& at(ev_size_t n) const;
	ev_size_t size() const;
	void resize(ev_size_t newSize);
	void clear();
};

/// <summary>
/// ����ģ��Shape�ļ��Ĺ�����
/// </summary>
class EV_Spatial3DDataExchange_DLL CParseShapeFile: public EarthView::World::Core::CBaseObject
{
ev_private:
	CParseShapeFile(_in EarthView::World::Core::CNameValuePairList *pList);
public:
	CParseShapeFile();
	~CParseShapeFile();

public:
	/// <summary>
	/// ��Shape�ļ�
	/// </summary>
	/// <param name="filename">Shape�ļ���</param>
	/// <returns>�ɹ�����true�����򷵻�false</returns>
	ev_bool open(_in const EVString& filename);

	/// <summary>
	/// ��ȡShape�ļ��е��ֶ�
	/// </summary>
	/// <param name="file">Shape�ļ���������·��</param>
	/// <param name="fields">�ֶμ���</param>
	/// <returns>�ɹ�����true�����򷵻�false</returns>
	static ev_bool readFields(const EVString& file, _out ShapeFieldsList& fields);

	/// <summary>
	/// ��ȡShape�ļ��е�����ϵ
	/// </summary>
	/// <param name="file">Shape�ļ���������·��</param>
	/// <param name="fields">�ֶμ���</param>
	/// <returns>�ɹ���������ϵ���룬���򷵻�0</returns>
	static ev_int32 readSrsID(const EVString& file);

	/// <summary>
	/// ��ȡShape�ļ��е�mesh��Ϣ
	/// </summary>
	/// <param name="modelFilePath">shape�ļ��е�mesh��Ӧ���ļ�·��</param>
	/// <param name="meshEntitis">mesh����</param>
	/// <returns>�ɹ�����true�����򷵻�false</returns>
	ev_int32 readShapeData(const EVString &modelFilePath, const CShapeAssignedFields& assignedValue, _out EntityMetaDataList& meshEntitis);

private:
	/// <summary>
	/// ��һ�����ļ����и���һ��ģ�������Ұ��������Ĵ���չ�����ļ�������ж��ͬ������չ����ͬ�ģ��򷵻����ҵ���(�༶Ŀ¼��ݹ����)
	/// </summary>
	/// <param name="modelFilePath">ģ�������ļ���</param>
	/// <param name="modelName">ģ����</param>
	/// <param name="fullMeshName">����·�����ļ���</param>
	/// <returns>�ɹ�����true�����򷵻�false</returns>
	ev_bool findModelFileVague(_in EarthView::World::Core::ev_stringArray &files, const EVString& modelName, _out EVString& fullMeshName);

private:
	EVString m_file;
};

}}}}

#endif