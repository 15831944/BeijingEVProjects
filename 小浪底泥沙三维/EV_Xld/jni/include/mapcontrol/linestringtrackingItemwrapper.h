#include "mapcontrol/mapcommand.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/mapcontrol.h"
#include "spatialobject/geometry/linestring.h"

//˼·����һ��LineString�ֽ�ɶ��������Ҹ��ݱ����߷�Ϊ���ɸ��ȼ���ÿ��LineString����һ��
//��ӵ�ʱ����ͬ�ȼ����ݵ�ǰ����ǰһ������ز��ж��Ƿ���Ҫ��Ӽ�ˢ�µ�ͼ
//���һ���㣬ÿ���ȼ��µ�Linestring�鶼��Ҫ�ж��Ƿ���Ҫ��Ӵ˵�
//��ͼ����ǰ��ѡ������Ļ��Χ�н����ĵ�ǰ�����µ�����linestring��ӵ�������
//������Ҫ����ʵ��Ӧ��������Լ�ʵ����ʾЧ�����е�������ǰ�����ڹ���Ч���в������룬�������ӵȼ�������Ȩ�أ����߲�����������
//�����������ø�������ŵĽӿ�


class CMapControlListenerPrivate;
class EV_MAPCONTROL_DLL CLinestringTrackingItemWrapper : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// Ĭ�Ϲ��캯��
	/// </summary>
	CLinestringTrackingItemWrapper(EarthView::World::Spatial2D::Controls::CMapControl *ref_mapcontrol);
	/// <summary>
	/// ���캯��
	///Ĭ��ֵ��pointCountPerLine(100) ÿ����������
	///levelCount(10) ������
	///tolerance(5)   �߶λ����ݲ���أ��ڲ����㣩��Խ���ʾ��������Խ��
	///ʹ�ô˹��캯�����������
	/// </summary>
	CLinestringTrackingItemWrapper(EarthView::World::Spatial2D::Controls::CMapControl *ref_mapcontrol,
		int pointCountPerLine,
		int levelCount,
		int tolerance);
ev_private:
	CLinestringTrackingItemWrapper(EarthView::World::Core::CNameValuePairList* pList);
	/// <summary>
	/// ��������
	/// </summary>
public:
	~CLinestringTrackingItemWrapper();
	/// <summary>
	///����ÿ���������С������,level��0��ʼ
	/// </summary>
	ev_void setLevelScale(ev_int32 level,ev_real64 scale);
	/// <summary>
	///���÷���
	/// </summary>
	ev_void setSymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol);
	/// <summary>
	///��ӵ㣬ͨ�������ж��Ƿ���ӡ������жϻ��ƿ��޸�
	/// </summary>
	ev_void addPoint(EarthView::World::Spatial::Geometry::CPoint * point); 
	/// <summary>
	///ˢ�£��˺������ڵ�ͼˢ��ǰ�����ã���ѡ������Ļ��Χ�н����ĵ�ǰ�����µ�����linestring��ӵ�������
	/// </summary>
	ev_void refresh();
private:
	//����ڲ�����
	ev_void clearLinestringVector();
private:
	EarthView::World::Spatial2D::Controls::CMapControl *mpMapcontrol;
	
	//��������ö��CTrackingGeometryItem,������onBeforeRefreshʱֻ�ô�����Ҫ�޸ĵĸ�����
	EarthView::World::Spatial2D::Controls::CTrackingGeomsItem *mpTrackingItem;
	//
	ev_vector<EarthView::World::Spatial::Geometry::CLineString*> **mLinestringVector;
	CMapControlListenerPrivate* mpListener;
	double mfTempDis;
	EarthView::World::Spatial::Geometry::CPoint mTempPoint;

	int mdPointCountPerLline;
	int mdLevelCount;
	double mfTolerance;

	struct scale_distanceMapping
	{
		double scale;
		double minDistance;
	};
	scale_distanceMapping* mpScaleDistance_Mapping;
};

