#ifndef CSTGGMKACT_HPP_
#define CSTGGMKACT_HPP_

namespace bcs {
    class FVEC3;
}

namespace msw {

    class CBall;
    class CCollBodyUnit;
    class CCollDefUnit;
    class CAtkCollision;
    class CBodyCollision;

    class CStgGmkAct {
        public:
            CStgGmkAct();
            virtual ~CStgGmkAct();
            void OnBallAtkHit(CBall *);
            void OnBallDamage(CBall *);
            void OnBallCatch(CCollBodyUnit*, CBall*);
            void OnBallReflect(const CCollDefUnit*, const CBall*, bcs::FVEC3&, bcs::FVEC3&);
            void OnBallPush(CBall*);
            void RegistAttackHitCallback(CAtkCollision*);
            void RegistBodyPushCallback(CBodyCollision*);
            void RegistBodyDamageCallback(CBodyCollision*);
            void RegistBallCatchCallback(CBodyCollision*);
        protected:
        private:
    };
}

#endif /* !CSTGGMKACT_HPP_ */
