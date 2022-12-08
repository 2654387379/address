#pragma once
#include <cstdint>

// 2022-11-19 11:00:16.742708200 UTC

namespace hazedumper {
constexpr ::std::int64_t timestamp = 1668855616;
namespace netvars {
constexpr ::std::ptrdiff_t m_iHealth=0x100;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
constexpr ::std::ptrdiff_t m_fFlags = 0x104;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
  
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t dwClientState = 0x59f194;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
constexpr ::std::ptrdiff_t dwEntityList = 0x4dfde84;
constexpr ::std::ptrdiff_t dwForceAttack = 0x322bc8c;
constexpr ::std::ptrdiff_t dwForceBackward = 0x322bcc8;
constexpr ::std::ptrdiff_t dwForceForward = 0x322bcbc;
constexpr ::std::ptrdiff_t dwForceJump = 0x52b9c0c;
constexpr ::std::ptrdiff_t dwForceLeft = 0x322bcd4;
constexpr ::std::ptrdiff_t dwForceRight = 0x322bce0;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xde8964;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xDCF92;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4deecb4;
constexpr ::std::ptrdiff_t m_bDormant = 0xED;
} // namespace signatures
} // namespace hazedumper
Footer
