#pragma once
#include <stepguard.h>
#include <iostream>

struct VTHG {
    struct VT* pvtSuper = g_vtstepguard.pvtSuper;
    enum CID cid = CID::HG;
    int grfcid = 11;
    int cb = 0x900;
    /*undefined1* pfnInitHg;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnPoAdd;
    undefined1* pfnOnPoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnClonePo;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandlePoMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostHgLoad;
    undefined1* pfnUpdateHg;
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
    undefined1* pfnPresetHgAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateStepToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictStepPosition;
    undefined1* pfnPredictStepRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderHgSelf;
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
    undefined1* pfnCloneStepPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateStepForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddStepCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustStepNewXp;
    undefined1* pfnAdjustStepXpVelocity;
    undefined1* pfnAdjustStepDz;
    undefined1* pfnAdjustStepXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetHgCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;
    undefined1* pfnOnPoActive;
    undefined1* pfnUpdateHgActive;
    undefined1* pfnSetPoPlayable;
    undefined1* pfnFIsPoSoundBase;
    undefined1* pfnFInvulnerablePo;
    undefined1* pfnFTakePoDamage;
    undefined1* pfnJthsCurrentPo;
    undefined1* pfnCollectPoPrize;
    undefined1* pfnUsePoCharm;
    undefined1* pfnGetPoDiapi;
    undefined1* pfnPlayPoDialog;
    undefined1* pfnUpdateStepMatTarget;
    undefined1* pfnCtTorqueStep;
    undefined1* pfnFCheckStepXpBase;*/
};

extern VTHG g_vthg;