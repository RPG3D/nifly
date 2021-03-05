/*
BodySlide and Outfit Studio
See the included LICENSE file
*/

#include "Factory.hpp"

using namespace nifly;

NiFactoryRegister& NiFactoryRegister::Get() {
	static NiFactoryRegister instance;
	return instance;
}

NiFactoryRegister::NiFactoryRegister() {
	RegisterFactory<NiNode>();
	RegisterFactory<BSFadeNode>();
	RegisterFactory<BSValueNode>();
	RegisterFactory<BSLeafAnimNode>();
	RegisterFactory<BSTreeNode>();
	RegisterFactory<BSOrderedNode>();
	RegisterFactory<BSMultiBoundNode>();
	RegisterFactory<BSDebrisNode>();
	RegisterFactory<BSBlastNode>();
	RegisterFactory<BSDamageStage>();
	RegisterFactory<NiBone>();
	RegisterFactory<NiSortAdjustNode>();
	RegisterFactory<NiRangeLODData>();
	RegisterFactory<NiScreenLODData>();
	RegisterFactory<NiLODNode>();
	RegisterFactory<NiBillboardNode>();
	RegisterFactory<NiSwitchNode>();
	RegisterFactory<NiSequenceStreamHelper>();
	RegisterFactory<NiPalette>();
	RegisterFactory<NiPersistentSrcTextureRendererData>();
	RegisterFactory<NiPixelData>();
	RegisterFactory<NiSourceTexture>();
	RegisterFactory<NiSourceCubeMap>();
	RegisterFactory<NiTextureEffect>();
	RegisterFactory<NiAmbientLight>();
	RegisterFactory<NiDirectionalLight>();
	RegisterFactory<NiPointLight>();
	RegisterFactory<NiSpotLight>();
	RegisterFactory<NiAdditionalGeometryData>();
	RegisterFactory<BSPackedAdditionalGeometryData>();
	RegisterFactory<NiTriShape>();
	RegisterFactory<NiTriShapeData>();
	RegisterFactory<NiTriStrips>();
	RegisterFactory<NiTriStripsData>();
	RegisterFactory<NiLines>();
	RegisterFactory<NiLinesData>();
	RegisterFactory<NiScreenElements>();
	RegisterFactory<NiScreenElementsData>();
	RegisterFactory<BSLODTriShape>();
	RegisterFactory<BSSegmentedTriShape>();
	RegisterFactory<BSTriShape>();
	RegisterFactory<BSSubIndexTriShape>();
	RegisterFactory<BSMeshLODTriShape>();
	RegisterFactory<BSDynamicTriShape>();
	RegisterFactory<NiSkinInstance>();
	RegisterFactory<BSDismemberSkinInstance>();
	RegisterFactory<NiSkinData>();
	RegisterFactory<NiSkinPartition>();
	RegisterFactory<BSSkinInstance>();
	RegisterFactory<BSSkinBoneData>();
	RegisterFactory<NiShadeProperty>();
	RegisterFactory<NiSpecularProperty>();
	RegisterFactory<NiTexturingProperty>();
	RegisterFactory<NiVertexColorProperty>();
	RegisterFactory<NiDitherProperty>();
	RegisterFactory<NiFogProperty>();
	RegisterFactory<NiWireframeProperty>();
	RegisterFactory<NiZBufferProperty>();
	RegisterFactory<WaterShaderProperty>();
	RegisterFactory<HairShaderProperty>();
	RegisterFactory<DistantLODShaderProperty>();
	RegisterFactory<BSDistantTreeShaderProperty>();
	RegisterFactory<TallGrassShaderProperty>();
	RegisterFactory<VolumetricFogShaderProperty>();
	RegisterFactory<SkyShaderProperty>();
	RegisterFactory<TileShaderProperty>();
	RegisterFactory<BSShaderPPLightingProperty>();
	RegisterFactory<Lighting30ShaderProperty>();
	RegisterFactory<BSLightingShaderProperty>();
	RegisterFactory<BSEffectShaderProperty>();
	RegisterFactory<BSWaterShaderProperty>();
	RegisterFactory<BSSkyShaderProperty>();
	RegisterFactory<NiAlphaProperty>();
	RegisterFactory<NiMaterialProperty>();
	RegisterFactory<NiStencilProperty>();
	RegisterFactory<BSShaderTextureSet>();
	RegisterFactory<BSMasterParticleSystem>();
	RegisterFactory<NiParticleSystem>();
	RegisterFactory<NiMeshParticleSystem>();
	RegisterFactory<BSStripParticleSystem>();
	RegisterFactory<NiParticles>();
	RegisterFactory<NiAutoNormalParticles>();
	RegisterFactory<NiParticleMeshes>();
	RegisterFactory<NiRotatingParticles>();
	RegisterFactory<NiParticlesData>();
	RegisterFactory<NiAutoNormalParticlesData>();
	RegisterFactory<NiRotatingParticlesData>();
	RegisterFactory<NiParticleMeshesData>();
	RegisterFactory<NiPSysData>();
	RegisterFactory<NiMeshPSysData>();
	RegisterFactory<BSStripPSysData>();
	RegisterFactory<NiPSysEmitterCtlrData>();
	RegisterFactory<NiCamera>();
	RegisterFactory<BSPSysStripUpdateModifier>();
	RegisterFactory<NiPSysAgeDeathModifier>();
	RegisterFactory<BSPSysLODModifier>();
	RegisterFactory<NiPSysSpawnModifier>();
	RegisterFactory<BSPSysSimpleColorModifier>();
	RegisterFactory<NiPSysRotationModifier>();
	RegisterFactory<BSPSysScaleModifier>();
	RegisterFactory<NiPSysGravityModifier>();
	RegisterFactory<NiPSysPositionModifier>();
	RegisterFactory<NiPSysBoundUpdateModifier>();
	RegisterFactory<NiPSysDragModifier>();
	RegisterFactory<BSPSysInheritVelocityModifier>();
	RegisterFactory<BSPSysSubTexModifier>();
	RegisterFactory<NiPSysBombModifier>();
	RegisterFactory<NiColorData>();
	RegisterFactory<NiPSysColorModifier>();
	RegisterFactory<NiPSysGrowFadeModifier>();
	RegisterFactory<NiPSysMeshUpdateModifier>();
	RegisterFactory<NiPSysVortexFieldModifier>();
	RegisterFactory<NiPSysGravityFieldModifier>();
	RegisterFactory<NiPSysDragFieldModifier>();
	RegisterFactory<NiPSysTurbulenceFieldModifier>();
	RegisterFactory<NiPSysAirFieldModifier>();
	RegisterFactory<NiPSysRadialFieldModifier>();
	RegisterFactory<BSWindModifier>();
	RegisterFactory<BSPSysRecycleBoundModifier>();
	RegisterFactory<BSPSysHavokUpdateModifier>();
	RegisterFactory<BSParentVelocityModifier>();
	RegisterFactory<NiPSysSphericalCollider>();
	RegisterFactory<NiPSysPlanarCollider>();
	RegisterFactory<NiPSysColliderManager>();
	RegisterFactory<NiPSysSphereEmitter>();
	RegisterFactory<NiPSysCylinderEmitter>();
	RegisterFactory<NiPSysBoxEmitter>();
	RegisterFactory<BSPSysArrayEmitter>();
	RegisterFactory<NiPSysMeshEmitter>();
	RegisterFactory<BSLightingShaderPropertyColorController>();
	RegisterFactory<BSLightingShaderPropertyFloatController>();
	RegisterFactory<BSLightingShaderPropertyUShortController>();
	RegisterFactory<BSEffectShaderPropertyColorController>();
	RegisterFactory<BSEffectShaderPropertyFloatController>();
	RegisterFactory<NiLookAtController>();
	RegisterFactory<NiPathController>();
	RegisterFactory<NiPSysResetOnLoopCtlr>();
	RegisterFactory<NiUVData>();
	RegisterFactory<NiUVController>();
	RegisterFactory<BSRefractionFirePeriodController>();
	RegisterFactory<BSFrustumFOVController>();
	RegisterFactory<BSLagBoneController>();
	RegisterFactory<BSProceduralLightningController>();
	RegisterFactory<NiBoneLODController>();
	RegisterFactory<NiBSBoneLODController>();
	RegisterFactory<NiMorphData>();
	RegisterFactory<NiGeomMorpherController>();
	RegisterFactory<NiRollController>();
	RegisterFactory<NiMaterialColorController>();
	RegisterFactory<NiLightColorController>();
	RegisterFactory<NiFloatExtraDataController>();
	RegisterFactory<NiVisData>();
	RegisterFactory<NiVisController>();
	RegisterFactory<NiFlipController>();
	RegisterFactory<NiTextureTransformController>();
	RegisterFactory<NiLightDimmerController>();
	RegisterFactory<NiLightRadiusController>();
	RegisterFactory<NiAlphaController>();
	RegisterFactory<BSNiAlphaPropertyTestRefController>();
	RegisterFactory<NiKeyframeController>();
	RegisterFactory<NiTransformController>();
	RegisterFactory<BSMaterialEmittanceMultController>();
	RegisterFactory<BSRefractionStrengthController>();
	RegisterFactory<NiMultiTargetTransformController>();
	RegisterFactory<NiPSysModifierActiveCtlr>();
	RegisterFactory<NiPSysEmitterLifeSpanCtlr>();
	RegisterFactory<NiPSysEmitterSpeedCtlr>();
	RegisterFactory<NiPSysEmitterInitialRadiusCtlr>();
	RegisterFactory<NiPSysEmitterDeclinationCtlr>();
	RegisterFactory<NiPSysGravityStrengthCtlr>();
	RegisterFactory<NiPSysEmitterDeclinationVarCtlr>();
	RegisterFactory<NiPSysFieldMagnitudeCtlr>();
	RegisterFactory<NiPSysFieldAttenuationCtlr>();
	RegisterFactory<NiPSysFieldMaxDistanceCtlr>();
	RegisterFactory<NiPSysAirFieldAirFrictionCtlr>();
	RegisterFactory<NiPSysAirFieldInheritVelocityCtlr>();
	RegisterFactory<NiPSysAirFieldSpreadCtlr>();
	RegisterFactory<NiPSysInitialRotSpeedCtlr>();
	RegisterFactory<NiPSysInitialRotSpeedVarCtlr>();
	RegisterFactory<NiPSysInitialRotAngleCtlr>();
	RegisterFactory<NiPSysInitialRotAngleVarCtlr>();
	RegisterFactory<NiPSysEmitterPlanarAngleCtlr>();
	RegisterFactory<NiPSysEmitterPlanarAngleVarCtlr>();
	RegisterFactory<NiPSysEmitterCtlr>();
	RegisterFactory<BSPSysMultiTargetEmitterCtlr>();
	RegisterFactory<NiControllerManager>();
	RegisterFactory<NiSequence>();
	RegisterFactory<BSAnimNote>();
	RegisterFactory<BSAnimNotes>();
	RegisterFactory<NiStringPalette>();
	RegisterFactory<NiControllerSequence>();
	RegisterFactory<NiDefaultAVObjectPalette>();
	RegisterFactory<NiBSplineData>();
	RegisterFactory<NiBSplineBasisData>();
	RegisterFactory<NiBSplineCompFloatInterpolator>();
	RegisterFactory<NiBSplineCompPoint3Interpolator>();
	RegisterFactory<NiBSplineTransformInterpolator>();
	RegisterFactory<NiBSplineCompTransformInterpolator>();
	RegisterFactory<NiBlendBoolInterpolator>();
	RegisterFactory<NiBlendFloatInterpolator>();
	RegisterFactory<NiBlendPoint3Interpolator>();
	RegisterFactory<NiBlendTransformInterpolator>();
	RegisterFactory<NiBoolInterpolator>();
	RegisterFactory<NiBoolTimelineInterpolator>();
	RegisterFactory<NiFloatInterpolator>();
	RegisterFactory<NiTransformInterpolator>();
	RegisterFactory<BSRotAccumTransfInterpolator>();
	RegisterFactory<NiPoint3Interpolator>();
	RegisterFactory<NiPathInterpolator>();
	RegisterFactory<NiLookAtInterpolator>();
	RegisterFactory<BSTreadTransfInterpolator>();
	RegisterFactory<NiPSysUpdateCtlr>();
	RegisterFactory<NiKeyframeData>();
	RegisterFactory<NiTransformData>();
	RegisterFactory<NiPosData>();
	RegisterFactory<NiBoolData>();
	RegisterFactory<NiFloatData>();
	RegisterFactory<NiBinaryExtraData>();
	RegisterFactory<NiFloatExtraData>();
	RegisterFactory<NiFloatsExtraData>();
	RegisterFactory<NiStringExtraData>();
	RegisterFactory<NiStringsExtraData>();
	RegisterFactory<NiBooleanExtraData>();
	RegisterFactory<NiIntegerExtraData>();
	RegisterFactory<NiIntegersExtraData>();
	RegisterFactory<NiVectorExtraData>();
	RegisterFactory<NiColorExtraData>();
	RegisterFactory<BSXFlags>();
	RegisterFactory<BSWArray>();
	RegisterFactory<BSPositionData>();
	RegisterFactory<BSEyeCenterExtraData>();
	RegisterFactory<BSPackedCombinedSharedGeomDataExtra>();
	RegisterFactory<BSInvMarker>();
	RegisterFactory<BSFurnitureMarkerNode>();
	RegisterFactory<BSDecalPlacementVectorExtraData>();
	RegisterFactory<BSBehaviorGraphExtraData>();
	RegisterFactory<BSBound>();
	RegisterFactory<BSBoneLODExtraData>();
	RegisterFactory<NiTextKeyExtraData>();
	RegisterFactory<BSDistantObjectLargeRefExtraData>();
	RegisterFactory<BSClothExtraData>();
	RegisterFactory<BSConnectPointParents>();
	RegisterFactory<BSConnectPointChildren>();
	RegisterFactory<BSMultiBound>();
	RegisterFactory<BSMultiBoundOBB>();
	RegisterFactory<BSMultiBoundAABB>();
	RegisterFactory<BSMultiBoundSphere>();
	RegisterFactory<NiCollisionObject>();
	RegisterFactory<NiCollisionData>();
	RegisterFactory<bhkCollisionObject>();
	RegisterFactory<bhkNPCollisionObject>();
	RegisterFactory<bhkPCollisionObject>();
	RegisterFactory<bhkSPCollisionObject>();
	RegisterFactory<bhkBlendCollisionObject>();
	RegisterFactory<bhkPhysicsSystem>();
	RegisterFactory<bhkRagdollSystem>();
	RegisterFactory<bhkBlendController>();
	RegisterFactory<bhkPlaneShape>();
	RegisterFactory<bhkMultiSphereShape>();
	RegisterFactory<bhkConvexListShape>();
	RegisterFactory<bhkConvexVerticesShape>();
	RegisterFactory<bhkBoxShape>();
	RegisterFactory<bhkSphereShape>();
	RegisterFactory<bhkTransformShape>();
	RegisterFactory<bhkConvexTransformShape>();
	RegisterFactory<bhkCapsuleShape>();
	RegisterFactory<bhkNiTriStripsShape>();
	RegisterFactory<bhkListShape>();
	RegisterFactory<hkPackedNiTriStripsData>();
	RegisterFactory<bhkPackedNiTriStripsShape>();
	RegisterFactory<bhkLiquidAction>();
	RegisterFactory<bhkOrientHingedBodyAction>();
	RegisterFactory<bhkSimpleShapePhantom>();
	RegisterFactory<bhkAabbPhantom>();
	RegisterFactory<bhkHingeConstraint>();
	RegisterFactory<bhkLimitedHingeConstraint>();
	RegisterFactory<bhkRagdollConstraint>();
	RegisterFactory<bhkBreakableConstraint>();
	RegisterFactory<bhkStiffSpringConstraint>();
	RegisterFactory<bhkPrismaticConstraint>();
	RegisterFactory<bhkMalleableConstraint>();
	RegisterFactory<bhkBallAndSocketConstraint>();
	RegisterFactory<bhkBallSocketConstraintChain>();
	RegisterFactory<bhkRigidBody>();
	RegisterFactory<bhkRigidBodyT>();
	RegisterFactory<bhkCompressedMeshShape>();
	RegisterFactory<bhkCompressedMeshShapeData>();
	RegisterFactory<bhkMoppBvTreeShape>();
	RegisterFactory<bhkPoseArray>();
	RegisterFactory<bhkRagdollTemplate>();
	RegisterFactory<bhkRagdollTemplateData>();
}