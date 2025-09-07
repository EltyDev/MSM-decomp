#include "game/msw/CStgGmkAct.hpp"

msw::CStgGmkAct::CStgGmkAct()
{
}

msw::CStgGmkAct::~CStgGmkAct()
{
}

void msw::CStgGmkAct::OnBallAtkHit(CBall *ball)
{
    (void)ball;
}

void msw::CStgGmkAct::OnBallDamage(CBall *ball)
{
    (void)ball;
}

void msw::CStgGmkAct::OnBallCatch(CCollBodyUnit* body, CBall *ball)
{
    (void)body;
    (void)ball;
}

void msw::CStgGmkAct::OnBallReflect(const CCollDefUnit* def, const CBall *ball, bcs::FVEC3& vec1, bcs::FVEC3& vec2)
{
    (void)def;
    (void)ball;
    (void)vec1;
    (void)vec2;
}

void msw::CStgGmkAct::OnBallPush(CBall *ball)
{
    (void)ball;
}

void msw::CStgGmkAct::RegistAttackHitCallback(CAtkCollision* atk)
{
    (void)atk;
}

void msw::CStgGmkAct::RegistBodyPushCallback(CBodyCollision* body)
{
    (void)body;
}

void msw::CStgGmkAct::RegistBodyDamageCallback(CBodyCollision* body)
{
    (void)body;
}

void msw::CStgGmkAct::RegistBallCatchCallback(CBodyCollision* body)
{
    (void)body;
}
