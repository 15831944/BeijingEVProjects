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

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{

class CEagleEyeEventHandler;
class CEagleEyeDrawTimer;
class CResizeTimer;
class CEagleEyeDrawThread;

class  EV_MAPCONTROL_DLL CEagleEyeControlAgent : public EarthView::World::Core::CBaseObject
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
class EV_MAPCONTROL_DLL IEagleEyeControlListener : public  EarthView::World::Spatial::Atlas::IMapListener
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
class  EV_MAPCONTROL_DLL CEagleEyeControl : public EarthView::World::Core::CAllocatedObject
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
	/// ��ӹ����ĵ�ͼ�ؼ�
	/// </summary>
	/// <param name="pControl">��ͼ�ؼ�����</param>
	/// <returns></returns>
	void addMapControl(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// �Ƴ������ĵ�ͼ�ؼ�
	/// </summary>
	/// <param name="pControl">��ͼ�ؼ�����</param>
	/// <returns></returns>
	void removeMapControl(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// ��ȡ�����ĵ�ͼ�ؼ�
	/// </summary>
	/// <param name="nIndex">��ͼ�ؼ���Ӧ������</param>
	/// <returns>nIndex������Ӧ�ĵ�ͼ�ؼ�</returns>
	EarthView::World::Spatial2D::Controls::CMapControl* getMapControl(ev_int32 nIndex);

	/// <summary>
	/// �ж�ĳ����ͼ�ؼ��Ƿ��Ѿ�����
	/// </summary>
	/// <param name="pControl">�����жϵĿؼ�</param>
	/// <returns>�����ڷ���true,���򷵻�false</returns>
	ev_bool isExist(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// ���ü���ĵ�ͼ�ؼ�
	/// </summary>
	/// <param name="pControl">���ڼ���ĵ�ͼ�ؼ�</param>
	/// <returns></returns>
	ev_bool setActiveControl(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// �������е�ͼ�ؼ�Ϊ������״̬���ڳ������������£�
	/// </summary>
	/// <param name="pControl"></param>
	/// <returns></returns>
	ev_void setAllControlUnActive();

	/// <summary>
	/// ��ȡ�����ĵ�ͼ�ؼ�����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMapControlCount();

	/// <summary>
	/// ��ӹ����ĵ�ͼ
	/// </summary>
	/// <param name="pControl">��ͼ����</param>
	/// <returns></returns>
	void addMap(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// �Ƴ������ĵ�ͼ
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
	/// ��ȡ�����ĵ�ͼ����
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMapCount();

	/// <summary>
	/// ��ȡ�����ĵ�ͼ
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
}}}}

#endif