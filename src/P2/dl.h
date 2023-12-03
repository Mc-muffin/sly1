/**
 * @file dl.h
*/
#ifndef DL_H
#define DL_H

/**
 * @brief Unknown, needs more research
*/
struct DL {
    void* pvFirst;
    struct LO* ploFirst;
    struct ALO* paloFirst;
    struct SO* psoFirst;
    struct ASEGA* pasegaFirst;
    struct ACTSEG* pactsegFirst;
    struct AMB* pambFirst;
    struct EXC* pexcFirst;
    struct RIP* pripFirst;
    struct BLIP* pblipFirst;
    struct BLIPG* pblipgFirst;
    struct DZ* pdzFirst;
    struct TARGET* ptargetFirst;
    struct HND* phndFirst;
    struct ACT* pactFirst;
    struct IKH* pikhFirst;
    struct LIGHT* plightFirst;
    struct SHADOW* pshadowFirst;
    struct SHAPE* pshapeFirst;
    struct SMA* psmaFirst;
    struct PXR* ppxrFirst;
    struct HSHAPE* phshapeFirst;
    struct HPNT* phpntFirst;
    struct HBSK* phbskFirst;
    struct PIPE* ppipeFirst;
    struct PATHZONE* ppathzoneFirst;
    struct FLY* pflyFirst;
    struct DPRIZE* pdprizeFirst;
    struct RAT* pratFirst;
    struct RATHOLE* pratholeFirst;
    struct ROC* procFirst;
    struct ROH* prohFirst;
    struct ROST* prostFirst;
    struct DART* pdartFirst;
    struct SPIRE* pspireFirst;
    struct RAIL* prailFirst;
    struct LANDING* plandingFirst;
    struct LASEN* plasenFirst;
    //undefined1* pfeFirst;
    struct EXPLSTE* pexplsteFirst;
    struct FADER* pfaderFirst;
    struct CRFOD* pcrfodFirst;
    struct JLOVOL* pjlovolFirst;
    struct EMITTER* pemitterFirst;
    struct MGCO* pmgcoFirst;
    struct JMT* pjmtFirst;
    void* pvLast;
    struct LO* ploLast;
    struct ALO* paloLast;
    struct SO* psoLast;
    struct ASEGA* pasegaLast;
    struct ACTSEG* pactsegLast;
    struct AMB* pambLast;
    struct EXC* pexcLast;
    struct RIP* pripLast;
    struct BLIP* pblipLast;
    struct BLIPG* pblipgLast;
    struct DZ* pdzLast;
    struct TARGET* ptargetLast;
    struct HND* phndLast;
    struct ACT* pactLast;
    struct IKH* pikhLast;
    struct LIGHT* plightLast;
    struct SHADOW* pshadowLast;
    struct SHAPE* pshapeLast;
    struct SMA* psmaLast;
    struct PXR* ppxrLast;
    struct HSHAPE* phshapeLast;
    struct HPNT* phpntLast;
    struct HBSK* phbskLast;
    struct PIPE* ppipeLast;
    struct PATHZONE* ppathzoneLast;
    struct FLY* pflyLast;
    struct DPRIZE* pdprizeLast;
    struct RAT* pratLast;
    struct RATHOLE* pratholeLast;
    struct ROC* procLast;
    struct ROH* prohLast;
    struct ROST* prostLast;
    struct DART* pdartLast;
    struct SPIRE* pspireLast;
    struct RAIL* prailLast;
    struct LANDING* plandingLast;
    struct LASEN* plasenLast;
    //undefined1* pfeLast;
    struct EXPLSTE* pexplsteLast;
    struct FADER* pfaderLast;
    struct CRFOD* pcrfodLast;
    struct JLOVOL* pjlovolLast;
    struct EMITTER* pemitterLast;
    struct MGCO* pmgcoLast;
    struct JMT* pjmtLast;
    int ibDle;
};

struct DLE
{
    void* pvNext;
    struct LO* ploNext;
    struct ALO* paloNext;
    struct SO* psoNext;
    struct ASEGA* pasegaNext;
    struct ACTSEG* pactsegNext;
    struct AMB* pambNext;
    struct EXC* pexcNext;
    struct RIP* pripNext;
    struct BLIP* pblipNext;
    struct BLIPG* pblipgNext;
    struct DZ* pdzNext;
    struct TARGET* ptargetNext;
    struct HND* phndNext;
    struct ACT* pactNext;
    struct IKH* pikhNext;
    struct LIGHT* plightNext;
    struct SHADOW* pshadowNext;
    struct SHAPE* pshapeNext;
    struct SMA* psmaNext;
    struct PXR* ppxrNext;
    struct HSHAPE* phshapeNext;
    struct HPNT* phpntNext;
    struct HBSK* phbskNext;
    struct PIPE* ppipeNext;
    struct PATHZONE* ppathzoneNext;
    struct FLY* pflyNext;
    struct DPRIZE* pdprizeNext;
    struct RAT* pratNext;
    struct RATHOLE* pratholeNext;
    struct ROC* procNext;
    struct ROH* prohNext;
    struct ROST* prostNext;
    struct DART* pdartNext;
    struct SPIRE* pspireNext;
    struct RAIL* prailNext;
    struct LANDING* plandingNext;
    struct LASEN* plasenNext;
    //undefined1* pfeNext;
    struct EXPLSTE* pexplsteNext;
    struct FADER* pfaderNext;
    struct CRFOD* pcrfodNext;
    struct JLOVOL* pjlovolNext;
    struct EMITTER* pemitterNext;
    struct MGCO* pmgcoNext;
    struct JMT* pjmtNext;
    void* pvPrev;
    struct LO* ploPrev;
    struct ALO* paloPrev;
    struct SO* psoPrev;
    struct ASEGA* pasegaPrev;
    struct ACTSEG* pactsegPrev;
    struct AMB* pambPrev;
    struct EXC* pexcPrev;
    struct RIP* pripPrev;
    struct BLIP* pblipPrev;
    struct BLIPG* pblipgPrev;
    struct DZ* pdzPrev;
    struct TARGET* ptargetPrev;
    struct HND* phndPrev;
    struct ACT* pactPrev;
    struct IKH* pikhPrev;
    struct LIGHT* plightPrev;
    struct SHADOW* pshadowPrev;
    struct SHAPE* pshapePrev;
    struct SMA* psmaPrev;
    struct PXR* ppxrPrev;
    struct HSHAPE* phshapePrev;
    struct HPNT* phpntPrev;
    struct HBSK* phbskPrev;
    struct PIPE* ppipePrev;
    struct PATHZONE* ppathzonePrev;
    struct FLY* pflyPrev;
    struct DPRIZE* pdprizePrev;
    struct RAT* pratPrev;
    struct RATHOLE* pratholePrev;
    struct ROC* procPrev;
    struct ROH* prohPrev;
    struct ROST* prostPrev;
    struct DART* pdartPrev;
    struct SPIRE* pspirePrev;
    struct RAIL* prailPrev;
    struct LANDING* plandingPrev;
    struct LASEN* plasenPrev;
    //undefined1* pfePrev;
    struct EXPLSTE* pexplstePrev;
    struct FADER* pfaderPrev;
    struct CRFOD* pcrfodPrev;
    struct JLOVOL* pjlovolPrev;
    struct EMITTER* pemitterPrev;
    struct MGCO* pmgcoPrev;
    struct JMT* pjmtPrev;
};

#endif // DL_H
