#pragma once
#include <cstdint>
#include <string>

// 2025-01-28 12:41: UTC

#define STR_MERGE_IMPL(a, b) a##b
#define STR_MERGE(a, b) STR_MERGE_IMPL(a, b)
#define MAKE_PAD(size) STR_MERGE(_pad, __COUNTER__)[size]
#define DEFINE_MEMBER_N(type, name, offset) struct {unsigned char MAKE_PAD(offset); type name;}
struct Vector3 { float x, y, z; };

namespace kyedumper
{
	constexpr int64_t timestamp = 1738068088;
	class CAI_BaseNPC
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_lifeState,0x25F );
			DEFINE_MEMBER_N(char, m_bPerformAvoidance,0x2F34 );
			DEFINE_MEMBER_N(char, m_bIsMoving,0x2F35 );
			DEFINE_MEMBER_N(char, m_bFadeCorpse,0x2F36 );
			DEFINE_MEMBER_N(int, m_iDeathPose,0x2F24 );
			DEFINE_MEMBER_N(int, m_iDeathFrame,0x2F28 );
			DEFINE_MEMBER_N(int, m_iSpeedModRadius,0x2F2C );
			DEFINE_MEMBER_N(int, m_iSpeedModSpeed,0x2F30 );
			DEFINE_MEMBER_N(char, m_bSpeedModActive,0x2F37 );
			DEFINE_MEMBER_N(char, m_bImportanRagdoll,0x2F38 );
			DEFINE_MEMBER_N(float, m_flTimePingEffect,0x2F20 );
		};
	};
	class CBaseAnimating
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nSequence,0x28C0 );
			DEFINE_MEMBER_N(int, m_nForceBone,0x268C );
			DEFINE_MEMBER_N(Vector3, m_vecForce,0x2680 );
			DEFINE_MEMBER_N(int, m_nSkin,0xA1C );
			DEFINE_MEMBER_N(int, m_nBody,0xA20 );
			DEFINE_MEMBER_N(int, m_nHitboxSet,0x9FC );
			DEFINE_MEMBER_N(float, m_flModelScale,0x274C );
			DEFINE_MEMBER_N(float, m_flPoseParameter,0x2778 );
			DEFINE_MEMBER_N(float, m_flPlaybackRate,0xA18 );
			DEFINE_MEMBER_N(float, m_flEncodedController,0xA54 );
			DEFINE_MEMBER_N(char, m_bClientSideAnimation,0x28A0 );
			DEFINE_MEMBER_N(char, m_bClientSideFrameReset,0x26C4 );
			DEFINE_MEMBER_N(char, m_bClientSideRagdoll,0x279 );
			DEFINE_MEMBER_N(int, m_nNewSequenceParity,0xA44 );
			DEFINE_MEMBER_N(int, m_nResetEventsParity,0xA48 );
			DEFINE_MEMBER_N(int, m_nMuzzleFlashParity,0xA64 );
			DEFINE_MEMBER_N(int, m_hLightingOrigin,0x2948 );
			DEFINE_MEMBER_N(float, m_flFrozen,0x26FC );
			DEFINE_MEMBER_N(int, m_ScaleType,0x2750 );
			DEFINE_MEMBER_N(char, m_bSuppressAnimSounds,0x294E );
			DEFINE_MEMBER_N(int, m_nHighlightColorR,0xA38 );
			DEFINE_MEMBER_N(int, m_nHighlightColorG,0xA3C );
			DEFINE_MEMBER_N(int, m_nHighlightColorB,0xA40 );
		};
	};
	class CBaseAttributableItem
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_AttributeManager,0x2D90 );
			DEFINE_MEMBER_N(int, m_OriginalOwnerXuidLow,0x31D0 );
			DEFINE_MEMBER_N(int, m_OriginalOwnerXuidHigh,0x31D4 );
			DEFINE_MEMBER_N(int, m_nFallbackPaintKit,0x31D8 );
			DEFINE_MEMBER_N(int, m_nFallbackSeed,0x31DC );
			DEFINE_MEMBER_N(float, m_flFallbackWear,0x31E0 );
			DEFINE_MEMBER_N(int, m_nFallbackStatTrak,0x31E4 );
		};
	};
	class CBaseButton
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_usable,0xA08 );
		};
	};
	class CBaseCombatCharacter
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_LastHitGroup,0x2D84 );
			DEFINE_MEMBER_N(int, m_hActiveWeapon,0x2F08 );
			DEFINE_MEMBER_N(float, m_flTimeOfLastInjury,0x2F0C );
			DEFINE_MEMBER_N(int, m_nRelativeDirectionOfLastInjury,0x2F10 );
			DEFINE_MEMBER_N(int, m_hMyWeapons,0x2E08 );
			DEFINE_MEMBER_N(int, m_hMyWearables,0x2F14 );
		};
	};
	class CBaseCombatWeapon
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iViewModelIndex,0x3250 );
			DEFINE_MEMBER_N(int, m_iWorldModelIndex,0x3254 );
			DEFINE_MEMBER_N(int, m_iWorldDroppedModelIndex,0x3258 );
			DEFINE_MEMBER_N(int, m_iState,0x3268 );
			DEFINE_MEMBER_N(int, m_hOwner,0x3240 );
			DEFINE_MEMBER_N(int, m_iClip1,0x3274 );
			DEFINE_MEMBER_N(int, m_iClip2,0x3278 );
			DEFINE_MEMBER_N(int, m_iPrimaryReserveAmmoCount,0x327C );
			DEFINE_MEMBER_N(int, m_iSecondaryReserveAmmoCount,0x3280 );
			DEFINE_MEMBER_N(int, m_hWeaponWorldModel,0x3264 );
			DEFINE_MEMBER_N(int, m_iNumEmptyAttacks,0x3260 );
		};
	};
	class CBaseCSGrenade
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bRedraw,0x33E0 );
			DEFINE_MEMBER_N(char, m_bIsHeldByPlayer,0x33E1 );
			DEFINE_MEMBER_N(char, m_bPinPulled,0x33E2 );
			DEFINE_MEMBER_N(int, m_fThrowTime,0x33E4 );
			DEFINE_MEMBER_N(char, m_bLoopingSoundPlaying,0x33E8 );
			DEFINE_MEMBER_N(float, m_flThrowStrength,0x33EC );
			DEFINE_MEMBER_N(int, m_fDropTime,0x33F0 );
		};
	};
	class CBaseCSGrenadeProjectile
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_vInitialVelocity,0x29E0 );
			DEFINE_MEMBER_N(int, m_nBounces,0x29EC );
			DEFINE_MEMBER_N(int, m_nExplodeEffectIndex,0x29F0 );
			DEFINE_MEMBER_N(int, m_nExplodeEffectTickBegin,0x29F4 );
			DEFINE_MEMBER_N(Vector3, m_vecExplodeEffectOrigin,0x29F8 );
		};
	};
	class CBaseDoor
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flWaveHeight,0xA08 );
		};
	};
	class CBaseEntity
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flSimulationTime,0x268 );
			DEFINE_MEMBER_N(int, m_cellbits,0x74 );
			DEFINE_MEMBER_N(int, m_cellX,0x7C );
			DEFINE_MEMBER_N(int, m_cellY,0x80 );
			DEFINE_MEMBER_N(int, m_cellZ,0x84 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, m_angRotation,0x12C );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(int, m_fEffects,0xF0 );
			DEFINE_MEMBER_N(int, m_nRenderMode,0x25B );
			DEFINE_MEMBER_N(int, m_nRenderFX,0x25A );
			DEFINE_MEMBER_N(int, m_clrRender,0x70 );
			DEFINE_MEMBER_N(int, m_iTeamNum,0xF4 );
			DEFINE_MEMBER_N(int, m_iPendingTeamNum,0xF8 );
			DEFINE_MEMBER_N(int, m_CollisionGroup,0x474 );
			DEFINE_MEMBER_N(float, m_flElasticity,0x300 );
			DEFINE_MEMBER_N(float, m_flShadowCastDistance,0x3A0 );
			DEFINE_MEMBER_N(int, m_hOwnerEntity,0x14C );
			DEFINE_MEMBER_N(int, m_hEffectEntity,0x998 );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
			DEFINE_MEMBER_N(int, m_iParentAttachment,0x2EC );
			DEFINE_MEMBER_N(int, m_iName,0x154 );
			DEFINE_MEMBER_N(int, m_Collision,0x320 );
			DEFINE_MEMBER_N(int, m_iTextureFrameIndex,0x98C );
			DEFINE_MEMBER_N(char, m_bSimulatedEveryTick,0x93A );
			DEFINE_MEMBER_N(char, m_bAnimatedEveryTick,0x93B );
			DEFINE_MEMBER_N(char, m_bAlternateSorting,0x93C );
			DEFINE_MEMBER_N(char, m_bSpotted,0x93D );
			DEFINE_MEMBER_N(char, m_bSpottedBy,0x93E );
			DEFINE_MEMBER_N(char, m_bSpottedByMask,0x980 );
			DEFINE_MEMBER_N(char, m_bIsAutoaimTarget,0x60 );
			DEFINE_MEMBER_N(int, m_fadeMinDist,0x2F4 );
			DEFINE_MEMBER_N(int, m_fadeMaxDist,0x2F8 );
			DEFINE_MEMBER_N(float, m_flFadeScale,0x2FC );
			DEFINE_MEMBER_N(int, m_nMinCPULevel,0x988 );
			DEFINE_MEMBER_N(int, m_nMaxCPULevel,0x989 );
			DEFINE_MEMBER_N(int, m_nMinGPULevel,0x98A );
			DEFINE_MEMBER_N(int, m_nMaxGPULevel,0x98B );
			DEFINE_MEMBER_N(float, m_flUseLookAtAngle,0x2CC );
			DEFINE_MEMBER_N(float, m_flLastMadeNoiseTime,0x20 );
			DEFINE_MEMBER_N(float, m_flMaxFallVelocity,0xDC );
			DEFINE_MEMBER_N(char, m_bEligibleForScreenHighlight,0x9B9 );
		};
	};
	class CBaseFlex
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flexWeight,0x2A38 );
			DEFINE_MEMBER_N(char, m_blinktoggle,0x2BE4 );
			DEFINE_MEMBER_N(int, m_viewtarget,0x2A00 );
		};
	};
	class CBaseGrenade
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flDamage,0x29A8 );
			DEFINE_MEMBER_N(int, m_DmgRadius,0x2994 );
			DEFINE_MEMBER_N(char, m_bIsLive,0x2991 );
			DEFINE_MEMBER_N(int, m_hThrower,0x29B0 );
			DEFINE_MEMBER_N(Vector3, m_vecVelocity,0x114 );
			DEFINE_MEMBER_N(int, m_fFlags,0x104 );
		};
	};
	class CBasePlayer
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, pl,0x31E0 );
			DEFINE_MEMBER_N(int, m_iFOV,0x31F4 );
			DEFINE_MEMBER_N(int, m_iFOVStart,0x31F8 );
			DEFINE_MEMBER_N(float, m_flFOVTime,0x3218 );
			DEFINE_MEMBER_N(int, m_iDefaultFOV,0x333C );
			DEFINE_MEMBER_N(int, m_hZoomOwner,0x325C );
			DEFINE_MEMBER_N(int, m_afPhysicsFlags,0x32FC );
			DEFINE_MEMBER_N(int, m_hVehicle,0x3300 );
			DEFINE_MEMBER_N(int, m_hUseEntity,0x3338 );
			DEFINE_MEMBER_N(int, m_hGroundEntity,0x150 );
			DEFINE_MEMBER_N(int, m_iHealth,0x100 );
			DEFINE_MEMBER_N(int, m_lifeState,0x25F );
			DEFINE_MEMBER_N(int, m_iAmmo,0x2D88 );
			DEFINE_MEMBER_N(int, m_iBonusProgress,0x3250 );
			DEFINE_MEMBER_N(int, m_iBonusChallenge,0x3254 );
			DEFINE_MEMBER_N(float, m_flMaxspeed,0x3258 );
			DEFINE_MEMBER_N(int, m_fFlags,0x104 );
			DEFINE_MEMBER_N(int, m_iObserverMode,0x3388 );
			DEFINE_MEMBER_N(char, m_bActiveCameraMan,0x338C );
			DEFINE_MEMBER_N(char, m_bCameraManXRay,0x338D );
			DEFINE_MEMBER_N(char, m_bCameraManOverview,0x338E );
			DEFINE_MEMBER_N(char, m_bCameraManScoreBoard,0x338F );
			DEFINE_MEMBER_N(int, m_uCameraManGraphs,0x3390 );
			DEFINE_MEMBER_N(int, m_iDeathPostEffect,0x3384 );
			DEFINE_MEMBER_N(int, m_hObserverTarget,0x339C );
			DEFINE_MEMBER_N(int, m_hViewModel[0],0x3308 );
			DEFINE_MEMBER_N(int, m_iCoachingTeam,0x2F60 );
			DEFINE_MEMBER_N(std::string, m_szLastPlaceName,0x35C4 );
			DEFINE_MEMBER_N(Vector3, m_vecLadderNormal,0x3240 );
			DEFINE_MEMBER_N(int, m_ladderSurfaceProps,0x3210 );
			DEFINE_MEMBER_N(int, m_ubEFNoInterpParity,0x35E8 );
			DEFINE_MEMBER_N(int, m_hPostProcessCtrl,0x37B8 );
			DEFINE_MEMBER_N(int, m_hColorCorrectionCtrl,0x37BC );
			DEFINE_MEMBER_N(int, m_PlayerFogm_hCtrl,0x37C4 );
			DEFINE_MEMBER_N(int, m_vphysicsCollisionState,0x326C );
			DEFINE_MEMBER_N(int, m_hViewEntity,0x334C );
			DEFINE_MEMBER_N(char, m_bShouldDrawPlayerWhileUsingViewEntity,0x3350 );
			DEFINE_MEMBER_N(float, m_flDuckAmount,0x2FBC );
			DEFINE_MEMBER_N(float, m_flDuckSpeed,0x2FC0 );
			DEFINE_MEMBER_N(int, m_nWaterLevel,0x25E );
		};
	};
	class CBaseTeamObjectiveResource
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iTimerToShowInHUD,0x9D8 );
			DEFINE_MEMBER_N(int, m_iStopWatchTimer,0x9DC );
			DEFINE_MEMBER_N(int, m_iNumControlPoints,0x9E0 );
			DEFINE_MEMBER_N(char, m_bPlayingMiniRounds,0x9E8 );
			DEFINE_MEMBER_N(char, m_bControlPointsReset,0x9E9 );
			DEFINE_MEMBER_N(int, m_iUpdateCapHudParity,0x9EC );
			DEFINE_MEMBER_N(int, m_vCPPositions[0],0x9F4 );
			DEFINE_MEMBER_N(char, m_bCPIsVisible,0xA54 );
			DEFINE_MEMBER_N(float, m_flLazyCapPerc,0xA5C );
			DEFINE_MEMBER_N(int, m_iTeamIcons,0xA9C );
			DEFINE_MEMBER_N(int, m_iTeamOverlays,0xB9C );
			DEFINE_MEMBER_N(int, m_iTeamReqCappers,0xC9C );
			DEFINE_MEMBER_N(float, m_flTeamCapTime,0xD9C );
			DEFINE_MEMBER_N(int, m_iPreviousPoints,0xE9C );
			DEFINE_MEMBER_N(char, m_bTeamCanCap,0x119C );
			DEFINE_MEMBER_N(int, m_iTeamBaseIcons,0x11DC );
			DEFINE_MEMBER_N(int, m_iBaseControlPoints,0x125C );
			DEFINE_MEMBER_N(char, m_bInMiniRound,0x12DC );
			DEFINE_MEMBER_N(int, m_iWarnOnCap,0x12E4 );
			DEFINE_MEMBER_N(int, m_iszWarnSound[0],0x1304 );
			DEFINE_MEMBER_N(float, m_flPathDistance,0x1AFC );
			DEFINE_MEMBER_N(int, m_iNumTeamMembers,0x1B1C );
			DEFINE_MEMBER_N(int, m_iCappingTeam,0x1C1C );
			DEFINE_MEMBER_N(int, m_iTeamInZone,0x1C3C );
			DEFINE_MEMBER_N(char, m_bBlocked,0x1C5C );
			DEFINE_MEMBER_N(int, m_iOwner,0x1C64 );
			DEFINE_MEMBER_N(int, m_pszCapLayoutInHUD,0x1CEC );
		};
	};
	class CBaseToggle
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecFinalDest,0x9EC );
			DEFINE_MEMBER_N(int, m_movementType,0x9F8 );
			DEFINE_MEMBER_N(float, m_flMoveTargetTime,0x9FC );
		};
	};
	class CBaseTrigger
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bClientSidePredicted,0xA08 );
			DEFINE_MEMBER_N(int, m_spawnflags,0x2C8 );
		};
	};
	class CBaseViewModel
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(int, m_hWeapon,0x29D8 );
			DEFINE_MEMBER_N(int, m_nSkin,0xA1C );
			DEFINE_MEMBER_N(int, m_nBody,0xA20 );
			DEFINE_MEMBER_N(int, m_nSequence,0x28C0 );
			DEFINE_MEMBER_N(int, m_nViewModelIndex,0x29D0 );
			DEFINE_MEMBER_N(float, m_flPlaybackRate,0xA18 );
			DEFINE_MEMBER_N(int, m_fEffects,0xF0 );
			DEFINE_MEMBER_N(int, m_nAnimationParity,0x29D4 );
			DEFINE_MEMBER_N(int, m_hOwner,0x29DC );
			DEFINE_MEMBER_N(int, m_nNewSequenceParity,0xA44 );
			DEFINE_MEMBER_N(int, m_nResetEventsParity,0xA48 );
			DEFINE_MEMBER_N(int, m_nMuzzleFlashParity,0xA64 );
			DEFINE_MEMBER_N(char, m_bShouldIgnoreOffsetAndAccuracy,0x29A0 );
		};
	};
	class CBaseWeaponWorldModel
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(int, m_nBody,0xA20 );
			DEFINE_MEMBER_N(int, m_fEffects,0xF0 );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
			DEFINE_MEMBER_N(int, m_hCombatWeaponParent,0x2A00 );
		};
	};
	class CBeam
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nBeamType,0x9F4 );
			DEFINE_MEMBER_N(int, m_nBeamFlags,0x9F8 );
			DEFINE_MEMBER_N(int, m_nNumBeamEnts,0x9E8 );
			DEFINE_MEMBER_N(int, m_hAttachEntity,0x9FC );
			DEFINE_MEMBER_N(int, m_nAttachIndex,0xA24 );
			DEFINE_MEMBER_N(int, m_nHaloIndex,0x9F0 );
			DEFINE_MEMBER_N(int, m_fHaloScale,0xA58 );
			DEFINE_MEMBER_N(int, m_fWidth,0xA4C );
			DEFINE_MEMBER_N(int, m_fEndWidth,0xA50 );
			DEFINE_MEMBER_N(int, m_fFadeLength,0xA54 );
			DEFINE_MEMBER_N(int, m_fAmplitude,0xA5C );
			DEFINE_MEMBER_N(int, m_fStartFrame,0xA60 );
			DEFINE_MEMBER_N(int, m_fSpeed,0xA64 );
			DEFINE_MEMBER_N(float, m_flFrameRate,0x9D8 );
			DEFINE_MEMBER_N(float, m_flHDRColorScale,0x9DC );
			DEFINE_MEMBER_N(int, m_clrRender,0x70 );
			DEFINE_MEMBER_N(int, m_nRenderFX,0x25A );
			DEFINE_MEMBER_N(int, m_nRenderMode,0x25B );
			DEFINE_MEMBER_N(float, m_flFrame,0xA68 );
			DEFINE_MEMBER_N(int, m_nClipStyle,0xA6C );
			DEFINE_MEMBER_N(Vector3, m_vecEndPos,0xA70 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
		};
	};
	class CBeamSpotlight
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nHaloIndex,0x9D8 );
			DEFINE_MEMBER_N(char, m_bSpotlightOn,0x9E4 );
			DEFINE_MEMBER_N(char, m_bHasDynamicLight,0x9E5 );
			DEFINE_MEMBER_N(float, m_flSpotlightMaxLength,0x9E8 );
			DEFINE_MEMBER_N(float, m_flSpotlightGoalWidth,0x9EC );
			DEFINE_MEMBER_N(float, m_flHDRColorScale,0x9F0 );
			DEFINE_MEMBER_N(int, m_nRotationAxis,0x9DC );
			DEFINE_MEMBER_N(float, m_flRotationSpeed,0x9E0 );
		};
	};
	class CBoneFollower
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_modelIndex,0x9D8 );
			DEFINE_MEMBER_N(int, m_solidIndex,0x9DC );
		};
	};
	class CBRC4Target
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bBrokenOpen,0x2994 );
			DEFINE_MEMBER_N(float, m_flRadius,0x2998 );
		};
	};
	class CBreachChargeProjectile
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bShouldExplode,0x29E0 );
			DEFINE_MEMBER_N(int, m_weaponThatThrewMe,0x29E4 );
			DEFINE_MEMBER_N(int, m_nParentBoneIndex,0x29E8 );
			DEFINE_MEMBER_N(Vector3, m_vecParentBonePos,0x29EC );
		};
	};
	class CBreakableProp
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_qPreferredPlayerCarryAngles,0x2994 );
			DEFINE_MEMBER_N(char, m_bClientPhysics,0x29A0 );
		};
	};
	class CBreakableSurface
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nNumWide,0x9DC );
			DEFINE_MEMBER_N(int, m_nNumHigh,0x9E0 );
			DEFINE_MEMBER_N(float, m_flPanelWidth,0x9E4 );
			DEFINE_MEMBER_N(float, m_flPanelHeight,0x9E8 );
			DEFINE_MEMBER_N(int, m_vNormal,0x9EC );
			DEFINE_MEMBER_N(int, m_vCorner,0x9F8 );
			DEFINE_MEMBER_N(char, m_bIsBroken,0xA04 );
			DEFINE_MEMBER_N(int, m_nSurfaceType,0xA08 );
			DEFINE_MEMBER_N(int, m_RawPanelBitVec,0xA2C );
		};
	};
	class CBumpMineProjectile
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nParentBoneIndex,0x29E4 );
			DEFINE_MEMBER_N(Vector3, m_vecParentBonePos,0x29E8 );
			DEFINE_MEMBER_N(char, m_bArmed,0x29F4 );
		};
	};
	class CC4
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bStartedArming,0x3400 );
			DEFINE_MEMBER_N(char, m_bBombPlacedAnimation,0x3408 );
			DEFINE_MEMBER_N(int, m_fArmedTime,0x3404 );
			DEFINE_MEMBER_N(char, m_bShowC4LED,0x3409 );
			DEFINE_MEMBER_N(char, m_bIsPlantingViaUse,0x340A );
		};
	};
	class CCascadeLight
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_shadowDirection,0x9D8 );
			DEFINE_MEMBER_N(int, m_envLightShadowDirection,0x9E4 );
			DEFINE_MEMBER_N(char, m_bEnabled,0x9F0 );
			DEFINE_MEMBER_N(char, m_bUseLightEnvAngles,0x9F1 );
			DEFINE_MEMBER_N(int, m_LightColor,0x9F2 );
			DEFINE_MEMBER_N(int, m_LightColorScale,0x9F8 );
			DEFINE_MEMBER_N(float, m_flMaxShadowDist,0x9FC );
		};
	};
	class CChicken
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_jumpedThisFrame,0x29F8 );
			DEFINE_MEMBER_N(int, m_leader,0x29FC );
		};
	};
	class CColorCorrection
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x9D8 );
			DEFINE_MEMBER_N(int, m_minFalloff,0x9E4 );
			DEFINE_MEMBER_N(int, m_maxFalloff,0x9E8 );
			DEFINE_MEMBER_N(float, m_flCurWeight,0x9F8 );
			DEFINE_MEMBER_N(float, m_flMaxWeight,0x9F4 );
			DEFINE_MEMBER_N(float, m_flFadeInDuration,0x9EC );
			DEFINE_MEMBER_N(float, m_flFadeOutDuration,0x9F0 );
			DEFINE_MEMBER_N(int, m_netLookupFilename,0x9FC );
			DEFINE_MEMBER_N(char, m_bEnabled,0xB00 );
			DEFINE_MEMBER_N(char, m_bMaster,0xB01 );
			DEFINE_MEMBER_N(char, m_bClientSide,0xB02 );
			DEFINE_MEMBER_N(char, m_bExclusive,0xB03 );
		};
	};
	class CColorCorrectionVolume
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bEnabled,0xA20 );
			DEFINE_MEMBER_N(int, m_MaxWeight,0xA24 );
			DEFINE_MEMBER_N(int, m_FadeDuration,0xA28 );
			DEFINE_MEMBER_N(int, m_Weight,0xA2C );
			DEFINE_MEMBER_N(int, m_lookupFilename,0xA30 );
		};
	};
	class CCSPlayer
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_angEyeAngles[0],0x117D0 );
			DEFINE_MEMBER_N(int, m_angEyeAngles[1],0x117D4 );
			DEFINE_MEMBER_N(int, m_iAddonBits,0x103C4 );
			DEFINE_MEMBER_N(int, m_iPrimaryAddon,0x103C8 );
			DEFINE_MEMBER_N(int, m_iSecondaryAddon,0x103CC );
			DEFINE_MEMBER_N(int, m_iThrowGrenadeCounter,0x99B8 );
			DEFINE_MEMBER_N(char, m_bWaitForNoAttack,0x99BC );
			DEFINE_MEMBER_N(char, m_bIsRespawningForDMBonus,0x99BD );
			DEFINE_MEMBER_N(int, m_iPlayerState,0x9978 );
			DEFINE_MEMBER_N(int, m_iAccount,0x117B8 );
			DEFINE_MEMBER_N(int, m_iStartAccount,0x103F4 );
			DEFINE_MEMBER_N(int, m_totalHitsOnServer,0x103F8 );
			DEFINE_MEMBER_N(char, m_bInBombZone,0x99B4 );
			DEFINE_MEMBER_N(char, m_bInBuyZone,0x99B5 );
			DEFINE_MEMBER_N(char, m_bInNoDefuseArea,0x99B6 );
			DEFINE_MEMBER_N(char, m_bKilledByTaser,0x99CD );
			DEFINE_MEMBER_N(int, m_iMoveState,0x99D0 );
			DEFINE_MEMBER_N(int, m_iClass,0x117C8 );
			DEFINE_MEMBER_N(int, m_ArmorValue,0x117CC );
			DEFINE_MEMBER_N(int, m_angEyeAngles,0x117D0 );
			DEFINE_MEMBER_N(char, m_bHasDefuser,0x117DC );
			DEFINE_MEMBER_N(char, m_bNightVisionOn,0x103E9 );
			DEFINE_MEMBER_N(char, m_bHasNightVision,0x103EA );
			DEFINE_MEMBER_N(char, m_bInHostageRescueZone,0x117DD );
			DEFINE_MEMBER_N(char, m_bIsDefusing,0x997C );
			DEFINE_MEMBER_N(char, m_bIsGrabbingHostage,0x997D );
			DEFINE_MEMBER_N(int, m_iBlockingUseActionInProgress,0x9980 );
			DEFINE_MEMBER_N(char, m_bIsScoped,0x9974 );
			DEFINE_MEMBER_N(char, m_bIsWalking,0x9975 );
			DEFINE_MEMBER_N(int, m_nIsAutoMounting,0x9AE4 );
			DEFINE_MEMBER_N(char, m_bResumeZoom,0x9976 );
			DEFINE_MEMBER_N(int, m_fImmuneToGunGameDamageTime,0x9988 );
			DEFINE_MEMBER_N(char, m_bGunGameImmunity,0x9990 );
			DEFINE_MEMBER_N(char, m_bHasMovedSinceSpawn,0x9991 );
			DEFINE_MEMBER_N(char, m_bMadeFinalGunGameProgressiveKill,0x9992 );
			DEFINE_MEMBER_N(int, m_iGunGameProgressiveWeaponIndex,0x9994 );
			DEFINE_MEMBER_N(int, m_iNumGunGameTRKillPoints,0x9998 );
			DEFINE_MEMBER_N(int, m_iNumGunGameKillsWithCurrentWeapon,0x999C );
			DEFINE_MEMBER_N(int, m_iNumRoundKills,0x99A0 );
			DEFINE_MEMBER_N(int, m_fMolotovUseTime,0x99AC );
			DEFINE_MEMBER_N(int, m_fMolotovDamageTime,0x99B0 );
			DEFINE_MEMBER_N(std::string, m_szArmsModel,0x99D7 );
			DEFINE_MEMBER_N(int, m_hCarriedHostage,0x10448 );
			DEFINE_MEMBER_N(int, m_hCarriedHostageProp,0x1044C );
			DEFINE_MEMBER_N(char, m_bIsRescuing,0x9984 );
			DEFINE_MEMBER_N(float, m_flGroundAccelLinearFracLastTime,0x103F0 );
			DEFINE_MEMBER_N(char, m_bCanMoveDuringFreezePeriod,0x99D4 );
			DEFINE_MEMBER_N(int, m_isCurrentGunGameLeader,0x99D5 );
			DEFINE_MEMBER_N(int, m_isCurrentGunGameTeamLeader,0x99D6 );
			DEFINE_MEMBER_N(float, m_flGuardianTooFarDistFrac,0x99C0 );
			DEFINE_MEMBER_N(float, m_flDetectedByEnemySensorTime,0x99C4 );
			DEFINE_MEMBER_N(char, m_bIsPlayerGhost,0x9AE1 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Kills,0x104B4 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Damage,0x1052C );
			DEFINE_MEMBER_N(int, m_iMatchStats_EquipmentValue,0x105A4 );
			DEFINE_MEMBER_N(int, m_iMatchStats_MoneySaved,0x1061C );
			DEFINE_MEMBER_N(int, m_iMatchStats_KillReward,0x10694 );
			DEFINE_MEMBER_N(int, m_iMatchStats_LiveTime,0x1070C );
			DEFINE_MEMBER_N(int, m_iMatchStats_Deaths,0x10784 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Assists,0x107FC );
			DEFINE_MEMBER_N(int, m_iMatchStats_HeadShotKills,0x10874 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Objective,0x108EC );
			DEFINE_MEMBER_N(int, m_iMatchStats_CashEarned,0x10964 );
			DEFINE_MEMBER_N(int, m_iMatchStats_UtilityDamage,0x109DC );
			DEFINE_MEMBER_N(int, m_iMatchStats_EnemiesFlashed,0x10A54 );
			DEFINE_MEMBER_N(int, m_rank,0x1178C );
			DEFINE_MEMBER_N(int, m_passiveItems,0x117A4 );
			DEFINE_MEMBER_N(char, m_bHasParachute,0x117A4 );
			DEFINE_MEMBER_N(int, m_unMusicID,0x117A8 );
			DEFINE_MEMBER_N(char, m_bHasHelmet,0x117C0 );
			DEFINE_MEMBER_N(char, m_bHasHeavyArmor,0x117C1 );
			DEFINE_MEMBER_N(int, m_nHeavyAssaultSuitCooldownRemaining,0x117C4 );
			DEFINE_MEMBER_N(float, m_flFlashDuration,0x10470 );
			DEFINE_MEMBER_N(float, m_flFlashMaxAlpha,0x1046C );
			DEFINE_MEMBER_N(int, m_iProgressBarDuration,0x103D0 );
			DEFINE_MEMBER_N(float, m_flProgressBarStartTime,0x103D4 );
			DEFINE_MEMBER_N(int, m_hRagdoll,0x1043C );
			DEFINE_MEMBER_N(int, m_hPlayerPing,0x10440 );
			DEFINE_MEMBER_N(int, m_cycleLatch,0x118E0 );
			DEFINE_MEMBER_N(int, m_unCurrentEquipmentValue,0x11784 );
			DEFINE_MEMBER_N(int, m_unRoundStartEquipmentValue,0x11786 );
			DEFINE_MEMBER_N(int, m_unFreezetimeEndEquipmentValue,0x11788 );
			DEFINE_MEMBER_N(char, m_bIsControllingBot,0x11A4D );
			DEFINE_MEMBER_N(char, m_bHasControlledBotThisRound,0x11A5C );
			DEFINE_MEMBER_N(char, m_bCanControlObservedBot,0x11A4E );
			DEFINE_MEMBER_N(int, m_iControlledBotEntIndex,0x11A50 );
			DEFINE_MEMBER_N(Vector3, m_vecAutomoveTargetEnd,0x9AF4 );
			DEFINE_MEMBER_N(float, m_flAutoMoveStartTime,0x9B04 );
			DEFINE_MEMBER_N(float, m_flAutoMoveTargetTime,0x9B08 );
			DEFINE_MEMBER_N(char, m_bIsAssassinationTarget,0x11A4C );
			DEFINE_MEMBER_N(char, m_bHud_MiniScoreHidden,0x117FE );
			DEFINE_MEMBER_N(char, m_bHud_RadarHidden,0x117FF );
			DEFINE_MEMBER_N(int, m_nLastKillerIndex,0x11800 );
			DEFINE_MEMBER_N(int, m_nLastConcurrentKilled,0x11804 );
			DEFINE_MEMBER_N(int, m_nDeathCamMusic,0x11808 );
			DEFINE_MEMBER_N(char, m_bIsHoldingLookAtWeapon,0x11975 );
			DEFINE_MEMBER_N(char, m_bIsLookingAtWeapon,0x11974 );
			DEFINE_MEMBER_N(int, m_iNumRoundKillsHeadshots,0x99A4 );
			DEFINE_MEMBER_N(int, m_unTotalRoundDamageDealt,0x99A8 );
			DEFINE_MEMBER_N(float, m_flLowerBodyYawTarget,0x9ADC );
			DEFINE_MEMBER_N(char, m_bStrafing,0x9AE0 );
			DEFINE_MEMBER_N(float, m_flThirdpersonRecoil,0x119EC );
			DEFINE_MEMBER_N(char, m_bHideTargetID,0x119F0 );
			DEFINE_MEMBER_N(char, m_bIsSpawnRappelling,0x103FD );
			DEFINE_MEMBER_N(Vector3, m_vecSpawnRappellingRopeOrigin,0x10400 );
			DEFINE_MEMBER_N(int, m_nSurvivalTeam,0x10410 );
			DEFINE_MEMBER_N(int, m_hSurvivalAssassinationTarget,0x10414 );
			DEFINE_MEMBER_N(float, m_flHealthShotBoostExpirationTime,0x10418 );
			DEFINE_MEMBER_N(float, m_flLastExoJumpTime,0x9B0C );
			DEFINE_MEMBER_N(Vector3, m_vecPlayerPatchEconIndices,0x119C4 );
		};
	};
	class CCSPlayerResource
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iPlayerC4,0x165C );
			DEFINE_MEMBER_N(int, m_iPlayerVIP,0x1660 );
			DEFINE_MEMBER_N(char, m_bHostageAlive,0x167C );
			DEFINE_MEMBER_N(int, m_isHostageFollowingSomeone,0x1688 );
			DEFINE_MEMBER_N(int, m_iHostageEntityIDs,0x1694 );
			DEFINE_MEMBER_N(char, m_bombsiteCenterA,0x1664 );
			DEFINE_MEMBER_N(char, m_bombsiteCenterB,0x1670 );
			DEFINE_MEMBER_N(int, m_hostageRescueX,0x16C4 );
			DEFINE_MEMBER_N(int, m_hostageRescueY,0x16D4 );
			DEFINE_MEMBER_N(int, m_hostageRescueZ,0x16E4 );
			DEFINE_MEMBER_N(int, m_iMVPs,0x16F4 );
			DEFINE_MEMBER_N(int, m_iArmor,0x187C );
			DEFINE_MEMBER_N(char, m_bHasHelmet,0x1839 );
			DEFINE_MEMBER_N(char, m_bHasDefuser,0x17F8 );
			DEFINE_MEMBER_N(int, m_iScore,0x1980 );
			DEFINE_MEMBER_N(int, m_iCompetitiveRanking,0x1A84 );
			DEFINE_MEMBER_N(int, m_iCompetitiveWins,0x1B88 );
			DEFINE_MEMBER_N(int, m_iCompetitiveRankType,0x1C8C );
			DEFINE_MEMBER_N(int, m_iCompTeammateColor,0x1CD0 );
			DEFINE_MEMBER_N(int, m_iLifetimeStart,0x1DD4 );
			DEFINE_MEMBER_N(int, m_iLifetimeEnd,0x1ED8 );
			DEFINE_MEMBER_N(char, m_bControllingBot,0x1FDC );
			DEFINE_MEMBER_N(int, m_iControlledPlayer,0x2020 );
			DEFINE_MEMBER_N(int, m_iControlledByPlayer,0x2124 );
			DEFINE_MEMBER_N(int, m_iBotDifficulty,0x42A8 );
			DEFINE_MEMBER_N(std::string, m_szClan,0x43AC );
			DEFINE_MEMBER_N(int, m_nCharacterDefIndex,0x47BC );
			DEFINE_MEMBER_N(int, m_iTotalCashSpent,0x48C0 );
			DEFINE_MEMBER_N(int, m_iGunGameLevel,0x49C4 );
			DEFINE_MEMBER_N(int, m_iCashSpentThisRound,0x4AC8 );
			DEFINE_MEMBER_N(int, m_nEndMatchNextMapVotes,0x6A88 );
			DEFINE_MEMBER_N(char, m_bEndMatchNextMapAllVoted,0x6B8C );
			DEFINE_MEMBER_N(int, m_nActiveCoinRank,0x4BCC );
			DEFINE_MEMBER_N(int, m_nMusicID,0x4CD0 );
			DEFINE_MEMBER_N(int, m_nPersonaDataPublicLevel,0x4DD4 );
			DEFINE_MEMBER_N(int, m_nPersonaDataPublicCommendsLeader,0x4ED8 );
			DEFINE_MEMBER_N(int, m_nPersonaDataPublicCommendsTeacher,0x4FDC );
			DEFINE_MEMBER_N(int, m_nPersonaDataPublicCommendsFriendly,0x50E0 );
			DEFINE_MEMBER_N(char, m_bHasCommunicationAbuseMute,0x51E4 );
			DEFINE_MEMBER_N(std::string, m_szCrosshairCodes,0x5225 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Kills_Total,0x5B08 );
			DEFINE_MEMBER_N(int, m_iMatchStats_5k_Total,0x601C );
			DEFINE_MEMBER_N(int, m_iMatchStats_4k_Total,0x5F18 );
			DEFINE_MEMBER_N(int, m_iMatchStats_3k_Total,0x5E14 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Damage_Total,0x6120 );
			DEFINE_MEMBER_N(int, m_iMatchStats_EquipmentValue_Total,0x6224 );
			DEFINE_MEMBER_N(int, m_iMatchStats_KillReward_Total,0x6328 );
			DEFINE_MEMBER_N(int, m_iMatchStats_LiveTime_Total,0x642C );
			DEFINE_MEMBER_N(int, m_iMatchStats_Deaths_Total,0x5D10 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Assists_Total,0x5C0C );
			DEFINE_MEMBER_N(int, m_iMatchStats_HeadShotKills_Total,0x6530 );
			DEFINE_MEMBER_N(int, m_iMatchStats_Objective_Total,0x6634 );
			DEFINE_MEMBER_N(int, m_iMatchStats_CashEarned_Total,0x6738 );
			DEFINE_MEMBER_N(int, m_iMatchStats_UtilityDamage_Total,0x683C );
			DEFINE_MEMBER_N(int, m_iMatchStats_EnemiesFlashed_Total,0x6940 );
		};
	};
	class CCSRagdoll
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(Vector3, m_vecRagdollOrigin,0x2A1C );
			DEFINE_MEMBER_N(int, m_hPlayer,0x2A00 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(int, m_nForceBone,0x268C );
			DEFINE_MEMBER_N(Vector3, m_vecForce,0x2680 );
			DEFINE_MEMBER_N(Vector3, m_vecRagdollVelocity,0x2A10 );
			DEFINE_MEMBER_N(int, m_iDeathPose,0x2A28 );
			DEFINE_MEMBER_N(int, m_iDeathFrame,0x2A2C );
			DEFINE_MEMBER_N(int, m_iTeamNum,0xF4 );
			DEFINE_MEMBER_N(char, m_bClientSideAnimation,0x28A0 );
			DEFINE_MEMBER_N(float, m_flDeathYaw,0x2A30 );
			DEFINE_MEMBER_N(float, m_flAbsYaw,0x2A34 );
			DEFINE_MEMBER_N(char, m_bDiedAirborne,0x2A38 );
		};
	};
	class CDangerZone
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecDangerZoneOriginStartedAt,0x9D8 );
			DEFINE_MEMBER_N(float, m_flBombLaunchTime,0x9E4 );
			DEFINE_MEMBER_N(float, m_flExtraRadius,0x9E8 );
			DEFINE_MEMBER_N(float, m_flExtraRadiusStartTime,0x9EC );
			DEFINE_MEMBER_N(float, m_flExtraRadiusTotalLerpTime,0x9F0 );
			DEFINE_MEMBER_N(int, m_nDropOrder,0x9F4 );
			DEFINE_MEMBER_N(int, m_iWave,0x9F8 );
		};
	};
	class CDangerZoneController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bDangerZoneControllerEnabled,0x9D8 );
			DEFINE_MEMBER_N(char, m_bMissionControlledExplosions,0x9D9 );
			DEFINE_MEMBER_N(float, m_flStartTime,0x9F4 );
			DEFINE_MEMBER_N(float, m_flFinalExpansionTime,0x9F8 );
			DEFINE_MEMBER_N(Vector3, m_vecEndGameCircleStart,0x9DC );
			DEFINE_MEMBER_N(Vector3, m_vecEndGameCircleEnd,0x9E8 );
			DEFINE_MEMBER_N(int, m_DangerZones,0x9FC );
			DEFINE_MEMBER_N(float, m_flWaveEndTimes,0xAA4 );
			DEFINE_MEMBER_N(int, m_hTheFinalZone,0xAB8 );
		};
	};
	class CDrone
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hMoveToThisEntity,0x29E8 );
			DEFINE_MEMBER_N(int, m_hDeliveryCargo,0x29EC );
			DEFINE_MEMBER_N(char, m_bPilotTakeoverAllowed,0x29F0 );
			DEFINE_MEMBER_N(int, m_hPotentialCargo,0x29F4 );
			DEFINE_MEMBER_N(int, m_hCurrentPilot,0x29F8 );
			DEFINE_MEMBER_N(Vector3, m_vecTagPositions[0],0x29FC );
			DEFINE_MEMBER_N(Vector3, m_vecTagIncrements[0],0x2B1C );
		};
	};
	class CDronegun
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecAttentionTarget,0x2990 );
			DEFINE_MEMBER_N(Vector3, m_vecTargetOffset,0x299C );
			DEFINE_MEMBER_N(int, m_iHealth,0x100 );
			DEFINE_MEMBER_N(char, m_bHasTarget,0x29A8 );
		};
	};
	class CDynamicLight
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_Flags,0x9D8 );
			DEFINE_MEMBER_N(int, m_LightStyle,0x9D9 );
			DEFINE_MEMBER_N(int, m_Radius,0x9DC );
			DEFINE_MEMBER_N(int, m_Exponent,0x9E0 );
			DEFINE_MEMBER_N(int, m_InnerAngle,0x9E4 );
			DEFINE_MEMBER_N(int, m_OuterAngle,0x9E8 );
			DEFINE_MEMBER_N(int, m_SpotRadius,0x9EC );
		};
	};
	class CDynamicProp
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bUseHitboxesForRenderBox,0x29B4 );
			DEFINE_MEMBER_N(float, m_flGlowMaxDist,0x29D4 );
			DEFINE_MEMBER_N(char, m_bShouldGlow,0x29D8 );
			DEFINE_MEMBER_N(int, m_clrGlow,0x29D9 );
			DEFINE_MEMBER_N(int, m_nGlowStyle,0x29E0 );
		};
	};
	class CEconEntity
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_AttributeManager,0x2D90 );
			DEFINE_MEMBER_N(int, m_OriginalOwnerXuidLow,0x31D0 );
			DEFINE_MEMBER_N(int, m_OriginalOwnerXuidHigh,0x31D4 );
			DEFINE_MEMBER_N(int, m_nFallbackPaintKit,0x31D8 );
			DEFINE_MEMBER_N(int, m_nFallbackSeed,0x31DC );
			DEFINE_MEMBER_N(float, m_flFallbackWear,0x31E0 );
			DEFINE_MEMBER_N(int, m_nFallbackStatTrak,0x31E4 );
		};
	};
	class CEmbers
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nDensity,0x9D8 );
			DEFINE_MEMBER_N(int, m_nLifetime,0x9DC );
			DEFINE_MEMBER_N(int, m_nSpeed,0x9E0 );
			DEFINE_MEMBER_N(char, m_bEmit,0x9E4 );
		};
	};
	class CEntityDissolve
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flStartTime,0x9DC );
			DEFINE_MEMBER_N(float, m_flFadeOutStart,0x9E0 );
			DEFINE_MEMBER_N(float, m_flFadeOutLength,0x9E4 );
			DEFINE_MEMBER_N(float, m_flFadeOutModelStart,0x9E8 );
			DEFINE_MEMBER_N(float, m_flFadeOutModelLength,0x9EC );
			DEFINE_MEMBER_N(float, m_flFadeInStart,0x9F0 );
			DEFINE_MEMBER_N(float, m_flFadeInLength,0x9F4 );
			DEFINE_MEMBER_N(int, m_nDissolveType,0x9F8 );
			DEFINE_MEMBER_N(int, m_vDissolverOrigin,0xA00 );
			DEFINE_MEMBER_N(int, m_nMagnitude,0xA0C );
		};
	};
	class CEntityFlame
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hEntAttached,0x9D8 );
			DEFINE_MEMBER_N(char, m_bCheapEffect,0x9EC );
		};
	};
	class CEntityFreezing
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_vFreezingOrigin,0x9D8 );
			DEFINE_MEMBER_N(float, m_flFrozenPerHitbox,0x9E4 );
			DEFINE_MEMBER_N(float, m_flFrozen,0xAAC );
			DEFINE_MEMBER_N(char, m_bFinishFreezing,0xAB0 );
		};
	};
	class CEntityParticleTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iMaterialName,0xAC0 );
			DEFINE_MEMBER_N(int, m_Info,0xAC4 );
			DEFINE_MEMBER_N(int, m_hConstraintEntity,0xAD8 );
		};
	};
	class CEnvAmbientLight
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecColor,0xB00 );
		};
	};
	class CEnvDetailController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flFadeStartDist,0x9D8 );
			DEFINE_MEMBER_N(float, m_flFadeEndDist,0x9DC );
		};
	};
	class CEnvDOFController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bDOFEnabled,0x9D8 );
			DEFINE_MEMBER_N(float, m_flNearBlurDepth,0x9DC );
			DEFINE_MEMBER_N(float, m_flNearFocusDepth,0x9E0 );
			DEFINE_MEMBER_N(float, m_flFarFocusDepth,0x9E4 );
			DEFINE_MEMBER_N(float, m_flFarBlurDepth,0x9E8 );
			DEFINE_MEMBER_N(float, m_flNearBlurRadius,0x9EC );
			DEFINE_MEMBER_N(float, m_flFarBlurRadius,0x9F0 );
		};
	};
	class CEnvGasCanister
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flFlightSpeed,0x2A04 );
			DEFINE_MEMBER_N(float, m_flLaunchTime,0x2A08 );
			DEFINE_MEMBER_N(Vector3, m_vecParabolaDirection,0x2A1C );
			DEFINE_MEMBER_N(float, m_flFlightTime,0x2A00 );
			DEFINE_MEMBER_N(float, m_flWorldEnterTime,0x2A28 );
			DEFINE_MEMBER_N(float, m_flInitialZSpeed,0x2A0C );
			DEFINE_MEMBER_N(float, m_flZAcceleration,0x2A10 );
			DEFINE_MEMBER_N(float, m_flHorizSpeed,0x2A14 );
			DEFINE_MEMBER_N(char, m_bLaunchedFromWithinWorld,0x2A18 );
			DEFINE_MEMBER_N(Vector3, m_vecImpactPosition,0x29C4 );
			DEFINE_MEMBER_N(Vector3, m_vecStartPosition,0x29D0 );
			DEFINE_MEMBER_N(Vector3, m_vecEnterWorldPosition,0x29DC );
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x29E8 );
			DEFINE_MEMBER_N(Vector3, m_vecStartAngles,0x29F4 );
			DEFINE_MEMBER_N(Vector3, m_vecSkyboxOrigin,0x2A2C );
			DEFINE_MEMBER_N(float, m_flSkyboxScale,0x2A38 );
			DEFINE_MEMBER_N(char, m_bInSkybox,0x2A3C );
			DEFINE_MEMBER_N(char, m_bDoImpactEffects,0x2A3D );
			DEFINE_MEMBER_N(char, m_bLanded,0x2990 );
			DEFINE_MEMBER_N(int, m_hSkyboxCopy,0x29B8 );
			DEFINE_MEMBER_N(int, m_nMyZoneIndex,0x2A40 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin[2],0x140 );
		};
	};
	class CEnvParticleScript
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flSequenceScale,0x2A74 );
		};
	};
	class CEnvProjectedTexture
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hTargetEntity,0x9DC );
			DEFINE_MEMBER_N(char, m_bState,0x9E0 );
			DEFINE_MEMBER_N(char, m_bAlwaysUpdate,0x9E1 );
			DEFINE_MEMBER_N(float, m_flLightFOV,0x9E4 );
			DEFINE_MEMBER_N(char, m_bEnableShadows,0x9E8 );
			DEFINE_MEMBER_N(char, m_bSimpleProjection,0x9E9 );
			DEFINE_MEMBER_N(char, m_bLightOnlyTarget,0x9EA );
			DEFINE_MEMBER_N(char, m_bLightWorld,0x9EB );
			DEFINE_MEMBER_N(char, m_bCameraSpace,0x9EC );
			DEFINE_MEMBER_N(float, m_flBrightnessScale,0x9F0 );
			DEFINE_MEMBER_N(int, m_LightColor,0x9F4 );
			DEFINE_MEMBER_N(float, m_flColorTransitionTime,0xA08 );
			DEFINE_MEMBER_N(float, m_flAmbient,0xA0C );
			DEFINE_MEMBER_N(int, m_SpotlightTextureName,0xA18 );
			DEFINE_MEMBER_N(int, m_nSpotlightTextureFrame,0xB24 );
			DEFINE_MEMBER_N(float, m_flNearZ,0xA10 );
			DEFINE_MEMBER_N(float, m_flFarZ,0xA14 );
			DEFINE_MEMBER_N(int, m_nShadowQuality,0xB28 );
			DEFINE_MEMBER_N(float, m_flProjectionSize,0xB38 );
			DEFINE_MEMBER_N(float, m_flRotation,0xB3C );
			DEFINE_MEMBER_N(int, m_iStyle,0xB2C );
		};
	};
	class CEnvQuadraticBeam
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_targetPosition,0x9D8 );
			DEFINE_MEMBER_N(int, m_controlPosition,0x9E4 );
			DEFINE_MEMBER_N(int, m_scrollRate,0x9F0 );
			DEFINE_MEMBER_N(float, m_flWidth,0x9F4 );
		};
	};
	class CEnvScreenEffect
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flDuration,0x9D8 );
			DEFINE_MEMBER_N(int, m_nType,0x9DC );
		};
	};
	class CEnvScreenOverlay
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iszOverlayNames[0],0x9D8 );
			DEFINE_MEMBER_N(float, m_flOverlayTimes[0],0x13D0 );
			DEFINE_MEMBER_N(float, m_flStartTime,0x13F8 );
			DEFINE_MEMBER_N(int, m_iDesiredOverlay,0x13FC );
			DEFINE_MEMBER_N(char, m_bIsActive,0x1400 );
		};
	};
	class CEnvTonemapController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bUseCustomAutoExposureMin,0x9D8 );
			DEFINE_MEMBER_N(char, m_bUseCustomAutoExposureMax,0x9D9 );
			DEFINE_MEMBER_N(char, m_bUseCustomBloomScale,0x9DA );
			DEFINE_MEMBER_N(float, m_flCustomAutoExposureMin,0x9DC );
			DEFINE_MEMBER_N(float, m_flCustomAutoExposureMax,0x9E0 );
			DEFINE_MEMBER_N(float, m_flCustomBloomScale,0x9E4 );
			DEFINE_MEMBER_N(float, m_flCustomBloomScaleMinimum,0x9E8 );
			DEFINE_MEMBER_N(float, m_flBloomExponent,0x9EC );
			DEFINE_MEMBER_N(float, m_flBloomSaturation,0x9F0 );
			DEFINE_MEMBER_N(float, m_flTonemapPercentTarget,0x9F4 );
			DEFINE_MEMBER_N(float, m_flTonemapPercentBrightPixels,0x9F8 );
			DEFINE_MEMBER_N(float, m_flTonemapMinAvgLum,0x9FC );
			DEFINE_MEMBER_N(float, m_flTonemapRate,0xA00 );
		};
	};
	class CEnvWind
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_EnvWindShared,0x9D8 );
		};
	};
	class CFEPlayerDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nUniqueID,0x9D8 );
			DEFINE_MEMBER_N(int, m_unAccountID,0x9DC );
			DEFINE_MEMBER_N(int, m_unTraceID,0x9E0 );
			DEFINE_MEMBER_N(int, m_rtGcTime,0x9E4 );
			DEFINE_MEMBER_N(Vector3, m_vecEndPos,0x9E8 );
			DEFINE_MEMBER_N(Vector3, m_vecStart,0x9F4 );
			DEFINE_MEMBER_N(Vector3, m_vecRight,0xA00 );
			DEFINE_MEMBER_N(Vector3, m_vecNormal,0xA0C );
			DEFINE_MEMBER_N(int, m_nEntity,0xA1C );
			DEFINE_MEMBER_N(int, m_nPlayer,0xA18 );
			DEFINE_MEMBER_N(int, m_nHitbox,0xA20 );
			DEFINE_MEMBER_N(int, m_nTintID,0xA24 );
			DEFINE_MEMBER_N(float, m_flCreationTime,0xA28 );
			DEFINE_MEMBER_N(int, m_nVersion,0xA2C );
			DEFINE_MEMBER_N(int, m_ubSignature,0xA2D );
		};
	};
	class CFireSmoke
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flStartScale,0x9D8 );
			DEFINE_MEMBER_N(float, m_flScale,0x9DC );
			DEFINE_MEMBER_N(float, m_flScaleTime,0x9E0 );
			DEFINE_MEMBER_N(int, m_nFlags,0x9E4 );
			DEFINE_MEMBER_N(int, m_nFlameModelIndex,0x9E8 );
			DEFINE_MEMBER_N(int, m_nFlameFromAboveModelIndex,0x9EC );
		};
	};
	class CFireTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nAttachment,0xAC4 );
			DEFINE_MEMBER_N(float, m_flLifetime,0xAC8 );
		};
	};
	class CFish
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_poolOrigin,0x29F0 );
			DEFINE_MEMBER_N(int, m_x,0x29D8 );
			DEFINE_MEMBER_N(int, m_y,0x29DC );
			DEFINE_MEMBER_N(int, m_z,0x29E0 );
			DEFINE_MEMBER_N(int, m_angle,0x29E8 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(int, m_lifeState,0x25F );
			DEFINE_MEMBER_N(int, m_waterLevel,0x29FC );
		};
	};
	class CFists
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bPlayingUninterruptableAct,0x33E0 );
		};
	};
	class CFogController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_fogenable,0xA1C );
			DEFINE_MEMBER_N(int, m_fogblend,0xA1D );
			DEFINE_MEMBER_N(int, m_fogdirPrimary,0x9DC );
			DEFINE_MEMBER_N(int, m_fogcolorPrimary,0x9E8 );
			DEFINE_MEMBER_N(int, m_fogcolorSecondary,0x9EC );
			DEFINE_MEMBER_N(int, m_fogstart,0x9F8 );
			DEFINE_MEMBER_N(int, m_fogend,0x9FC );
			DEFINE_MEMBER_N(int, m_fogfarz,0xA00 );
			DEFINE_MEMBER_N(int, m_fogmaxdensity,0xA04 );
			DEFINE_MEMBER_N(int, m_fogcolorPrimaryLerpTo,0x9F0 );
			DEFINE_MEMBER_N(int, m_fogcolorSecondaryLerpTo,0x9F4 );
			DEFINE_MEMBER_N(int, m_fogstartLerpTo,0xA08 );
			DEFINE_MEMBER_N(int, m_fogendLerpTo,0xA0C );
			DEFINE_MEMBER_N(int, m_fogmaxdensityLerpTo,0xA10 );
			DEFINE_MEMBER_N(int, m_foglerptime,0xA14 );
			DEFINE_MEMBER_N(int, m_fogduration,0xA18 );
			DEFINE_MEMBER_N(int, m_fogHDRColorScale,0xA24 );
			DEFINE_MEMBER_N(int, m_fogZoomFogScale,0xA20 );
		};
	};
	class CFootstepControl
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_source,0xA10 );
			DEFINE_MEMBER_N(int, m_destination,0xA20 );
		};
	};
	class CFunc_Dust
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_Color,0x9D8 );
			DEFINE_MEMBER_N(int, m_SpawnRate,0x9DC );
			DEFINE_MEMBER_N(float, m_flSizeMin,0x9E0 );
			DEFINE_MEMBER_N(float, m_flSizeMax,0x9E4 );
			DEFINE_MEMBER_N(int, m_LifetimeMin,0x9EC );
			DEFINE_MEMBER_N(int, m_LifetimeMax,0x9F0 );
			DEFINE_MEMBER_N(int, m_DustFlags,0xA00 );
			DEFINE_MEMBER_N(int, m_SpeedMax,0x9E8 );
			DEFINE_MEMBER_N(int, m_DistMax,0x9F4 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x258 );
			DEFINE_MEMBER_N(int, m_FallSpeed,0x9F8 );
			DEFINE_MEMBER_N(char, m_bAffectedByWind,0x9FC );
			DEFINE_MEMBER_N(int, m_Collision,0x320 );
		};
	};
	class CFunc_LOD
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nDisappearMinDist,0x9D8 );
			DEFINE_MEMBER_N(int, m_nDisappearMaxDist,0x9DC );
		};
	};
	class CFuncAreaPortalWindow
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flFadeStartDist,0x9D8 );
			DEFINE_MEMBER_N(float, m_flFadeDist,0x9DC );
			DEFINE_MEMBER_N(float, m_flTranslucencyLimit,0x9E0 );
			DEFINE_MEMBER_N(int, m_iBackgroundModelIndex,0x9E4 );
		};
	};
	class CFuncConveyor
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flConveyorSpeed,0x9D8 );
		};
	};
	class CFuncLadder
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecPlayerMountPositionTop,0x9F8 );
			DEFINE_MEMBER_N(Vector3, m_vecPlayerMountPositionBottom,0xA04 );
			DEFINE_MEMBER_N(Vector3, m_vecLadderDir,0x9D8 );
			DEFINE_MEMBER_N(char, m_bFakeLadder,0xA11 );
		};
	};
	class CFuncMoveLinear
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecVelocity,0x114 );
			DEFINE_MEMBER_N(int, m_fFlags,0x104 );
		};
	};
	class CFuncOccluder
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bActive,0x9DC );
			DEFINE_MEMBER_N(int, m_nOccluderIndex,0x9D8 );
		};
	};
	class CFuncRotating
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, m_angRotation[0],0x12C );
			DEFINE_MEMBER_N(int, m_angRotation[1],0x130 );
			DEFINE_MEMBER_N(int, m_angRotation[2],0x134 );
			DEFINE_MEMBER_N(float, m_flSimulationTime,0x268 );
		};
	};
	class CFuncSmokeVolume
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_Color1,0xAC4 );
			DEFINE_MEMBER_N(int, m_Color2,0xAC8 );
			DEFINE_MEMBER_N(int, m_MaterialName,0xACC );
			DEFINE_MEMBER_N(int, m_ParticleDrawWidth,0xBCC );
			DEFINE_MEMBER_N(int, m_ParticleSpacingDistance,0xBD0 );
			DEFINE_MEMBER_N(int, m_DensityRampSpeed,0xBD4 );
			DEFINE_MEMBER_N(int, m_RotationSpeed,0xBD8 );
			DEFINE_MEMBER_N(int, m_MovementSpeed,0xBDC );
			DEFINE_MEMBER_N(int, m_Density,0xBE0 );
			DEFINE_MEMBER_N(int, m_maxDrawDistance,0xBE4 );
			DEFINE_MEMBER_N(int, m_spawnflags,0xBE8 );
			DEFINE_MEMBER_N(int, m_Collision,0x320 );
		};
	};
	class CGrassBurn
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flGrassBurnClearTime,0x9D8 );
		};
	};
	class CHandleTest
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_Handle,0x9D8 );
			DEFINE_MEMBER_N(char, m_bSendHandle,0x9DC );
		};
	};
	class CHostage
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_isRescued,0x2F40 );
			DEFINE_MEMBER_N(int, m_jumpedThisFrame,0x2F41 );
			DEFINE_MEMBER_N(int, m_iHealth,0x100 );
			DEFINE_MEMBER_N(int, m_iMaxHealth,0x2F28 );
			DEFINE_MEMBER_N(int, m_lifeState,0x25F );
			DEFINE_MEMBER_N(int, m_fFlags,0x104 );
			DEFINE_MEMBER_N(int, m_nHostageState,0x2F44 );
			DEFINE_MEMBER_N(float, m_flRescueStartTime,0x2F48 );
			DEFINE_MEMBER_N(float, m_flGrabSuccessTime,0x2F4C );
			DEFINE_MEMBER_N(float, m_flDropStartTime,0x2F50 );
			DEFINE_MEMBER_N(int, m_vel,0x2F34 );
			DEFINE_MEMBER_N(int, m_leader,0x2F30 );
		};
	};
	class CInferno
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_fireXDelta,0x9E4 );
			DEFINE_MEMBER_N(int, m_fireYDelta,0xB74 );
			DEFINE_MEMBER_N(int, m_fireZDelta,0xD04 );
			DEFINE_MEMBER_N(char, m_bFireIsBurning,0xE94 );
			DEFINE_MEMBER_N(int, m_nFireEffectTickBegin,0x13B4 );
			DEFINE_MEMBER_N(int, m_fireCount,0x13A8 );
		};
	};
	class CInfoMapRegion
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flRadius,0x9D8 );
			DEFINE_MEMBER_N(std::string, m_szLocToken,0x9DC );
		};
	};
	class CInfoOverlayAccessor
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iTextureFrameIndex,0x98C );
			DEFINE_MEMBER_N(int, m_iOverlayID,0x9D8 );
		};
	};
	class CItem
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bShouldGlow,0x3240 );
		};
	};
	class CItemAssaultSuitUseable
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nArmorValue,0x3450 );
			DEFINE_MEMBER_N(char, m_bIsHeavyAssaultSuit,0x3454 );
		};
	};
	class CItemDogtags
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_OwningPlayer,0x3450 );
			DEFINE_MEMBER_N(int, m_KillingPlayer,0x3454 );
		};
	};
	class CLightGlow
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_clrRender,0x70 );
			DEFINE_MEMBER_N(int, m_nHorizontalSize,0x9D8 );
			DEFINE_MEMBER_N(int, m_nVerticalSize,0x9DC );
			DEFINE_MEMBER_N(int, m_nMinDist,0x9E0 );
			DEFINE_MEMBER_N(int, m_nMaxDist,0x9E4 );
			DEFINE_MEMBER_N(int, m_nOuterMaxDist,0x9E8 );
			DEFINE_MEMBER_N(int, m_spawnflags,0x9EC );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, m_angRotation,0x12C );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
			DEFINE_MEMBER_N(float, m_flGlowProxySize,0xAC4 );
		};
	};
	class CMapVetoPickController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nDraftType,0x9E8 );
			DEFINE_MEMBER_N(int, m_nTeamWinningCoinToss,0x9EC );
			DEFINE_MEMBER_N(int, m_nTeamWithFirstChoice,0x9F0 );
			DEFINE_MEMBER_N(int, m_nVoteMapIdsList,0xAF0 );
			DEFINE_MEMBER_N(int, m_nAccountIDs,0xB0C );
			DEFINE_MEMBER_N(int, m_nMapId0,0xC0C );
			DEFINE_MEMBER_N(int, m_nMapId1,0xD0C );
			DEFINE_MEMBER_N(int, m_nMapId2,0xE0C );
			DEFINE_MEMBER_N(int, m_nMapId3,0xF0C );
			DEFINE_MEMBER_N(int, m_nMapId4,0x100C );
			DEFINE_MEMBER_N(int, m_nMapId5,0x110C );
			DEFINE_MEMBER_N(int, m_nStartingSide0,0x120C );
			DEFINE_MEMBER_N(int, m_nCurrentPhase,0x130C );
			DEFINE_MEMBER_N(int, m_nPhaseStartTick,0x1310 );
			DEFINE_MEMBER_N(int, m_nPhaseDurationTicks,0x1314 );
		};
	};
	class CMaterialModifyControl
	{
	public:
		union
		{
			DEFINE_MEMBER_N(std::string, m_szMaterialName,0x9D8 );
			DEFINE_MEMBER_N(std::string, m_szMaterialVar,0xAD7 );
			DEFINE_MEMBER_N(std::string, m_szMaterialVarValue,0xBD6 );
			DEFINE_MEMBER_N(int, m_iFrameStart,0xCE0 );
			DEFINE_MEMBER_N(int, m_iFrameEnd,0xCE4 );
			DEFINE_MEMBER_N(char, m_bWrap,0xCE8 );
			DEFINE_MEMBER_N(float, m_flFramerate,0xCEC );
			DEFINE_MEMBER_N(char, m_bNewAnimCommandsSemaphore,0xCF0 );
			DEFINE_MEMBER_N(float, m_flFloatLerpStartValue,0xCF4 );
			DEFINE_MEMBER_N(float, m_flFloatLerpEndValue,0xCF8 );
			DEFINE_MEMBER_N(float, m_flFloatLerpTransitionTime,0xCFC );
			DEFINE_MEMBER_N(char, m_bFloatLerpWrap,0xD00 );
			DEFINE_MEMBER_N(int, m_nModifyMode,0xD08 );
		};
	};
	class CMelee
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flThrowAt,0x33E0 );
		};
	};
	class CMolotovProjectile
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bIsIncGrenade,0x2A20 );
		};
	};
	class CMovieDisplay
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bEnabled,0x9D8 );
			DEFINE_MEMBER_N(char, m_bLooping,0x9D9 );
			DEFINE_MEMBER_N(std::string, m_szMovieFilename,0x9DA );
			DEFINE_MEMBER_N(std::string, m_szGroupName,0xA5A );
			DEFINE_MEMBER_N(char, m_bStretchToFill,0xADA );
			DEFINE_MEMBER_N(char, m_bForcedSlave,0xADB );
			DEFINE_MEMBER_N(char, m_bUseCustomUVs,0xADC );
			DEFINE_MEMBER_N(float, m_flUMin,0xAE0 );
			DEFINE_MEMBER_N(float, m_flUMax,0xAE4 );
			DEFINE_MEMBER_N(float, m_flVMin,0xAE8 );
			DEFINE_MEMBER_N(float, m_flVMax,0xAEC );
		};
	};
	class CParadropChopper
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin[2],0x140 );
			DEFINE_MEMBER_N(int, m_hCallingPlayer,0x29A0 );
		};
	};
	class CParticleFire
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_vOrigin,0xACC );
			DEFINE_MEMBER_N(int, m_vDirection,0xAD8 );
		};
	};
	class CParticlePerformanceMonitor
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bMeasurePerf,0x9D9 );
			DEFINE_MEMBER_N(char, m_bDisplayPerf,0x9D8 );
		};
	};
	class CParticleSystem
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, m_fEffects,0xF0 );
			DEFINE_MEMBER_N(int, m_hOwnerEntity,0x14C );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
			DEFINE_MEMBER_N(int, m_iParentAttachment,0x2EC );
			DEFINE_MEMBER_N(int, m_angRotation,0x12C );
			DEFINE_MEMBER_N(int, m_iEffectIndex,0x9D8 );
			DEFINE_MEMBER_N(char, m_bActive,0x9E0 );
			DEFINE_MEMBER_N(int, m_nStopType,0x9DC );
			DEFINE_MEMBER_N(float, m_flStartTime,0x9E4 );
			DEFINE_MEMBER_N(std::string, m_szSnapshotFileName,0x9E8 );
			DEFINE_MEMBER_N(int, m_vServerControlPoints,0xAEC );
			DEFINE_MEMBER_N(int, m_iServerControlPointAssignments,0xB1C );
			DEFINE_MEMBER_N(int, m_hControlPointEnts,0xB30 );
			DEFINE_MEMBER_N(int, m_iControlPointParents,0xC2C );
		};
	};
	class CPhysBox
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_mass,0x9D8 );
		};
	};
	class CPhysBoxMultiplayer
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iPhysicsMode,0x9E4 );
			DEFINE_MEMBER_N(int, m_fMass,0x9E8 );
		};
	};
	class CPhysicsProp
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bAwake,0x29B0 );
			DEFINE_MEMBER_N(int, m_spawnflags,0x2C8 );
		};
	};
	class CPhysicsPropMultiplayer
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iPhysicsMode,0x29D4 );
			DEFINE_MEMBER_N(int, m_fMass,0x29D8 );
			DEFINE_MEMBER_N(int, m_collisionMins,0x29DC );
			DEFINE_MEMBER_N(int, m_collisionMaxs,0x29E8 );
		};
	};
	class CPhysPropLootCrate
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bRenderInPSPM,0x2A04 );
			DEFINE_MEMBER_N(char, m_bRenderInTablet,0x2A05 );
			DEFINE_MEMBER_N(int, m_iHealth,0x100 );
			DEFINE_MEMBER_N(int, m_iMaxHealth,0x2A08 );
		};
	};
	class CPlantedC4
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bBombTicking,0x2990 );
			DEFINE_MEMBER_N(int, m_nBombSite,0x2994 );
			DEFINE_MEMBER_N(float, m_flC4Blow,0x29A0 );
			DEFINE_MEMBER_N(float, m_flTimerLength,0x29A4 );
			DEFINE_MEMBER_N(float, m_flDefuseLength,0x29B8 );
			DEFINE_MEMBER_N(float, m_flDefuseCountDown,0x29BC );
			DEFINE_MEMBER_N(char, m_bBombDefused,0x29C0 );
			DEFINE_MEMBER_N(int, m_hBombDefuser,0x29C4 );
		};
	};
	class CPlasma
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flStartScale,0x9D8 );
			DEFINE_MEMBER_N(float, m_flScale,0x9DC );
			DEFINE_MEMBER_N(float, m_flScaleTime,0x9E0 );
			DEFINE_MEMBER_N(int, m_nFlags,0x9E4 );
			DEFINE_MEMBER_N(int, m_nPlasmaModelIndex,0x9E8 );
			DEFINE_MEMBER_N(int, m_nPlasmaModelIndex2,0x9EC );
			DEFINE_MEMBER_N(int, m_nGlowModelIndex,0x9F0 );
		};
	};
	class CPlayerPing
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hPlayer,0x9E4 );
			DEFINE_MEMBER_N(int, m_hPingedEntity,0x9E8 );
			DEFINE_MEMBER_N(int, m_iType,0x9EC );
			DEFINE_MEMBER_N(char, m_bUrgent,0x9F4 );
			DEFINE_MEMBER_N(std::string, m_szPlaceName,0x9F5 );
		};
	};
	class CPlayerResource
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iPing,0xB28 );
			DEFINE_MEMBER_N(int, m_iKills,0xC2C );
			DEFINE_MEMBER_N(int, m_iAssists,0xD30 );
			DEFINE_MEMBER_N(int, m_iDeaths,0xE34 );
			DEFINE_MEMBER_N(char, m_bConnected,0xAE4 );
			DEFINE_MEMBER_N(int, m_iTeam,0xF38 );
			DEFINE_MEMBER_N(int, m_iPendingTeam,0x103C );
			DEFINE_MEMBER_N(char, m_bAlive,0x1140 );
			DEFINE_MEMBER_N(int, m_iHealth,0x1184 );
			DEFINE_MEMBER_N(int, m_iCoachingTeam,0x1288 );
		};
	};
	class CPointCamera
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_FOV,0x9D8 );
			DEFINE_MEMBER_N(int, m_Resolution,0x9DC );
			DEFINE_MEMBER_N(char, m_bFogEnable,0x9E0 );
			DEFINE_MEMBER_N(int, m_FogColor,0x9E1 );
			DEFINE_MEMBER_N(float, m_flFogStart,0x9E8 );
			DEFINE_MEMBER_N(float, m_flFogEnd,0x9EC );
			DEFINE_MEMBER_N(float, m_flFogMaxDensity,0x9F0 );
			DEFINE_MEMBER_N(char, m_bActive,0x9F4 );
			DEFINE_MEMBER_N(char, m_bUseScreenAspectRatio,0x9F5 );
		};
	};
	class CPointCommentaryNode
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bActive,0x2990 );
			DEFINE_MEMBER_N(float, m_flStartTime,0x2994 );
			DEFINE_MEMBER_N(int, m_iszCommentaryFile,0x2998 );
			DEFINE_MEMBER_N(int, m_iszCommentaryFileNoHDR,0x2A9C );
			DEFINE_MEMBER_N(int, m_iszSpeakers,0x2BA0 );
			DEFINE_MEMBER_N(int, m_iNodeNumber,0x2CA0 );
			DEFINE_MEMBER_N(int, m_iNodeNumberMax,0x2CA4 );
			DEFINE_MEMBER_N(int, m_hViewPosition,0x2CAC );
		};
	};
	class CPointWorldText
	{
	public:
		union
		{
			DEFINE_MEMBER_N(std::string, m_szText,0xA08 );
			DEFINE_MEMBER_N(float, m_flTextSize,0xB0C );
			DEFINE_MEMBER_N(int, m_textColor,0xB10 );
		};
	};
	class CPoseController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hProps,0x9D8 );
			DEFINE_MEMBER_N(int, m_chPoseIndex,0x9E8 );
			DEFINE_MEMBER_N(char, m_bPoseValueParity,0x9EC );
			DEFINE_MEMBER_N(int, m_fPoseValue,0x9F0 );
			DEFINE_MEMBER_N(int, m_fInterpolationTime,0x9F4 );
			DEFINE_MEMBER_N(char, m_bInterpolationWrap,0x9F8 );
			DEFINE_MEMBER_N(int, m_fCycleFrequency,0x9FC );
			DEFINE_MEMBER_N(int, m_nFModType,0xA00 );
			DEFINE_MEMBER_N(int, m_fFModTimeOffset,0xA04 );
			DEFINE_MEMBER_N(int, m_fFModRate,0xA08 );
			DEFINE_MEMBER_N(int, m_fFModAmplitude,0xA0C );
		};
	};
	class CPostProcessController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flPostProcessParameters,0x9D8 );
			DEFINE_MEMBER_N(char, m_bMaster,0xA04 );
		};
	};
	class CPrecipitation
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nPrecipType,0xA00 );
		};
	};
	class CProp_Hallucination
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bEnabled,0x29A9 );
			DEFINE_MEMBER_N(int, m_fVisibleTime,0x29AC );
			DEFINE_MEMBER_N(int, m_fRechargeTime,0x29B0 );
		};
	};
	class CPropCounter
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flDisplayValue,0x2990 );
		};
	};
	class CPropJeep
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bHeadlightIsOn,0x2ADC );
		};
	};
	class CPropVehicleChoreoGeneric
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hPlayer,0x2A04 );
			DEFINE_MEMBER_N(char, m_bEnterAnimOn,0x2A0C );
			DEFINE_MEMBER_N(char, m_bExitAnimOn,0x2A0D );
			DEFINE_MEMBER_N(char, m_bForceEyesToAttachment,0x2A1C );
			DEFINE_MEMBER_N(Vector3, m_vecEyeExitEndpoint,0x2A10 );
			DEFINE_MEMBER_N(int, m_vehicleViewbClampEyeAngles,0x2AA0 );
			DEFINE_MEMBER_N(int, m_vehicleViewflPitchCurveZero,0x2AA4 );
			DEFINE_MEMBER_N(int, m_vehicleViewflPitchCurveLinear,0x2AA8 );
			DEFINE_MEMBER_N(int, m_vehicleViewflRollCurveZero,0x2AAC );
			DEFINE_MEMBER_N(int, m_vehicleViewflRollCurveLinear,0x2AB0 );
			DEFINE_MEMBER_N(int, m_vehicleViewflFOV,0x2AB4 );
			DEFINE_MEMBER_N(int, m_vehicleViewflYawMin,0x2AB8 );
			DEFINE_MEMBER_N(int, m_vehicleViewflYawMax,0x2ABC );
			DEFINE_MEMBER_N(int, m_vehicleViewflPitchMin,0x2AC0 );
			DEFINE_MEMBER_N(int, m_vehicleViewflPitchMax,0x2AC4 );
		};
	};
	class CPropVehicleDriveable
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hPlayer,0x2994 );
			DEFINE_MEMBER_N(int, m_nSpeed,0x2998 );
			DEFINE_MEMBER_N(int, m_nRPM,0x299C );
			DEFINE_MEMBER_N(float, m_flThrottle,0x29A0 );
			DEFINE_MEMBER_N(int, m_nBoostTimeLeft,0x29A4 );
			DEFINE_MEMBER_N(int, m_nHasBoost,0x29A8 );
			DEFINE_MEMBER_N(int, m_nScannerDisabledWeapons,0x29AC );
			DEFINE_MEMBER_N(int, m_nScannerDisabledVehicle,0x29B0 );
			DEFINE_MEMBER_N(char, m_bEnterAnimOn,0x29D0 );
			DEFINE_MEMBER_N(char, m_bExitAnimOn,0x29D1 );
			DEFINE_MEMBER_N(char, m_bUnableToFire,0x2A1D );
			DEFINE_MEMBER_N(Vector3, m_vecEyeExitEndpoint,0x2A10 );
			DEFINE_MEMBER_N(char, m_bHasGun,0x2A1C );
			DEFINE_MEMBER_N(Vector3, m_vecGunCrosshair,0x29D8 );
		};
	};
	class CRagdollManager
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iCurrentMaxRagdollCount,0x9D8 );
		};
	};
	class CRagdollProp
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_ragAngles[0],0x2AB0 );
			DEFINE_MEMBER_N(int, m_ragPos[0],0x2990 );
			DEFINE_MEMBER_N(int, m_hUnragdoll,0x2C8C );
			DEFINE_MEMBER_N(float, m_flBlendWeight,0x2C90 );
			DEFINE_MEMBER_N(int, m_nOverlaySequence,0x2C98 );
		};
	};
	class CRagdollPropAttached
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_boneIndexAttached,0x2CC8 );
			DEFINE_MEMBER_N(int, m_ragdollAttachedObjectIndex,0x2CC4 );
			DEFINE_MEMBER_N(int, m_attachmentPointBoneSpace,0x2CA0 );
			DEFINE_MEMBER_N(int, m_attachmentPointRagdollSpace,0x2CB8 );
		};
	};
	class CRopeKeyframe
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nChangeCount,0xCCC );
			DEFINE_MEMBER_N(int, m_iRopeMaterialModelIndex,0xA14 );
			DEFINE_MEMBER_N(int, m_hStartPoint,0xCAC );
			DEFINE_MEMBER_N(int, m_hEndPoint,0xCB0 );
			DEFINE_MEMBER_N(int, m_iStartAttachment,0xCB4 );
			DEFINE_MEMBER_N(int, m_iEndAttachment,0xCB6 );
			DEFINE_MEMBER_N(int, m_fLockedPoints,0xCC8 );
			DEFINE_MEMBER_N(int, m_Slack,0xCC0 );
			DEFINE_MEMBER_N(int, m_RopeLength,0xCBC );
			DEFINE_MEMBER_N(int, m_RopeFlags,0xA10 );
			DEFINE_MEMBER_N(int, m_TextureScale,0xCC4 );
			DEFINE_MEMBER_N(int, m_nSegments,0xCA8 );
			DEFINE_MEMBER_N(char, m_bConstrainBetweenEndpoints,0xD50 );
			DEFINE_MEMBER_N(int, m_Subdiv,0xCB8 );
			DEFINE_MEMBER_N(int, m_Width,0xCD0 );
			DEFINE_MEMBER_N(float, m_flScrollSpeed,0xA0C );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
			DEFINE_MEMBER_N(int, m_iParentAttachment,0x2EC );
			DEFINE_MEMBER_N(int, m_iDefaultRopeMaterialModelIndex,0xA18 );
			DEFINE_MEMBER_N(int, m_nMinCPULevel,0x988 );
			DEFINE_MEMBER_N(int, m_nMaxCPULevel,0x989 );
			DEFINE_MEMBER_N(int, m_nMinGPULevel,0x98A );
			DEFINE_MEMBER_N(int, m_nMaxGPULevel,0x98B );
		};
	};
	class CSceneEntity
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nSceneStringIndex,0x9E8 );
			DEFINE_MEMBER_N(char, m_bIsPlayingBack,0x9DC );
			DEFINE_MEMBER_N(char, m_bPaused,0x9DD );
			DEFINE_MEMBER_N(char, m_bMultiplayer,0x9DE );
			DEFINE_MEMBER_N(float, m_flForceClientTime,0x9E4 );
		};
	};
	class CShadowControl
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_shadowDirection,0x9D8 );
			DEFINE_MEMBER_N(int, m_shadowColor,0x9E4 );
			DEFINE_MEMBER_N(float, m_flShadowMaxDist,0x9E8 );
			DEFINE_MEMBER_N(char, m_bDisableShadows,0x9EC );
			DEFINE_MEMBER_N(char, m_bEnableLocalLightShadows,0x9ED );
		};
	};
	class CSlideshowDisplay
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bEnabled,0x9D8 );
			DEFINE_MEMBER_N(std::string, m_szDisplayText,0x9D9 );
			DEFINE_MEMBER_N(std::string, m_szSlideshowDirectory,0xA59 );
			DEFINE_MEMBER_N(int, m_chCurrentSlideLists,0xAF0 );
			DEFINE_MEMBER_N(int, m_fMinSlideTime,0xB08 );
			DEFINE_MEMBER_N(int, m_fMaxSlideTime,0xB0C );
			DEFINE_MEMBER_N(int, m_iCycleType,0xB14 );
			DEFINE_MEMBER_N(char, m_bNoListRepeats,0xB18 );
		};
	};
	class CSmokeGrenadeProjectile
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bDidSmokeEffect,0x2A24 );
			DEFINE_MEMBER_N(int, m_nSmokeEffectTickBegin,0x2A20 );
		};
	};
	class CSmokeStack
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_SpreadSpeed,0xB14 );
			DEFINE_MEMBER_N(int, m_Speed,0xB18 );
			DEFINE_MEMBER_N(int, m_StartSize,0xB1C );
			DEFINE_MEMBER_N(int, m_EndSize,0xB20 );
			DEFINE_MEMBER_N(int, m_Rate,0xB24 );
			DEFINE_MEMBER_N(int, m_JetLength,0xB28 );
			DEFINE_MEMBER_N(char, m_bEmit,0xB2C );
			DEFINE_MEMBER_N(float, m_flBaseSpread,0xB30 );
			DEFINE_MEMBER_N(float, m_flTwist,0xB84 );
			DEFINE_MEMBER_N(float, m_flRollSpeed,0xBC0 );
			DEFINE_MEMBER_N(int, m_iMaterialModel,0xB88 );
			DEFINE_MEMBER_N(int, m_AmbientLightm_vPos,0xB34 );
			DEFINE_MEMBER_N(int, m_AmbientLightm_vColor,0xB40 );
			DEFINE_MEMBER_N(int, m_AmbientLightm_flIntensity,0xB4C );
			DEFINE_MEMBER_N(int, m_DirLightm_vPos,0xB50 );
			DEFINE_MEMBER_N(int, m_DirLightm_vColor,0xB5C );
			DEFINE_MEMBER_N(int, m_DirLightm_flIntensity,0xB68 );
			DEFINE_MEMBER_N(int, m_vWind,0xB78 );
		};
	};
	class CSpatialEntity
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x9D8 );
			DEFINE_MEMBER_N(int, m_minFalloff,0x9E4 );
			DEFINE_MEMBER_N(int, m_maxFalloff,0x9E8 );
			DEFINE_MEMBER_N(float, m_flCurWeight,0x9EC );
			DEFINE_MEMBER_N(char, m_bEnabled,0xAF4 );
		};
	};
	class CSpotlightEnd
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flLightScale,0x9D8 );
			DEFINE_MEMBER_N(int, m_Radius,0x9DC );
		};
	};
	class CSprite
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hAttachedToEntity,0x9E8 );
			DEFINE_MEMBER_N(int, m_nAttachment,0x9EC );
			DEFINE_MEMBER_N(float, m_flScaleTime,0xA08 );
			DEFINE_MEMBER_N(float, m_flSpriteScale,0xA04 );
			DEFINE_MEMBER_N(float, m_flSpriteFramerate,0x9F0 );
			DEFINE_MEMBER_N(float, m_flGlowProxySize,0xA10 );
			DEFINE_MEMBER_N(float, m_flHDRColorScale,0xA14 );
			DEFINE_MEMBER_N(float, m_flFrame,0x9F4 );
			DEFINE_MEMBER_N(float, m_flBrightnessTime,0xA00 );
			DEFINE_MEMBER_N(int, m_nBrightness,0x9FC );
			DEFINE_MEMBER_N(char, m_bWorldSpaceScale,0xA0C );
		};
	};
	class CSpriteTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flLifeTime,0x1074 );
			DEFINE_MEMBER_N(float, m_flStartWidth,0x1078 );
			DEFINE_MEMBER_N(float, m_flEndWidth,0x107C );
			DEFINE_MEMBER_N(float, m_flStartWidthVariance,0x1080 );
			DEFINE_MEMBER_N(float, m_flTextureRes,0x1084 );
			DEFINE_MEMBER_N(float, m_flMinFadeLength,0x1088 );
			DEFINE_MEMBER_N(Vector3, m_vecSkyboxOrigin,0x108C );
			DEFINE_MEMBER_N(float, m_flSkyboxScale,0x1098 );
		};
	};
	class CStatueProp
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hInitBaseAnimating,0x29D0 );
			DEFINE_MEMBER_N(char, m_bShatter,0x29D4 );
			DEFINE_MEMBER_N(int, m_nShatterFlags,0x29D8 );
			DEFINE_MEMBER_N(int, m_vShatterPosition,0x29DC );
			DEFINE_MEMBER_N(int, m_vShatterForce,0x29E8 );
		};
	};
	class CSteamJet
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_SpreadSpeed,0xAC4 );
			DEFINE_MEMBER_N(int, m_Speed,0xAC8 );
			DEFINE_MEMBER_N(int, m_StartSize,0xACC );
			DEFINE_MEMBER_N(int, m_EndSize,0xAD0 );
			DEFINE_MEMBER_N(int, m_Rate,0xAD4 );
			DEFINE_MEMBER_N(int, m_JetLength,0xAD8 );
			DEFINE_MEMBER_N(char, m_bEmit,0xADC );
			DEFINE_MEMBER_N(char, m_bFaceLeft,0xAE4 );
			DEFINE_MEMBER_N(int, m_nType,0xAE0 );
			DEFINE_MEMBER_N(int, m_spawnflags,0xAE8 );
			DEFINE_MEMBER_N(float, m_flRollSpeed,0xAEC );
		};
	};
	class CSun
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_clrRender,0x70 );
			DEFINE_MEMBER_N(int, m_clrOverlay,0xB38 );
			DEFINE_MEMBER_N(int, m_vDirection,0xB44 );
			DEFINE_MEMBER_N(char, m_bOn,0xB50 );
			DEFINE_MEMBER_N(int, m_nSize,0xB3C );
			DEFINE_MEMBER_N(int, m_nOverlaySize,0xB40 );
			DEFINE_MEMBER_N(int, m_nMaterial,0xB54 );
			DEFINE_MEMBER_N(int, m_nOverlayMaterial,0xB58 );
		};
	};
	class CSunlightShadowControl
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_shadowDirection,0x9D8 );
			DEFINE_MEMBER_N(char, m_bEnabled,0x9E4 );
			DEFINE_MEMBER_N(int, m_TextureName,0x9E5 );
			DEFINE_MEMBER_N(int, m_LightColor,0xAF0 );
			DEFINE_MEMBER_N(float, m_flColorTransitionTime,0xB04 );
			DEFINE_MEMBER_N(float, m_flSunDistance,0xB08 );
			DEFINE_MEMBER_N(float, m_flFOV,0xB0C );
			DEFINE_MEMBER_N(float, m_flNearZ,0xB10 );
			DEFINE_MEMBER_N(float, m_flNorthOffset,0xB14 );
			DEFINE_MEMBER_N(char, m_bEnableShadows,0xB18 );
		};
	};
	class CSurvivalSpawnChopper
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin[2],0x140 );
		};
	};
	class CTablet
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flUpgradeExpirationTime[0],0x33E8 );
			DEFINE_MEMBER_N(Vector3, m_vecLocalHexFlags[0],0x33F8 );
			DEFINE_MEMBER_N(int, m_nContractKillGridIndex,0x34A0 );
			DEFINE_MEMBER_N(int, m_nContractKillGridHighResIndex,0x34A4 );
			DEFINE_MEMBER_N(char, m_bTabletReceptionIsBlocked,0x34A8 );
			DEFINE_MEMBER_N(float, m_flScanProgress,0x34AC );
			DEFINE_MEMBER_N(float, m_flBootTime,0x34B0 );
			DEFINE_MEMBER_N(float, m_flShowMapTime,0x34B4 );
			DEFINE_MEMBER_N(Vector3, m_vecNotificationIds[0],0x34C4 );
			DEFINE_MEMBER_N(Vector3, m_vecNotificationTimestamps[0],0x34E4 );
			DEFINE_MEMBER_N(Vector3, m_vecPlayerPositionHistory[0],0x3508 );
			DEFINE_MEMBER_N(int, m_nLastPurchaseIndex,0x3504 );
			DEFINE_MEMBER_N(Vector3, m_vecNearestMetalCratePos,0x34B8 );
		};
	};
	class CTeam
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iTeamNum,0xB68 );
			DEFINE_MEMBER_N(char, m_bSurrendered,0xB6C );
			DEFINE_MEMBER_N(int, m_scoreTotal,0xB40 );
			DEFINE_MEMBER_N(int, m_scoreFirstHalf,0xB44 );
			DEFINE_MEMBER_N(int, m_scoreSecondHalf,0xB48 );
			DEFINE_MEMBER_N(int, m_scoreOvertime,0xB4C );
			DEFINE_MEMBER_N(int, m_iClanID,0xB58 );
			DEFINE_MEMBER_N(std::string, m_szTeamname,0x9EC );
			DEFINE_MEMBER_N(std::string, m_szClanTeamname,0xA0C );
			DEFINE_MEMBER_N(std::string, m_szTeamFlagImage,0xA2C );
			DEFINE_MEMBER_N(std::string, m_szTeamLogoImage,0xA34 );
			DEFINE_MEMBER_N(std::string, m_szTeamMatchStat,0xA3C );
			DEFINE_MEMBER_N(int, m_nGGLeaderEntIndex_CT,0xB50 );
			DEFINE_MEMBER_N(int, m_nGGLeaderEntIndex_T,0xB54 );
			DEFINE_MEMBER_N(int, m_numMapVictories,0xB70 );
		};
	};
	class CTEBaseBeam
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nModelIndex,0x10 );
			DEFINE_MEMBER_N(int, m_nHaloIndex,0x14 );
			DEFINE_MEMBER_N(int, m_nStartFrame,0x18 );
			DEFINE_MEMBER_N(int, m_nFrameRate,0x1C );
			DEFINE_MEMBER_N(int, m_fLife,0x20 );
			DEFINE_MEMBER_N(int, m_fWidth,0x24 );
			DEFINE_MEMBER_N(int, m_fEndWidth,0x28 );
			DEFINE_MEMBER_N(int, m_nFadeLength,0x2C );
			DEFINE_MEMBER_N(int, m_fAmplitude,0x30 );
			DEFINE_MEMBER_N(int, m_nSpeed,0x44 );
			DEFINE_MEMBER_N(int, r,0x34 );
			DEFINE_MEMBER_N(int, g,0x38 );
			DEFINE_MEMBER_N(int, b,0x3C );
			DEFINE_MEMBER_N(int, a,0x40 );
			DEFINE_MEMBER_N(int, m_nFlags,0x48 );
		};
	};
	class CTEBeamEntPoint
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nStartEntity,0x4C );
			DEFINE_MEMBER_N(int, m_nEndEntity,0x50 );
			DEFINE_MEMBER_N(Vector3, m_vecStartPoint,0x54 );
			DEFINE_MEMBER_N(Vector3, m_vecEndPoint,0x60 );
		};
	};
	class CTEBeamEnts
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nStartEntity,0x4C );
			DEFINE_MEMBER_N(int, m_nEndEntity,0x50 );
		};
	};
	class CTEBeamFollow
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iEntIndex,0x4C );
		};
	};
	class CTEBeamLaser
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nStartEntity,0x4C );
			DEFINE_MEMBER_N(int, m_nEndEntity,0x50 );
		};
	};
	class CTEBeamPoints
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecStartPoint,0x4C );
			DEFINE_MEMBER_N(Vector3, m_vecEndPoint,0x58 );
		};
	};
	class CTEBeamRing
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nStartEntity,0x4C );
			DEFINE_MEMBER_N(int, m_nEndEntity,0x50 );
		};
	};
	class CTEBeamRingPoint
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecCenter,0x4C );
			DEFINE_MEMBER_N(float, m_flStartRadius,0x58 );
			DEFINE_MEMBER_N(float, m_flEndRadius,0x5C );
		};
	};
	class CTEBeamSpline
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nPoints,0xD0 );
			DEFINE_MEMBER_N(Vector3, m_vecPoints[0],0x10 );
		};
	};
	class CTEBloodSprite
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x1C );
			DEFINE_MEMBER_N(int, r,0x28 );
			DEFINE_MEMBER_N(int, g,0x2C );
			DEFINE_MEMBER_N(int, b,0x30 );
			DEFINE_MEMBER_N(int, a,0x34 );
			DEFINE_MEMBER_N(int, m_nSprayModel,0x3C );
			DEFINE_MEMBER_N(int, m_nDropModel,0x38 );
			DEFINE_MEMBER_N(int, m_nSize,0x40 );
		};
	};
	class CTEBloodStream
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x1C );
			DEFINE_MEMBER_N(int, r,0x28 );
			DEFINE_MEMBER_N(int, g,0x2C );
			DEFINE_MEMBER_N(int, b,0x30 );
			DEFINE_MEMBER_N(int, a,0x34 );
			DEFINE_MEMBER_N(int, m_nAmount,0x38 );
		};
	};
	class CTEBreakModel
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_angRotation[0],0x1C );
			DEFINE_MEMBER_N(int, m_angRotation[1],0x20 );
			DEFINE_MEMBER_N(int, m_angRotation[2],0x24 );
			DEFINE_MEMBER_N(Vector3, m_vecSize,0x28 );
			DEFINE_MEMBER_N(Vector3, m_vecVelocity,0x34 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x44 );
			DEFINE_MEMBER_N(int, m_nRandomization,0x40 );
			DEFINE_MEMBER_N(int, m_nCount,0x48 );
			DEFINE_MEMBER_N(int, m_fTime,0x4C );
			DEFINE_MEMBER_N(int, m_nFlags,0x50 );
		};
	};
	class CTEBSPDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_nEntity,0x1C );
			DEFINE_MEMBER_N(int, m_nIndex,0x20 );
		};
	};
	class CTEBubbles
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecMins,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecMaxs,0x1C );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x2C );
			DEFINE_MEMBER_N(int, m_fHeight,0x28 );
			DEFINE_MEMBER_N(int, m_nCount,0x30 );
			DEFINE_MEMBER_N(int, m_fSpeed,0x34 );
		};
	};
	class CTEBubbleTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecMins,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecMaxs,0x1C );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x2C );
			DEFINE_MEMBER_N(float, m_flWaterZ,0x28 );
			DEFINE_MEMBER_N(int, m_nCount,0x30 );
			DEFINE_MEMBER_N(int, m_fSpeed,0x34 );
		};
	};
	class CTEClientProjectile
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecVelocity,0x1C );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x28 );
			DEFINE_MEMBER_N(int, m_nLifeTime,0x2C );
			DEFINE_MEMBER_N(int, m_hOwner,0x30 );
		};
	};
	class CTEDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecStart,0x1C );
			DEFINE_MEMBER_N(int, m_nEntity,0x28 );
			DEFINE_MEMBER_N(int, m_nHitbox,0x2C );
			DEFINE_MEMBER_N(int, m_nIndex,0x30 );
		};
	};
	class CTEDust
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flSize,0x1C );
			DEFINE_MEMBER_N(float, m_flSpeed,0x20 );
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x24 );
		};
	};
	class CTEDynamicLight
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, r,0x20 );
			DEFINE_MEMBER_N(int, g,0x24 );
			DEFINE_MEMBER_N(int, b,0x28 );
			DEFINE_MEMBER_N(int, exponent,0x2C );
			DEFINE_MEMBER_N(int, m_fRadius,0x1C );
			DEFINE_MEMBER_N(int, m_fTime,0x30 );
			DEFINE_MEMBER_N(int, m_fDecay,0x34 );
		};
	};
	class CTEEffectDispatch
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_EffectData,0x10 );
		};
	};
	class CTEEnergySplash
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecPos,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecDir,0x1C );
			DEFINE_MEMBER_N(char, m_bExplosive,0x28 );
		};
	};
	class CTEExplosion
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nModelIndex,0x1C );
			DEFINE_MEMBER_N(int, m_fScale,0x20 );
			DEFINE_MEMBER_N(int, m_nFrameRate,0x24 );
			DEFINE_MEMBER_N(int, m_nFlags,0x28 );
			DEFINE_MEMBER_N(Vector3, m_vecNormal,0x2C );
			DEFINE_MEMBER_N(int, m_chMaterialType,0x38 );
			DEFINE_MEMBER_N(int, m_nRadius,0x3C );
			DEFINE_MEMBER_N(int, m_nMagnitude,0x40 );
		};
	};
	class CTEFireBullets
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x18 );
			DEFINE_MEMBER_N(Vector3, m_vecAngles[0],0x24 );
			DEFINE_MEMBER_N(Vector3, m_vecAngles[1],0x28 );
			DEFINE_MEMBER_N(int, m_iWeaponID,0x34 );
			DEFINE_MEMBER_N(int, m_weapon,0x30 );
			DEFINE_MEMBER_N(int, m_iMode,0x38 );
			DEFINE_MEMBER_N(int, m_iSeed,0x3C );
			DEFINE_MEMBER_N(int, m_iPlayer,0x10 );
			DEFINE_MEMBER_N(int, m_fInaccuracy,0x40 );
			DEFINE_MEMBER_N(int, m_fSpread,0x48 );
			DEFINE_MEMBER_N(int, m_nItemDefIndex,0x14 );
			DEFINE_MEMBER_N(int, m_iSoundType,0x4C );
			DEFINE_MEMBER_N(float, m_flRecoilIndex,0x44 );
		};
	};
	class CTEFizz
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nEntity,0x10 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x14 );
			DEFINE_MEMBER_N(int, m_nDensity,0x18 );
			DEFINE_MEMBER_N(int, m_nCurrent,0x1C );
		};
	};
	class CTEFootprintDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x1C );
			DEFINE_MEMBER_N(int, m_nEntity,0x34 );
			DEFINE_MEMBER_N(int, m_nIndex,0x38 );
			DEFINE_MEMBER_N(int, m_chMaterialType,0x3C );
		};
	};
	class CTEFoundryHelpers
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iEntity,0x10 );
		};
	};
	class CTEGaussExplosion
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nType,0x1C );
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x20 );
		};
	};
	class CTEGlowSprite
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x1C );
			DEFINE_MEMBER_N(int, m_fScale,0x20 );
			DEFINE_MEMBER_N(int, m_fLife,0x24 );
			DEFINE_MEMBER_N(int, m_nBrightness,0x28 );
		};
	};
	class CTEImpact
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecNormal,0x1C );
			DEFINE_MEMBER_N(int, m_iType,0x28 );
			DEFINE_MEMBER_N(int, m_ucFlags,0x2C );
		};
	};
	class CTEKillPlayerAttachments
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nPlayer,0x10 );
		};
	};
	class CTELargeFunnel
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nModelIndex,0x1C );
			DEFINE_MEMBER_N(int, m_nReversed,0x20 );
		};
	};
	class CTEMetalSparks
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecPos,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecDir,0x1C );
		};
	};
	class CTEMuzzleFlash
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecAngles,0x1C );
			DEFINE_MEMBER_N(float, m_flScale,0x28 );
			DEFINE_MEMBER_N(int, m_nType,0x2C );
		};
	};
	class CTEParticleSystem
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin[0],0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin[1],0x14 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin[2],0x18 );
		};
	};
	class CTEPhysicsProp
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_angRotation[0],0x1C );
			DEFINE_MEMBER_N(int, m_angRotation[1],0x20 );
			DEFINE_MEMBER_N(int, m_angRotation[2],0x24 );
			DEFINE_MEMBER_N(Vector3, m_vecVelocity,0x28 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x34 );
			DEFINE_MEMBER_N(int, m_nFlags,0x3C );
			DEFINE_MEMBER_N(int, m_nSkin,0x38 );
			DEFINE_MEMBER_N(int, m_nEffects,0x40 );
			DEFINE_MEMBER_N(int, m_clrRender,0x44 );
		};
	};
	class CTEPlantBomb
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x14 );
			DEFINE_MEMBER_N(int, m_iPlayer,0x10 );
			DEFINE_MEMBER_N(int, m_option,0x20 );
		};
	};
	class CTEPlayerAnimEvent
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_hPlayer,0x10 );
			DEFINE_MEMBER_N(int, m_iEvent,0x14 );
			DEFINE_MEMBER_N(int, m_nData,0x18 );
		};
	};
	class CTEPlayerDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x14 );
			DEFINE_MEMBER_N(Vector3, m_vecStart,0x20 );
			DEFINE_MEMBER_N(Vector3, m_vecRight,0x2C );
			DEFINE_MEMBER_N(int, m_nEntity,0x38 );
			DEFINE_MEMBER_N(int, m_nPlayer,0x10 );
			DEFINE_MEMBER_N(int, m_nHitbox,0x3C );
		};
	};
	class CTEProjectedDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_angRotation,0x1C );
			DEFINE_MEMBER_N(float, m_flDistance,0x28 );
			DEFINE_MEMBER_N(int, m_nIndex,0x2C );
		};
	};
	class CTERadioIcon
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iAttachToClient,0x10 );
		};
	};
	class CTEShatterSurface
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecAngles,0x1C );
			DEFINE_MEMBER_N(Vector3, m_vecForce,0x28 );
			DEFINE_MEMBER_N(Vector3, m_vecForcePos,0x34 );
			DEFINE_MEMBER_N(float, m_flWidth,0x40 );
			DEFINE_MEMBER_N(float, m_flHeight,0x44 );
			DEFINE_MEMBER_N(float, m_flShardSize,0x48 );
			DEFINE_MEMBER_N(int, m_nSurfaceType,0x50 );
			DEFINE_MEMBER_N(int, m_uchFrontColor[0],0x54 );
			DEFINE_MEMBER_N(int, m_uchFrontColor[1],0x55 );
			DEFINE_MEMBER_N(int, m_uchFrontColor[2],0x56 );
			DEFINE_MEMBER_N(int, m_uchBackColor[0],0x57 );
			DEFINE_MEMBER_N(int, m_uchBackColor[1],0x58 );
			DEFINE_MEMBER_N(int, m_uchBackColor[2],0x59 );
		};
	};
	class CTEShowLine
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecEnd,0x1C );
		};
	};
	class CTesla
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_SoundName,0xA00 );
			DEFINE_MEMBER_N(int, m_iszSpriteName,0xA40 );
		};
	};
	class CTESmoke
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x1C );
			DEFINE_MEMBER_N(int, m_fScale,0x20 );
			DEFINE_MEMBER_N(int, m_nFrameRate,0x24 );
		};
	};
	class CTESparks
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nMagnitude,0x1C );
			DEFINE_MEMBER_N(int, m_nTrailLength,0x20 );
			DEFINE_MEMBER_N(Vector3, m_vecDir,0x24 );
		};
	};
	class CTESprite
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x1C );
			DEFINE_MEMBER_N(int, m_fScale,0x20 );
			DEFINE_MEMBER_N(int, m_nBrightness,0x24 );
		};
	};
	class CTESpriteSpray
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(Vector3, m_vecDirection,0x1C );
			DEFINE_MEMBER_N(int, m_nModelIndex,0x28 );
			DEFINE_MEMBER_N(int, m_fNoise,0x30 );
			DEFINE_MEMBER_N(int, m_nCount,0x34 );
			DEFINE_MEMBER_N(int, m_nSpeed,0x2C );
		};
	};
	class CTestTraceline
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_clrRender,0x70 );
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x138 );
			DEFINE_MEMBER_N(int, m_angRotation[0],0x12C );
			DEFINE_MEMBER_N(int, m_angRotation[1],0x130 );
			DEFINE_MEMBER_N(int, m_angRotation[2],0x134 );
			DEFINE_MEMBER_N(int, moveparent,0x148 );
		};
	};
	class CTEWorldDecal
	{
	public:
		union
		{
			DEFINE_MEMBER_N(Vector3, m_vecOrigin,0x10 );
			DEFINE_MEMBER_N(int, m_nIndex,0x1C );
		};
	};
	class CTriggerSoundOperator
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_nSoundOperator,0xA10 );
		};
	};
	class CVGuiScreen
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flWidth,0x9E0 );
			DEFINE_MEMBER_N(float, m_flHeight,0x9E4 );
			DEFINE_MEMBER_N(int, m_fScreenFlags,0xA0C );
			DEFINE_MEMBER_N(int, m_nPanelName,0x9E8 );
			DEFINE_MEMBER_N(int, m_nAttachmentIndex,0xA04 );
			DEFINE_MEMBER_N(int, m_nOverlayMaterial,0xA08 );
			DEFINE_MEMBER_N(int, m_hPlayerOwner,0xA68 );
		};
	};
	class CVoteController
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_iActiveIssueIndex,0x9E4 );
			DEFINE_MEMBER_N(int, m_iOnlyTeamToVote,0x9E8 );
			DEFINE_MEMBER_N(int, m_nVoteOptionCount,0x9EC );
			DEFINE_MEMBER_N(int, m_nPotentialVotes,0xA04 );
			DEFINE_MEMBER_N(char, m_bIsYesNoVote,0xA0A );
		};
	};
	class CWaterLODControl
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flCheapWaterStartDistance,0x9D8 );
			DEFINE_MEMBER_N(float, m_flCheapWaterEndDistance,0x9DC );
		};
	};
	class CWeaponBaseItem
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bRedraw,0x33EC );
		};
	};
	class CWeaponCSBase
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_weaponMode,0x3328 );
			DEFINE_MEMBER_N(int, m_fAccuracyPenalty,0x3340 );
			DEFINE_MEMBER_N(int, m_fLastShotTime,0x33B8 );
			DEFINE_MEMBER_N(int, m_iRecoilIndex,0x3350 );
			DEFINE_MEMBER_N(float, m_flRecoilIndex,0x3354 );
			DEFINE_MEMBER_N(int, m_hPrevOwner,0x3394 );
			DEFINE_MEMBER_N(char, m_bBurstMode,0x3358 );
			DEFINE_MEMBER_N(float, m_flPostponeFireReadyTime,0x335C );
			DEFINE_MEMBER_N(char, m_bReloadVisuallyComplete,0x3360 );
			DEFINE_MEMBER_N(char, m_bSilencerOn,0x3361 );
			DEFINE_MEMBER_N(float, m_flDoneSwitchingSilencer,0x3364 );
			DEFINE_MEMBER_N(int, m_iOriginalTeamNumber,0x336C );
			DEFINE_MEMBER_N(int, m_iIronSightMode,0x33D4 );
		};
	};
	class CWeaponCSBaseGun
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_zoomLevel,0x33E0 );
			DEFINE_MEMBER_N(int, m_iBurstShotsRemaining,0x33E4 );
		};
	};
	class CWeaponM3
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_reloadState,0x33E4 );
		};
	};
	class CWeaponNOVA
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_reloadState,0x33E4 );
		};
	};
	class CWeaponSawedoff
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_reloadState,0x33E4 );
		};
	};
	class CWeaponShield
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flDisplayHealth,0x3400 );
		};
	};
	class CWeaponTaser
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_fFireTime,0x3400 );
		};
	};
	class CWeaponXM1014
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_reloadState,0x33E4 );
		};
	};
	class CWorld
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flWaveHeight,0x9D8 );
			DEFINE_MEMBER_N(int, m_WorldMins,0x9DC );
			DEFINE_MEMBER_N(int, m_WorldMaxs,0x9E8 );
			DEFINE_MEMBER_N(char, m_bStartDark,0x9F4 );
			DEFINE_MEMBER_N(float, m_flMaxOccludeeArea,0x9F8 );
			DEFINE_MEMBER_N(float, m_flMinOccluderArea,0x9FC );
			DEFINE_MEMBER_N(float, m_flMaxPropScreenSpaceWidth,0xA04 );
			DEFINE_MEMBER_N(float, m_flMinPropScreenSpaceWidth,0xA00 );
			DEFINE_MEMBER_N(int, m_iszDetailSpriteMaterial,0xA10 );
			DEFINE_MEMBER_N(char, m_bColdWorld,0xA08 );
			DEFINE_MEMBER_N(int, m_iTimeOfDay,0xA0C );
		};
	};
	class CWorldVguiText
	{
	public:
		union
		{
			DEFINE_MEMBER_N(char, m_bEnabled,0x9D8 );
			DEFINE_MEMBER_N(std::string, m_szDisplayText,0x9D9 );
			DEFINE_MEMBER_N(std::string, m_szDisplayTextOption,0xBD9 );
			DEFINE_MEMBER_N(std::string, m_szFont,0xCD9 );
			DEFINE_MEMBER_N(int, m_iTextPanelWidth,0xD20 );
			DEFINE_MEMBER_N(int, m_clrText,0xD19 );
		};
	};
	class DustTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_SpawnRate,0xAC4 );
			DEFINE_MEMBER_N(int, m_Color,0xAC8 );
			DEFINE_MEMBER_N(int, m_ParticleLifetime,0xAD8 );
			DEFINE_MEMBER_N(int, m_StopEmitTime,0xAE0 );
			DEFINE_MEMBER_N(int, m_MinSpeed,0xAE4 );
			DEFINE_MEMBER_N(int, m_MaxSpeed,0xAE8 );
			DEFINE_MEMBER_N(int, m_MinDirectedSpeed,0xAEC );
			DEFINE_MEMBER_N(int, m_MaxDirectedSpeed,0xAF0 );
			DEFINE_MEMBER_N(int, m_StartSize,0xAF4 );
			DEFINE_MEMBER_N(int, m_EndSize,0xAF8 );
			DEFINE_MEMBER_N(int, m_SpawnRadius,0xAFC );
			DEFINE_MEMBER_N(char, m_bEmit,0xB0C );
			DEFINE_MEMBER_N(int, m_Opacity,0xAD4 );
		};
	};
	class ParticleSmokeGrenade
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flSpawnTime,0xAD4 );
			DEFINE_MEMBER_N(int, m_FadeStartTime,0xAD8 );
			DEFINE_MEMBER_N(int, m_FadeEndTime,0xADC );
			DEFINE_MEMBER_N(int, m_MinColor,0xAE4 );
			DEFINE_MEMBER_N(int, m_MaxColor,0xAF0 );
			DEFINE_MEMBER_N(int, m_CurrentStage,0xAC4 );
		};
	};
	class RocketTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_SpawnRate,0xAC4 );
			DEFINE_MEMBER_N(int, m_StartColor,0xAC8 );
			DEFINE_MEMBER_N(int, m_EndColor,0xAD4 );
			DEFINE_MEMBER_N(int, m_ParticleLifetime,0xAE4 );
			DEFINE_MEMBER_N(int, m_StopEmitTime,0xAE8 );
			DEFINE_MEMBER_N(int, m_MinSpeed,0xAEC );
			DEFINE_MEMBER_N(int, m_MaxSpeed,0xAF0 );
			DEFINE_MEMBER_N(int, m_StartSize,0xAF4 );
			DEFINE_MEMBER_N(int, m_EndSize,0xAF8 );
			DEFINE_MEMBER_N(int, m_SpawnRadius,0xAFC );
			DEFINE_MEMBER_N(char, m_bEmit,0xB0C );
			DEFINE_MEMBER_N(int, m_nAttachment,0xB10 );
			DEFINE_MEMBER_N(int, m_Opacity,0xAE0 );
			DEFINE_MEMBER_N(char, m_bDamaged,0xB0D );
			DEFINE_MEMBER_N(float, m_flFlareScale,0xB20 );
		};
	};
	class SmokeTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(int, m_SpawnRate,0xAC4 );
			DEFINE_MEMBER_N(int, m_StartColor,0xAC8 );
			DEFINE_MEMBER_N(int, m_EndColor,0xAD4 );
			DEFINE_MEMBER_N(int, m_ParticleLifetime,0xAE4 );
			DEFINE_MEMBER_N(int, m_StopEmitTime,0xAE8 );
			DEFINE_MEMBER_N(int, m_MinSpeed,0xAEC );
			DEFINE_MEMBER_N(int, m_MaxSpeed,0xAF0 );
			DEFINE_MEMBER_N(int, m_MinDirectedSpeed,0xAF4 );
			DEFINE_MEMBER_N(int, m_MaxDirectedSpeed,0xAF8 );
			DEFINE_MEMBER_N(int, m_StartSize,0xAFC );
			DEFINE_MEMBER_N(int, m_EndSize,0xB00 );
			DEFINE_MEMBER_N(int, m_SpawnRadius,0xB04 );
			DEFINE_MEMBER_N(char, m_bEmit,0xB14 );
			DEFINE_MEMBER_N(int, m_nAttachment,0xB18 );
			DEFINE_MEMBER_N(int, m_Opacity,0xAE0 );
		};
	};
	class SporeExplosion
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flSpawnRate,0xAC4 );
			DEFINE_MEMBER_N(float, m_flParticleLifetime,0xAC8 );
			DEFINE_MEMBER_N(float, m_flStartSize,0xACC );
			DEFINE_MEMBER_N(float, m_flEndSize,0xAD0 );
			DEFINE_MEMBER_N(float, m_flSpawnRadius,0xAD4 );
			DEFINE_MEMBER_N(char, m_bEmit,0xADC );
			DEFINE_MEMBER_N(char, m_bDontRemove,0xADD );
		};
	};
	class SporeTrail
	{
	public:
		union
		{
			DEFINE_MEMBER_N(float, m_flSpawnRate,0xACC );
			DEFINE_MEMBER_N(Vector3, m_vecEndColor,0xAC0 );
			DEFINE_MEMBER_N(float, m_flParticleLifetime,0xAD0 );
			DEFINE_MEMBER_N(float, m_flStartSize,0xAD4 );
			DEFINE_MEMBER_N(float, m_flEndSize,0xAD8 );
			DEFINE_MEMBER_N(float, m_flSpawnRadius,0xADC );
			DEFINE_MEMBER_N(char, m_bEmit,0xAEC );
		};
	};
} // namespace kyedumper