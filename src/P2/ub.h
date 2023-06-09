#pragma once
#include <gomer.h>
#include <iostream>

struct VTUBG {
    struct VT* pvtSuper = g_vtgomer.pvtSuper;
    enum CID cid = CID::UBG;
    int grfcid = 11;
    int cb = 0xC20;
    /*undefined1* pfnInitUbg;
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
    undefined1* pfnPostUbgLoad;
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
    undefined1* pfnGetGomerParams;
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
    undefined1* pfnRenderGomerSelf;
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
    undefined1* pfnFIgnoreUbgIntersection;
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
    undefined1* pfnFDetectUbg;
    undefined1* pfnSgasGetStepguard;
    undefined1* pfnSgsNextUbgAI;
    undefined1* pfnUpdateUbgSgs;
    undefined1* pfnOnStepguardExitingSgs;
    undefined1* pfnOnUbgEnteringSgs;
    undefined1* pfnFCanUbgAttack;
    undefined1* pfnUpdateUbgGoal;
    undefined1* pfnDoUbgFreefallLanding;
    undefined1* pfnDoUbgFreefallJump;
    undefined1* pfnPsoEnemyStepguard;*/
};

extern VTUBG g_vtubg;

struct VTUBV {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::UBV;
    int grfcid = 3;
    int cb = 0x730;
    /*undefined1* pfnInitSo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneSo;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostUbvLoad;
    undefined1* pfnUpdateUbv;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbSoWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustSoNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;*/
};

extern VTUBV g_vtubv;

struct VTUBP {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::UBP;
    int grfcid = 3;
    int cb = 0x5A0;
    /*undefined1* pfnInitSo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneSo;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostUbpLoad;
    undefined1* pfnUpdateUbp;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderUbpAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbSoWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreUbpIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustSoNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifyUbpImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;*/
};

extern VTUBP g_vtubp;