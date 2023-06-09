#pragma once
#include <stepguard.h>

struct MBG {
    struct STEPGUARD MBG;
    enum MBAK mbak;
    struct ASEG* mpmbakpaseg[3];
    struct RWM* mpmbakprwm[3];
    enum MBSK mbsk;
    float tMbsk;
    int fAbandonExternal;
    struct XFM* mpmbskpxfm[4];
    //struct BLRUN ablrun[6];
    struct ASEGBL* pasegblRun;
    int fLeftFootDown;
    int fRightFootDown;
};

struct VTMBG {
    struct VT* pvtSuper = g_vtstepguard.pvtSuper;
    enum CID cid = CID::MBG;
    int grfcid = 11;
    int cb = 0xDC0;
    /*undefined1* pfnInitMbg;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnStepguardAdd;
    undefined1* pfnOnStepguardRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneStepguard;
    undefined1* pfnLoadMbgFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleMbgMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindStepguard;
    undefined1* pfnPostMbgLoad;
    undefined1* pfnUpdateStepguard;
    undefined1* pfnUpdateStepXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetStepParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetStepguardAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateStepToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictStepPosition;
    undefined1* pfnPredictStepRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderStepguardSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbStepguardWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneStepPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateStepForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreMbgIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddStepguardCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustStepguardNewXp;
    undefined1* pfnAdjustStepXpVelocity;
    undefined1* pfnAdjustStepguardDz;
    undefined1* pfnAdjustStepXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetPoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictStepguardZap;
    undefined1* pfnOnPoActive;
    undefined1* pfnUpdatePoActive;
    undefined1* pfnSetPoPlayable;
    undefined1* pfnFIsPoSoundBase;
    undefined1* pfnFInvulnerablePo;
    undefined1* pfnFTakeStepguardDamage;
    undefined1* pfnJthsCurrentPo;
    undefined1* pfnCollectPoPrize;
    undefined1* pfnUsePoCharm;
    undefined1* pfnGetPoDiapi;
    undefined1* pfnPlayPoDialog;
    undefined1* pfnUpdateStepMatTarget;
    undefined1* pfnCtTorqueStep;
    undefined1* pfnFCheckStepXpBase;
    undefined1* pfnFDetectMbg;
    undefined1* pfnSgasGetStepguard;
    undefined1* pfnSgsNextStepguardAI;
    undefined1* pfnUpdateMbgSgs;
    undefined1* pfnOnMbgExitingSgs;
    undefined1* pfnOnMbgEnteringSgs;
    undefined1* pfnFCanMbgAttack;
    undefined1* pfnUpdateMbgGoal;
    undefined1* pfnDoStepguardFreefallLanding;
    undefined1* pfnDoStepguardFreefallJump;
    undefined1* pfnPsoEnemyStepguard;*/
};

extern VTMBG g_vtmbg;

struct VTBHG {
    struct VT* pvtSuper = g_vtstepguard.pvtSuper;
    enum CID cid = CID::BHG;
    int grfcid = 11;
    int cb = 0xBA0;
    /*undefined1* pfnInitBhg;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnStepguardAdd;
    undefined1* pfnOnStepguardRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneStepguard;
    undefined1* pfnLoadStepguardFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleStepguardMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindStepguard;
    undefined1* pfnPostBhgLoad;
    undefined1* pfnUpdateStepguard;
    undefined1* pfnUpdateStepXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetStepParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetStepguardAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateStepToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictStepPosition;
    undefined1* pfnPredictStepRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderStepguardSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbStepguardWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneStepPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateStepForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreStepguardIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddStepguardCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustStepguardNewXp;
    undefined1* pfnAdjustStepXpVelocity;
    undefined1* pfnAdjustStepguardDz;
    undefined1* pfnAdjustStepXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetPoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictStepguardZap;
    undefined1* pfnOnPoActive;
    undefined1* pfnUpdatePoActive;
    undefined1* pfnSetPoPlayable;
    undefined1* pfnFIsPoSoundBase;
    undefined1* pfnFInvulnerablePo;
    undefined1* pfnFTakeStepguardDamage;
    undefined1* pfnJthsCurrentPo;
    undefined1* pfnCollectPoPrize;
    undefined1* pfnUsePoCharm;
    undefined1* pfnGetPoDiapi;
    undefined1* pfnPlayPoDialog;
    undefined1* pfnUpdateStepMatTarget;
    undefined1* pfnCtTorqueStep;
    undefined1* pfnFCheckStepXpBase;
    undefined1* pfnFDetectStepguard;
    undefined1* pfnSgasGetStepguard;
    undefined1* pfnSgsNextBhgAI;
    undefined1* pfnUpdateBhgSgs;
    undefined1* pfnOnStepguardExitingSgs;
    undefined1* pfnOnBhgEnteringSgs;
    undefined1* pfnFCanStepguardAttack;
    undefined1* pfnUpdateStepguardGoal;
    undefined1* pfnDoStepguardFreefallLanding;
    undefined1* pfnDoStepguardFreefallJump;
    undefined1* pfnPsoEnemyStepguard;*/
};

extern VTBHG g_vtbhg;

struct VTSCENTMAP {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::SCENTMAP;
    int grfcid = 1;
    int cb = 0x320;
    /*undefined1* pfnInitScentmap;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnAloAdd;
    undefined1* pfnOnAloRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneAlo;
    undefined1* pfnLoadAloFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostScentmapLoad;
    undefined1* pfnUpdateScentmap;
    undefined1* pfnUpdateAloXfWorld;
    undefined1* pfnUpdateAloXfWorldHierarchy;
    undefined1* pfnFreezeAlo;
    undefined1* pfnSetAloParent;
    undefined1* pfnApplyAloProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetAloParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectAloTransform;
    undefined1* pfnPresetAloAccel;
    undefined1* pfnTranslateAloToPos;
    undefined1* pfnRotateAloToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetAloVelocityVec;
    undefined1* pfnSetAloAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderAloSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbAloWkr;*/
};

extern VTSCENTMAP g_vtscentmap;