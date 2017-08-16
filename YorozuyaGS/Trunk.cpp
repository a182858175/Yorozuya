#include "stdafx.h"

#include "Trunk.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CTrunk::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::pc_TrunkAlterItemSlotRequest, &CTrunk::pc_TrunkAlterItemSlotRequest);
            core.set_hook(&ATF::CPlayer::pc_TrunkResDivision, &CTrunk::pc_TrunkResDivision);
            core.set_hook(&ATF::CPlayer::pc_TrunkPotionDivision, &CTrunk::pc_TrunkPotionDivision);
            core.set_hook(&ATF::CPlayer::pc_TrunkIoMergeRequest, &CTrunk::pc_TrunkIoMergeRequest);
        }

        void CTrunk::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::pc_TrunkAlterItemSlotRequest);
            core.unset_hook(&ATF::CPlayer::pc_TrunkResDivision);
            core.unset_hook(&ATF::CPlayer::pc_TrunkPotionDivision);
            core.unset_hook(&ATF::CPlayer::pc_TrunkIoMergeRequest);
        }

        void CTrunk::loop()
        {
        }

        ModuleVersion_t CTrunk::get_version()
        {
            return usVersion;
        }

        ModuleName_t CTrunk::get_name()
        {
            static const ModuleName_t name = "fix_Trunk";
            return name;
        }

        void CTrunk::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CTrunk::check_item_race(
            ATF::CPlayer *pPlayer,
            unsigned int dwItemSerial,
            char byStorageIndex)
        {
            bool result = false;

            do 
            {
                auto item = pPlayer->m_Param.m_pStoragePtr[byStorageIndex]->GetPtrFromSerial(dwItemSerial);

                if (item == nullptr)
                    break;

                int nItemRace = -1;
                if (byStorageIndex == ATF::STORAGE_POS::TRUNK)
                {
                    nItemRace = pPlayer->m_Param.m_dbTrunk.m_byItemSlotRace[item->m_byStorageIndex];
                }
                else if (byStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    nItemRace = pPlayer->m_Param.m_dbExtTrunk.m_byItemSlotRace[item->m_byStorageIndex];
                }

                result = pPlayer->vfptr->GetObjRace(pPlayer) == nItemRace;
            } while (false);

            return result;
        }

        void WINAPIV CTrunk::pc_TrunkAlterItemSlotRequest(
            ATF::CPlayer *pPlayer,
            unsigned int dwItemSerial,
            char byClientSlotIndex, 
            char byStorageIndex,
            ATF::Info::CPlayerpc_TrunkAlterItemSlotRequest1963_ptr next)
        {
            if (CTrunk::check_item_race(pPlayer, dwItemSerial, byStorageIndex))
            {
                next(pPlayer, dwItemSerial, byClientSlotIndex, byStorageIndex);
            }
            else
            {
                pPlayer->SendMsg_TrunkIoResult(1, 44, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CTrunk::pc_TrunkResDivision(
            ATF::CPlayer *pPlayer,
            uint16_t wStartSerial, 
            uint16_t wTarSerial,
            uint16_t wMoveAmount, 
            char byStorageIndex,
            ATF::Info::CPlayerpc_TrunkResDivision1989_ptr next)
        {
            if (CTrunk::check_item_race(pPlayer, wStartSerial, byStorageIndex) &&
                CTrunk::check_item_race(pPlayer, wTarSerial, byStorageIndex))
            {
                next(pPlayer, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex);
            }
            else
            {
                pPlayer->SendMsg_TrunkIoResult(1, 44, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CTrunk::pc_TrunkPotionDivision(
            ATF::CPlayer *pPlayer,
            uint16_t wStartSerial,
            uint16_t wTarSerial,
            uint16_t wMoveAmount, 
            char byStorageIndex, 
            ATF::Info::CPlayerpc_TrunkPotionDivision1985_ptr next)
        {
            if (CTrunk::check_item_race(pPlayer, wStartSerial, byStorageIndex) &&
                CTrunk::check_item_race(pPlayer, wTarSerial, byStorageIndex))
            {
                next(pPlayer, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex);
            }
            else
            {
                pPlayer->SendMsg_TrunkIoResult(1, 44, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CTrunk::pc_TrunkIoMergeRequest(
            ATF::CPlayer *pPlayer,
            char byStartStorageIndex, 
            char byTarStorageIndex, 
            uint16_t wStartItemSerial, 
            uint16_t wTarItemSerial, 
            uint16_t wMoveAmount, 
            ATF::Info::CPlayerpc_TrunkIoMergeRequest1977_ptr next)
        {
            bool succeeded = false;

            do 
            {
                if (byStartStorageIndex == ATF::STORAGE_POS::TRUNK || 
                    byStartStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CTrunk::check_item_race(pPlayer, wStartItemSerial, byStartStorageIndex))
                        break;
                }
                
                if (byTarStorageIndex == ATF::STORAGE_POS::TRUNK ||
                    byTarStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CTrunk::check_item_race(pPlayer, wTarItemSerial, byTarStorageIndex))
                        break;
                }

                succeeded = true;
                next(pPlayer, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial, wMoveAmount);
            } while (false);
            
            if (!succeeded)
            {
                pPlayer->SendMsg_TrunkIoResult(1, 44, pPlayer->m_Param.GetDalant(), 0);
            }
        }
    }
}