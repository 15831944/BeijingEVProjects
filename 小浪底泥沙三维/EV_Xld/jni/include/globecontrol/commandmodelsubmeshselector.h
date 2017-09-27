#ifndef _CCommandModelSubmeshSelector_INCLUDE__
#define _CCommandModelSubmeshSelector_INCLUDE__

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/globecommand.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace Controls{

	class EV_GLOBECONTROL_DLL CCommandModelSubmeshSelector : public EarthView::World::Spatial3D::Controls::CGlobeCommand
	{
	public:
		CCommandModelSubmeshSelector();
		~CCommandModelSubmeshSelector();

		/// <summary>
		/// ������������
		/// </summary>
		/// <param name=""></param>
		/// <returns>���������EVCommandTypeö��ֵ</returns>
		virtual ev_uint32 getType() const;
		/// <summary>
		/// ��ð�ť����
		/// </summary>
		/// <param name=""></param>
		/// <returns>��ť����</returns>
		virtual EVString getName() const;

		/// <summary>
		/// ��ð�ť��Ŀ¼����
		/// </summary>
		/// <param name=""></param>
		/// <returns>��ť��Ŀ¼����</returns>
		virtual EVString getCategory() const;

		/// <summary>
		/// ��ð�ť����ʾ
		/// </summary>
		/// <param name=""></param>
		/// <returns>��ť����ʾ</returns>
		virtual EVString getToolTip() const;

		/// <summary>
		/// ��ð�ť��ͼ��
		/// </summary>
		/// <param name=""></param>
		/// <returns>��ť��ͼ��</returns>
		virtual EarthView::World::Display::IBitmap * getIcon() const;

		/// <summary>
		/// �жϰ�ť�Ƿ��ܰ���
		/// </summary>
		/// <param name=""></param>
		/// <returns>�ܰ��·���true,���ܰ��·���false</returns>
		virtual ev_bool isCheckable() const;

		/// <summary>
		/// ��ť��������
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ev_void onClicked();

		/// <summary>
		/// �жϰ�ť�Ƿ���
		/// </summary>
		/// <param name=""></param>
		/// <returns>���·���true,û���·���false</returns>
		virtual ev_bool getChecked() const;

		/// <summary>
		/// ���ð�ť״̬
		/// </summary>
		/// <param name="checked">��ť״̬</param>
		/// <returns></returns>
		virtual ev_void setChecked( _in ev_bool checked );

		/// <summary>
		/// �жϰ�ť�Ƿ����
		/// </summary>
		/// <param name=""></param>
		/// <returns>���÷���true,�����÷���false</returns>
		virtual ev_bool getEnabled() const;

		/// <summary>
		/// ���ð�ť�Ƿ����
		/// </summary>
		/// <param name="enabled">�Ƿ����</param>
		/// <returns></returns>
		virtual ev_void setEnabled( _in ev_bool enabled );

		/// <summary>
		/// ֪ͨ��ť����
		/// </summary>
		/// <param name="e">�¼�</param>
		/// <returns>����false</returns>
		virtual ev_bool update( _in EarthView::World::Core::CEvent* e );
ev_private:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="pList">���캯��������ֵ�Ա�</param>
		/// <returns></returns>	
		CCommandModelSubmeshSelector( EarthView::World::Core::CNameValuePairList *pList );
	protected:
		C_DISABLE_COPY(CCommandModelSubmeshSelector)
	};

}}}}

#endif // _CCommandModelSubmeshSelector_INCLUDE__

