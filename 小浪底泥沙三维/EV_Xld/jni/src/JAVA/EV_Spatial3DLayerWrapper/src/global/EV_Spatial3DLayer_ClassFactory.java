package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial3DLayer_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CBilBuilder", new com.earthview.world.spatial3d.BilBuilderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CChartClampSceneLayer", new com.earthview.world.spatial3d.atlas.ChartClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCChartClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.ChartClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CChartClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.ChartClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCChartClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.ChartClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CChartWMSClampSceneLayer", new com.earthview.world.spatial3d.atlas.ChartWMSClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCChartWMSClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.ChartWMSClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CChartWMSClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.ChartWMSClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCChartWMSClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.ChartWMSClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CChartWMTSClampSceneLayer", new com.earthview.world.spatial3d.atlas.ChartWMTSClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCChartWMTSClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.ChartWMTSClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CChartWMTSClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.ChartWMTSClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCChartWMTSClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.ChartWMTSClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer", new com.earthview.world.spatial3d.atlas.FeatureGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCFeatureGroupLayerProxy", new com.earthview.world.spatial3d.atlas.FeatureGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayerFactory", new com.earthview.world.spatial3d.atlas.FeatureGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCFeatureGroupLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.FeatureGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageClampSceneLayer", new com.earthview.world.spatial3d.atlas.ImageClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCImageClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.ImageClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.ImageClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCImageClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.ImageClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer", new com.earthview.world.spatial3d.atlas.ImageGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCImageGroupLayerProxy", new com.earthview.world.spatial3d.atlas.ImageGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimeList", new com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimeListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer::CDesiredTime", new com.earthview.world.spatial3d.atlas.ImageGroupLayer.DesiredTimeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayerFactory", new com.earthview.world.spatial3d.atlas.ImageGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCImageGroupLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.ImageGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer", new com.earthview.world.spatial3d.atlas.IrelativescenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JIRelativeSceneLayerProxy", new com.earthview.world.spatial3d.atlas.IrelativescenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::ITerrainLayer", new com.earthview.world.spatial3d.atlas.IterrainlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JITerrainLayerProxy", new com.earthview.world.spatial3d.atlas.IterrainlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::IWebClampSceneLayer", new com.earthview.world.spatial3d.atlas.IwebclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JIWebClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.IwebclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty", new com.earthview.world.spatial3d.atlas.Layer3DLabelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLayer3DLabelPropertyProxy", new com.earthview.world.spatial3d.atlas.Layer3DLabelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLocalImageClampSceneLayer", new com.earthview.world.spatial3d.atlas.LocalImageClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLocalImageClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.LocalImageClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLocalImageClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.LocalImageClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLocalImageClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.LocalImageClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLocalTerrainLayer", new com.earthview.world.spatial3d.atlas.LocalTerrainLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLocalTerrainLayerProxy", new com.earthview.world.spatial3d.atlas.LocalTerrainLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLocalTerrainLayerFactory", new com.earthview.world.spatial3d.atlas.LocalTerrainLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLocalTerrainLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.LocalTerrainLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CNeoVectorWebSceneLayer", new com.earthview.world.spatial3d.atlas.NeoVectorWebSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCNeoVectorWebSceneLayerProxy", new com.earthview.world.spatial3d.atlas.NeoVectorWebSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CNeoVectorWebSceneLayerFactory", new com.earthview.world.spatial3d.atlas.NeoVectorWebSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCNeoVectorWebSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.NeoVectorWebSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayer", new com.earthview.world.spatial3d.atlas.OgcwfsvectorclamplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWFSVectorClampLayerProxy", new com.earthview.world.spatial3d.atlas.OgcwfsvectorclamplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayerFactory", new com.earthview.world.spatial3d.atlas.OgcwfsvectorclamplayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWFSVectorClampLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.OgcwfsvectorclamplayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayer", new com.earthview.world.spatial3d.atlas.OgcwfsvectorrelativescenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWFSVectorRelativeSceneLayerProxy", new com.earthview.world.spatial3d.atlas.OgcwfsvectorrelativescenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayerFactory", new com.earthview.world.spatial3d.atlas.OgcwfsvectorrelativescenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWFSVectorRelativeSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.OgcwfsvectorrelativescenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWMSClampSceneLayer", new com.earthview.world.spatial3d.atlas.OgcwmsclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWMSClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.OgcwmsclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWMSClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.OgcwmsclampscenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWMSClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.OgcwmsclampscenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWMTSClampSceneLayer", new com.earthview.world.spatial3d.atlas.OgcwmtsclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWMTSClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.OgcwmtsclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWMTSClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.OgcwmtsclampscenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWMTSClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.OgcwmtsclampscenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface", new com.earthview.world.spatial3d.atlas.SelectedGeometryStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCSelectedGeometryStringInterfaceProxy", new com.earthview.world.spatial3d.atlas.SelectedGeometryStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTempGroupLayer", new com.earthview.world.spatial3d.atlas.TempGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTempGroupLayerProxy", new com.earthview.world.spatial3d.atlas.TempGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayer", new com.earthview.world.spatial3d.atlas.TerrainGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainGroupLayerProxy", new com.earthview.world.spatial3d.atlas.TerrainGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerFactory", new com.earthview.world.spatial3d.atlas.TerrainGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainGroupLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.TerrainGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainLayer", new com.earthview.world.spatial3d.atlas.TerrainLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainLayerProxy", new com.earthview.world.spatial3d.atlas.TerrainLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory", new com.earthview.world.spatial3d.atlas.TerrainLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.TerrainLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainManager", new com.earthview.world.spatial3d.atlas.TerrainManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainManagerProxy", new com.earthview.world.spatial3d.atlas.TerrainManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo", new com.earthview.world.spatial3d.atlas.VectorCache3DLayerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorDBClampSceneLayer", new com.earthview.world.spatial3d.atlas.VectorDBClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorDBClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.VectorDBClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorDBClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.VectorDBClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorDBClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.VectorDBClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager", new com.earthview.world.spatial3d.atlas.VectorLayerBackgroundQueueManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher", new com.earthview.world.spatial3d.atlas.VectorOctreeCachePublisherClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorOctreeCachePublisherProxy", new com.earthview.world.spatial3d.atlas.VectorOctreeCachePublisherClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener", new com.earthview.world.spatial3d.atlas.VectorOctreePublishListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorOctreePublishListenerProxy", new com.earthview.world.spatial3d.atlas.VectorOctreePublishListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVector3DCacheField", new com.earthview.world.spatial3d.atlas.Vector3DCacheFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector", new com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorRelativeSceneLayer", new com.earthview.world.spatial3d.atlas.VectorRelativeSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorRelativeSceneLayerProxy", new com.earthview.world.spatial3d.atlas.VectorRelativeSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorRelativeSceneLayerFactory", new com.earthview.world.spatial3d.atlas.VectorRelativeSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorRelativeSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.VectorRelativeSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorWebClampSceneLayer", new com.earthview.world.spatial3d.atlas.VectorWebClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorWebClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.VectorWebClampSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorWebClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.VectorWebClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorWebClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.VectorWebClampSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorWebRelativeSceneLayer", new com.earthview.world.spatial3d.atlas.VectorWebRelativeSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorWebRelativeSceneLayerProxy", new com.earthview.world.spatial3d.atlas.VectorWebRelativeSceneLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorRelativeWebSceneLayerFactory", new com.earthview.world.spatial3d.atlas.VectorRelativeWebSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorRelativeWebSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.VectorRelativeWebSceneLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayer", new com.earthview.world.spatial3d.atlas.WmtsclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCWMTSClampSceneLayerProxy", new com.earthview.world.spatial3d.atlas.WmtsclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayerFactory", new com.earthview.world.spatial3d.atlas.WmtsclampscenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCWMTSClampSceneLayerFactoryProxy", new com.earthview.world.spatial3d.atlas.WmtsclampscenelayerfactoryClassFactory());
	}
}

