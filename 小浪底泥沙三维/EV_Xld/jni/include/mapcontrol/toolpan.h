﻿#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_TOOLPAN_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_TOOLPAN_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/tool2d.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class EV_MAPCONTROL_DLL CToolPan : public CTool2D
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CToolPan();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CToolPan( );

				public:

					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					ev_uint32 getToolBarType() const;

					/// <summary>
					/// 获取工具类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类型</returns>
					ev_uint32 getType() const;

					/// <summary>
					/// 获取工具名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具名称</returns>
					EVString getName() const;

					/// <summary>
					/// 获取工具类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类别名称</returns>
					EVString getCategory() const;

					/// <summary>
					/// 获取工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具提示</returns>
					EVString getToolTip() const;

					/// <summary>
					/// 获取图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令的图标</returns>
					EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					ev_bool isCheckable() const;

                    /// <summary>
                    /// 启用Tool
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ev_void activate();

                    /// <summary>
                    /// 不使用Tool
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ev_void deactivate();

					/// <summary>
					/// 点击工具
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void onClicked();

                    /// <summary>
                    /// 获取光标样式
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>光标样式枚举</returns>
                    ev_int32 getCursor();

                    /// <summary>
                    /// 右键菜单事件触发
                    /// </summary>
                    /// <param name="x">光标位置x</param>
                    /// <param name="y">光标位置y</param>
                    /// <returns>是否继续向父控件发送该事件</returns>
                    ev_bool onContextMenu(ev_int32 x,ev_int32 y);

                    /// <summary>
                    /// 鼠标按下事件触发
                    /// </summary>
                    /// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
                    /// <param name="shift">shift键是否同时被按下</param>
                    /// <param name="x">光标位置x</param>
                    /// <param name="y">光标位置y</param>
                    /// <returns></returns>
                    ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

                    /// <summary>
                    /// 鼠标移动事件触发
                    /// </summary>
                    /// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
                    /// <param name="shift">shift键是否同时被按下</param>
                    /// <param name="x">光标位置x</param>
                    /// <param name="y">光标位置y</param>
                    /// <returns></returns>
                    ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

                    /// <summary>
                    /// 鼠标弹起事件触发
                    /// </summary>
                    /// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
                    /// <param name="shift">shift键是否同时被释放</param>
                    /// <param name="x">光标位置x</param>
                    /// <param name="y">光标位置y</param>
                    /// <returns></returns>
                    ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标双击
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果鼠标双击，返回true,如果没有双击，返回false</returns>
					ev_bool onDoubleClick();

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				ev_private:
					CToolPan( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CToolPan )
				};
			}
		}
	}
}
#endif

