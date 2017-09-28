#ifndef EAGLEEYECONTROL_H
#define EAGLEEYECONTROL_H

#include "mapcontrol/mapcontrol.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/imap.h"
#include "spatialgui/ispatialcontrol.h"
#include "display/cachebitmap.h"
#include "core/event.h"
#include "core/object.h"
#include "spatialinterface/icolor.h"
#include "mapcontrol/mapcontrolconfig.h"
#include "frameworkproxy_config.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISymbol;
				class CSimpleLineSymbol;
			}}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class IEnvelope;
				class CPoint;
			}}}}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{

class CEagleEyeEventHandler;
class CEagleEyeDrawTimer;
class CResizeTimer;
class CEagleEyeDrawThread;

class  EV_FRAMEWORKPROXY_DLL CEagleEyeControlAgent : public EarthView::World::Core::CBaseObject
{
public:
	CEagleEyeControlAgent() {}

	/// <summary>
	/// ��ȡӥ�ۻ���
	/// </summary>
	/// <param name=""></param>
	/// <returns>ӥ�ۻ���</returns>
	virtual EarthView::World::Display::IPaintDevice* getEagleEyeCanvas() const {
		EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
	}

	/// <summary>
	/// �ػ�
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void	onRepaint(){
		EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
	}
ev_private:
	CEagleEyeControlAgent( EarthView::World::Core::CNameValuePairList *pList ) {}
};
/// <summary>
/// ��ͼ�ؼ����¼�����
/// </summary>
class EV_FRAMEWORKPROXY_DLL IEagleEyeControlListener : public  EarthView::World::Spatial::Atlas::IMapListener
{
	/// <summary>
	/// �Զ�����չ��캯��
	/// </summary>
ev_private:
	IEagleEyeControlListener( EarthView::World::Core::CNameValuePairList *pList ) {}
public:
	/// <summary>
	/// Ĭ�Ϲ��캯��
	/// </summary>
	IEagleEyeControlListener(){}
	/// <summary>
	/// ��갴���¼�����											
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="geoX">����λ��x</param>
	/// <param name="geoY">����λ��y</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onMouseDown( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// ��굯���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="geoX">����λ��x</param>
	/// <param name="geoY">����λ��y</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onMouseUp( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// ����ƶ��¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="geoX">����λ��x</param>
	/// <param name="geoY">����λ��y</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onMouseMove( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// ���˫���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="geoX">����λ��x</param>
	/// <param name="geoY">����λ��y</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onDoubleClick( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// �������¼�����
	/// </summary>
	/// <param name="delta">����ת���ĽǶ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="geoX">����λ��x</param>
	/// <param name="geoY">����λ��y</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onMouseWheel( _in ev_int32 delta,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY,_in ev_int32 flag ){return false;}
	/// <summary>
	/// ���̰����¼�����
	/// </summary>
	/// <param name="key">���µļ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onKeyDown( _in ev_int32 keyCode,_in ev_int32 shift ){return false;}
	/// <summary>
	/// ���̵����¼�����
	/// </summary>
	/// <param name="key">���µļ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
	virtual ev_bool onKeyUp( _in ev_int32 keyCode,_in ev_int32 shift ){return false;}
	/// <summary>
	/// ���ڴ�С�����仯
	/// </summary>
	/// <param name="width">���ڿ��</param>
	/// <param name="height">���ڸ߶�</param>
	/// <returns></returns>
	virtual ev_bool onResize( _in ev_int32 width,_in ev_int32 height ){ return false;}
	/// <summary>
	/// ��ͼˢ��֮ǰ���¼�
	/// </summary>
	/// <param name="display">��ʾ����</param>
	/// <param name="viewportEnvelope">�µ��ӿڷ�Χ</param>
	/// <returns></returns>
	virtual ev_void onBeforeRefresh( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope ){}
	/// <summary>
	/// ��ͼˢ��֮����¼�
	/// </summary>
	/// <param name="display">��ʾ����</param>
	/// <param name="viewportEnvelope">�µ��ӿڷ�Χ</param>
	/// <returns></returns>
	virtual ev_void onAfterRefresh( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope ){}
};
class CEagleEyeControlPrivateData;
class CToolEagleEyeControl;
class  EV_FRAMEWORKPROXY_DLL CEagleEyeControl : public EarthView::World::Core::CAllocatedObject
{
	friend class CEagleEyeControlPrivateData;
	friend class CEagleEyeDrawTimer;
	friend class CEagleEyeDrawThread;
	friend class CResizeTimer;
	friend class CEagleEyeEventHandler;
public:
	/// <summary>
	/// ���캯��
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CEagleEyeControl();

	/// <summary>
	/// �鹹����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CEagleEyeControl();

	/// <summary>
	/// ��ȡӥ�ۻ���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Display::IPaintDevice* getEagleEyeCanvas() const;

	/// <summary>
	/// ����ӥ���Ƿ�ʹ��Ĭ�ϵ�ͼ
	/// </summary>
	/// <param name="bUse">���ʹ��Ĭ�ϵ�ͼ������Ϊtrue</param>
	/// <returns></returns>
	ev_void setUseDefaultMap(ev_bool bUse);

	/// <summary>
	/// �ж��Ƿ�ʹ��Ĭ�ϵ�ͼ
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool isUseDefaultMap();

	/// <summary>
	/// ��ӹ����ĵ�ͼ�����ؼ�
	/// </summary>
	/// <param name="pControl">��ͼ�����ؼ�</param>
	/// <param name="bAddMap">����ǵ�ͼ�ؼ�������£��Ƿ񽫿ؼ��еĵ�ͼ��ӵ�ӥ����</param>
	/// <returns></returns>
	void addSpatialControl(EarthView::World::Spatial::Atlas::ISpatialControl* pControl, ev_bool bAddMap = true);

	/// <summary>
	/// �Ƴ������ĵ�ͼ�����ؼ�
	/// </summary>
	/// <param name="pControl">��ͼ�����ؼ�</param>
	/// <returns></returns>
	void removeSpatialControl(EarthView::World::Spatial::Atlas::ISpatialControl* pControl);

	/// <summary>
	/// ��ȡ������ͼ�����ؼ�
	/// </summary>
	/// <param name="nIndex">��ͼ�����ؼ���Ӧ������</param>
	/// <returns>nIndex������Ӧ�Ŀؼ�</returns>
	EarthView::World::Spatial::Atlas::ISpatialControl* getSpatialControl(ev_int32 nIndex);

	/// <summary>
	/// �ж�ĳ����ͼ�����ؼ��Ƿ��Ѿ�����
	/// </summary>
	/// <param name="pControl">�����жϵĿؼ�</param>
	/// <returns>�����ڷ���true,���򷵻�false</returns>
	ev_bool isExist(EarthView::World::Spatial::Atlas::ISpatialControl* pControl);

	/// <summary>
	/// ���ü���ĵ�ͼ�����ؼ�
	/// </summary>
	/// <param name="pControl">���ڼ���Ŀؼ�</param>
	/// <returns></returns>
	ev_void setActiveControl(EarthView::World::Spatial::Atlas::ISpatialControl* pControl);

	/// <summary>
	/// ��ȡ����Ŀؼ�
	/// </summary>
	/// <param name="pControl">���ڼ���Ŀؼ�</param>
	/// <returns></returns>
	EarthView::World::Spatial::Atlas::ISpatialControl* getActiveControl();

	/// <summary>
	/// �ж�ĳ���ؼ��ǲ��Ǽ���
	/// </summary>
	/// <param name="pControl">�ؼ�</param>
	/// <returns></returns>
	ev_bool isActiveControl(EarthView::World::Spatial::Atlas::ISpatialControl* pControl);

	/// <summary>
	/// �������пؼ�Ϊ������״̬
	/// </summary>
	/// <param name="pControl"></param>
	/// <returns></returns>
	ev_void setAllControlUnActive();

	/// <summary>
	/// ��ȡ�����Ŀؼ�����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getSpatialControlCount();

	/// <summary>
	/// Ϊӥ�������ض��ĵ�ͼ
	/// </summary>
	/// <param name="pControl">��ͼ����</param>
	/// <returns></returns>
	void addMap(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// �Ƴ�Ϊӥ�����õ��ض���ͼ
	/// </summary>
	/// <param name="pControl">��ͼ����</param>
	/// <returns></returns>
	void removeMap(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// ��ӹ����ĵ�ͼ
	/// </summary>
	/// <param name="pControl">��ͼ����</param>
	/// <returns></returns>
	void setMapCacheDirty();

	/// <summary>
	/// ��ȡΪӥ�����õĵ�ͼ����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMapCount();

	/// <summary>
	/// ��ȡΪӥ�����õĵ�ͼ
	/// </summary>
	/// <param name="nIndex">��ͼ��Ӧ������</param>
	/// <returns>nIndex������Ӧ�ĵ�ͼ</returns>
	EarthView::World::Spatial::Atlas::IMap* getMap(ev_int32 nIndex);

	/// <summary>
	/// �ж�ĳ����ͼ�Ƿ��Ѿ�����
	/// </summary>
	/// <param name="pControl">�����жϵĿؼ�</param>
	/// <returns>�����ڷ���true,���򷵻�false</returns>
	ev_bool isExist(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// ����Զ������
	/// </summary>
	/// <param name="pLeftTop">�������Ͻǵ�</param>
	/// <param name="pRightTop">�������Ͻǵ�</param>
	/// <param name="pRightBottom">�������½ǵ�</param>
	/// <param name="pSymbol">���</param>
	/// <returns></returns>
	void addRectangle(const EarthView::World::Spatial::Geometry::CPoint* pLeftTop,
		const EarthView::World::Spatial::Geometry::CPoint* pRightTop,
		const EarthView::World::Spatial::Geometry::CPoint* pRightBottom,
		const EarthView::World::Spatial::Display::ISymbol* pSymbol);

	/// <summary>
	/// ����Զ�����Ⱦͼ��
	/// </summary>
	/// <param name="pGeometry">���ζ���</param>
	/// <param name="pSymbol">���</param>
	/// <returns></returns>
	void addGeometry(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry,const EarthView::World::Spatial::Display::ISymbol* pSymbol);
	/// <summary>
	/// ����Զ�����Ⱦͼ��
	/// </summary>
	/// <returns></returns>
	void clearGeometry();

	/// <summary>
	/// �ػ�
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void	onRepaint();

	/// <summary>
	/// ˢ��
	/// </summary>
	/// <param name="symbol">���</param>
	/// <returns></returns>
	ev_void refresh();

	/// <summary>
	/// ���÷ǵ�ǰ�����ͼ��Ӧ�ľ��ο���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setUnActiveRectSymbol( _in EarthView::World::Spatial::Display::ISymbol* pSymbol);

	/// <summary>
	/// ��ȡ�ǵ�ǰ�����ͼ��Ӧ�ľ��ο���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Display::ISymbol* getUnActiveRectSymbol() const;

	/// <summary>
	/// ��ȡ����ɫ
	/// </summary>
	/// <param name=""></param>
	/// <returns>����ɫ</returns>
	EarthView::World::Spatial::Display::IColor* getBackground() const;
	/// <summary>
	/// ���ñ���ɫ
	/// </summary>
	/// <param name="background">����ɫ</param>
	/// <returns></returns>
	ev_void setBackground( _in const EarthView::World::Spatial::Display::IColor* background );

	/// <summary>
	/// ��ȡ��ʾ��Χ
	/// </summary>
	/// <param name=""></param>
	/// <returns>��ʾ��Χ</returns>
	EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const;
	/// <summary>
	/// ������ʾ��Χ
	/// </summary>
	/// <param name="pEnvelope">��ʾ��Χ</param>
	/// <returns></returns>
	ev_void setExtent( _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

	/// <summary>
	/// ���õ�ǰ�����ͼ��Ӧ�ľ��ο���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setActiveRectSymbol( _in EarthView::World::Spatial::Display::ISymbol* pSymbol);

	/// <summary>
	/// ��ȡ��ǰ�����ͼ��Ӧ�ľ��ο���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Display::ISymbol* getActiveRectSymbol() const;

	/// <summary>
	/// �Ŵ�ĳ����Χ
	/// </summary>
	/// <param name="pEvn">�Ŵ󵽵ķ�Χ</param>
	/// <param name="pEvn">���Ŵ�ĵ�����ͼ�ؼ�</param>
	/// <returns></returns>
	ev_void goTo(EarthView::World::Spatial::Geometry::IEnvelope*pEvn, EarthView::World::Spatial::Atlas::ISpatialControl *pCtrl);

	/// <summary>
	/// ���õ�����ͼ�ؼ������ĵ�
	/// </summary>
	/// <param name="dPX">���ĵ�X����</param>
	/// <param name="dPY">���ĵ�Y����</param>
	/// <param name="pCtrl">������ͼ�ؼ�</param>
	/// <returns></returns>
	ev_void setCenter(ev_real64 dPX, ev_real64 dPY, EarthView::World::Spatial::Atlas::ISpatialControl *pCtrl);

	/// <summary>
	/// ��ȡ�ؼ��ķ�Χ
	/// </summary>
	/// <param name="pCtrl">������ͼ�ؼ�</param>
	/// <returns>������ͼ�ؼ���Ӧ�ľ��η�Χ</returns>
	EarthView::World::Spatial::Geometry::IGeometry* getSpatialControlRectangle(EarthView::World::Spatial::Atlas::ISpatialControl *pCtrl);

	/// <summary>
	/// ��վ���
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();

	/// <summary>
	/// �ж��Ƿ����ڻ�ͼ
	/// </summary>
	/// <param name=""></param>
	/// <returns>������ڻ�ͼ����true,���򷵻�false</returns>
	ev_bool isDrawing();

	/// <summary>
	/// �������ô�С
	/// </summary>
	/// <param name="nWidth">����</param>
	/// <param name="nWidth">�߶�</param>
	/// <returns></returns>
	ev_void onResize(ev_int32 nWidth, ev_int32 nHeight);
	/// <summary>
	/// ���˫���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns></returns>
	ev_void onDoubleClick( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// ���̰����¼�����
	/// </summary>
	/// <param name="key">���µļ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <returns></returns>
	ev_void onKeyDown( _in ev_int32 keyCode, _in ev_int32 shift );

	/// <summary>
	/// ���̵����¼�����
	/// </summary>
	/// <param name="key">����ļ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>                    
	/// <returns></returns>
	ev_void onKeyUp( _in ev_int32 keyCode, _in ev_int32 shift );

	/// <summary>
	/// ��갴���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns></returns>
	ev_void onMouseDown( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// ����ƶ��¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns></returns>
	ev_void onMouseMove( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// ��굯���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns></returns>
	ev_void onMouseUp( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// �����ֹ����¼�����
	/// </summary>
	/// <param name="delta">�����ķ���</param>        
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="flag">��ʶλ</param>  
	/// <returns></returns>
	ev_void onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );
	ev_void addEagleEyeControlListener( _in IEagleEyeControlListener* ref_listener );
	ev_void removeEagleEyeControlListener( _in IEagleEyeControlListener* ref_listener );
	/// <summary>
	/// ��ȡ�ռ���ʾ����
	/// </summary>
	/// <param name=""></param>
	/// <returns>�ռ���ʾָ��(�ڲ�ָ��)</returns>
	EarthView::World::Spatial::Display::ISpatialDisplay * getDisplay() const;
	/// <summary>
	/// ���ÿؼ�����
	/// </summary>
	/// <param name="pxy">�ؼ�����</param>
	/// <returns></returns>
	ev_void setProxy(CEagleEyeControlAgent* ref_pxy);

	/// <summary>
	/// ��ȡ��ǰ����
	/// </summary>
	/// <param name="pxy"></param>
	/// <returns>��ǰӥ�۹���</returns>
	CToolEagleEyeControl *getCurrentTool();
private:
	ev_bool drawPrepare();
	ev_void draw();
	ev_void drawOver();
	ev_void freezeDraw();
	ev_void drawRectangle();
	ev_void drawGeometry();
	ev_void makeMapping();
	ev_void drawMap(EarthView::World::Spatial::Atlas::IMap *pMap);
	ev_void init();
	/// ֪ͨӥ�۵�ͼ�Ѿ��ı�
	ev_void notifyMapChanged();
private:
	CEagleEyeControlPrivateData * mpData;
ev_private:
	CEagleEyeControl( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY(CEagleEyeControl)
};

enum EagleEyeOperationType
{
	EEOT_PointSelect = 0,	//��ѡ
	EEOT_RectSelect  = 1,	//��ѡ
	EEOT_Pan		 = 2,	//ƽ��
};

class EV_FRAMEWORKPROXY_DLL CToolEagleEyeControl : public EarthView::World::Core::CAllocatedObject
{
public:
	enum OperationFlag
	{
		OF_Click = 1,
		OF_Rect  = 2,
		OF_Wheel = 4
	};
	/// <summary>
	/// ���캯��
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CToolEagleEyeControl(CEagleEyeControl *ref_ctrl);
	/// <summary>
	/// ��������
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CToolEagleEyeControl();

public:
	/// <summary>
	/// ��������
	/// </summary>
	/// <param name="ctrl">�ռ���ƶ���</param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void create(CEagleEyeControl *pEagleEyeControl);

	/// <summary>
	/// ��갴���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
	virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// ����ƶ��¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
	virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// ��굯���¼�����
	/// </summary>
	/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
	/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
	virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// �����ֹ����¼�����
	/// </summary>
	/// <param name="delta">�����ķ���</param>        
	/// <param name="x">���λ��x</param>
	/// <param name="y">���λ��y</param>
	/// <param name="flag">��ʶλ</param>  
	/// <returns></returns>
	ev_bool onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );

	/// <summary>
	/// ���̰����¼�����
	/// </summary>
	/// <param name="key">���µļ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ������</param>
	/// <returns></returns>
	ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);

	/// <summary>
	/// ���̵����¼�����
	/// </summary>
	/// <param name="key">����ļ�</param>
	/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>                    
	/// <returns></returns>
	ev_bool onKeyUp(ev_int32 keyCode,ev_int32 shift);

	/// <summary>
	/// ���˫��
	/// </summary>
	/// <param name=""></param>
	/// <returns>������˫��������true,���û��˫��������false</returns>
	ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

	/// <summary>
	/// ���ò���ģʽ����������򡢹���    OF_CLick | OF_Rect | OF_Wheel, Ĭ�϶�֧�������ֲ��������ֲ���������Ҫʱ����Ϊ0
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	void setOperationFlag(int flag);
	int getOperationFlag();
private:
	EagleEyeOperationType m_operationType;
	CEagleEyeControl *m_pEagleEyeControl;
	EarthView::World::Spatial::Display::ISpatialDisplay *m_pDisplay;
	EarthView::World::Spatial::Display::ISpatialTransformer *m_pTransformer;
	ev_int32 m_nStartPX;
	ev_int32 m_nStartPY;
	int mtOperationFlag;
	EarthView::World::Spatial::Display::CSimpleLineSymbol *m_pRectSymbol;
	//����������ʹ��
ev_private:
	CToolEagleEyeControl( EarthView::World::Core::CNameValuePairList *pList );
	//C_DISABLE_COPY( CTool2D )
};

}}}}

#endif