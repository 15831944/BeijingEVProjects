#ifndef __SHAPEASSIGNEDFIELDS_H__
#define __SHAPEASSIGNEDFIELDS_H__

#include "core/memoryallocatedobject.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "core/stringdefines.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange{
	
class EV_Spatial3DDataExchange_DLL CScaleField : public EarthView::World::Core::CBaseObject
{
public:
	//���ŵ�ֵ;
	EVString _XValue;
	EVString _YValue;
	EVString _ZValue;

	//���ŵ��ֶ�
	EVString _fieldX;
	EVString _fieldY;
	EVString _fieldZ;

	CScaleField();

	CScaleField(const CScaleField& rObj);

	CScaleField& operator= (const CScaleField& rObj);

ev_private:
	CScaleField(_in EarthView::World::Core::CNameValuePairList *pList);

};

//���ź�ƫ�����ýṹһ������һ�����ʾ;
typedef CScaleField COffsetField;

//��Ԫ�� �ֶκ�ֵ
class EV_Spatial3DDataExchange_DLL CQuationField : public EarthView::World::Core::CBaseObject
{
public:
	//��ʾ��ת�Ķ���ֵ;��90;
	EVString _XValue;
	EVString _YValue;
	EVString _ZValue;

	//��ʾָ������Ԫ���ֶ�;
	EVString _fieldQuaternionX;
	EVString _fieldQuaternionY;
	EVString _fieldQuaternionZ;
	EVString _fieldQuaternionW;

	//��ʾָ������ת���ֶ�;��ĳ������ת���ٶ�
	EVString _fieldRotationAxisX;
	EVString _fieldRotationAxisY;
	EVString _fieldRotationAxisZ;

	//��ʾָ������ת�����ֶ�;��ĳ��������ת���ٶ�
	EVString _fieldRotationVectorX;
	EVString _fieldRotationVectorY;
	EVString _fieldRotationVectorZ;
	
	EVString _fieldRotationAngle;
	
	//��λ�ǻ��Ȼ��ǽǶ�
	EVString _RadianOrDegree;

	CQuationField();

	~CQuationField();

	CQuationField(const CQuationField& rObj);

	CQuationField& operator= (const CQuationField& rObj);
ev_private:
	CQuationField(_in EarthView::World::Core::CNameValuePairList *pList);

};

class EV_Spatial3DDataExchange_DLL CSkewField
{
public:
	EVString _skewAxisX;	//б����
	EVString _skewAxisY;
	EVString _skewAxisZ;

	EVString _skewAngle;	//б�н�
		
	EVString _RadianOrDegree;	//��λ�ǻ��Ȼ��ǽǶ�

public:
	CSkewField();
	~CSkewField();

	CSkewField(const CSkewField& rObj);

	CSkewField& operator=(const CSkewField& rObj);

ev_private:
	CSkewField(_in EarthView::World::Core::CNameValuePairList *pList);
};

/// <summary>
///	�������ƶ���shape�ļ��еĲ����ֶ�
///<summary>
class EV_Spatial3DDataExchange_DLL CShapeAssignedFields : public EarthView::World::Core::CBaseObject
{
public:
	EVString		_name;						//����ָ����shape�ļ���ģ�������ڵ��ֶ���;

	ev_int32		_srsID;						//����ָ����shape�ļ������ݵ�����ϵ���Զ�ȡshape�ļ�������ϵ��ϢΪ���Ȳ��ã���ȡ������ȡ����ָ����ֵ;

	ev_bool			_isRecursionPath;			//����ѡ����ģ��·���Ƿ�ݹ����;Ĭ�ϲ��ݹ�;

	CScaleField		_scale;						//����ָ����shape�ļ��е������ֶκ��Զ��������ֵ;
	COffsetField	_offset;					//����ָ����shape�ļ��е�ƫ���ֶκ��Զ����ƫ��ֵ;
	CQuationField	_quation;					//����ָ����shape�ļ��е���ת�ֶκ��Զ������תֵ;
	CSkewField		_skew;						//����ָ����shape�ļ��е�б���ֶ�

public:
	CShapeAssignedFields();

	CShapeAssignedFields(const CShapeAssignedFields& robj);

	CShapeAssignedFields& operator=(const CShapeAssignedFields& robj);

	~CShapeAssignedFields();

ev_private:
	CShapeAssignedFields(_in EarthView::World::Core::CNameValuePairList *pList);
	
};

}}}}

#endif
