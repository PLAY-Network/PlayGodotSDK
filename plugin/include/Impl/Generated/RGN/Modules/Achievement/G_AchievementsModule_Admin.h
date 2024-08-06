#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementsModule_Admin.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "G_AchievementData.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_AchievementsModule_Admin : public godot::Object {
    REG_GCLASS(G_AchievementsModule_Admin, godot::Object);
#ifdef GODOT4
    static inline G_AchievementsModule_Admin* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_AchievementsModule_Admin *get_singleton() {
        return singleton;
    }
    G_AchievementsModule_Admin() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_AchievementsModule_Admin() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::addAchievementAsync, GCLASS_METHOD_SIGNATURE("addAchievementAsync", "achievementData", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::updateAchievementAsync, GCLASS_METHOD_SIGNATURE("updateAchievementAsync", "achievementData", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::deleteAchievementAsync, GCLASS_METHOD_SIGNATURE("deleteAchievementAsync", "achievementId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::addLoginDaysInRowAchievementAsync_AchievementId_DaysInRow_CancellationToken, GCLASS_METHOD_SIGNATURE("addLoginDaysInRowAchievementAsync_AchievementId_DaysInRow_CancellationToken", "achievementId", "daysInRow", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::addLoginDaysInRowAchievementAsync_AchievementData_DaysInRow_CancellationToken, GCLASS_METHOD_SIGNATURE("addLoginDaysInRowAchievementAsync_AchievementData_DaysInRow_CancellationToken", "achievementData", "daysInRow", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::deleteLoginDaysInRowGameConstRecordAsync, GCLASS_METHOD_SIGNATURE("deleteLoginDaysInRowGameConstRecordAsync", "achievementId", "daysInRow", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::addPlayerProgressAchievementAsync_AchievementId_PlayerProgressFieldName_PlayerProgressFieldValueToReach_CancellationToken, GCLASS_METHOD_SIGNATURE("addPlayerProgressAchievementAsync_AchievementId_PlayerProgressFieldName_PlayerProgressFieldValueToReach_CancellationToken", "achievementId", "playerProgressFieldName", "playerProgressFieldValueToReach", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::addPlayerProgressAchievementAsync_AchievementData_PlayerProgressFieldName_PlayerProgressFieldValueToReach_CancellationToken, GCLASS_METHOD_SIGNATURE("addPlayerProgressAchievementAsync_AchievementData_PlayerProgressFieldName_PlayerProgressFieldValueToReach_CancellationToken", "achievementData", "playerProgressFieldName", "playerProgressFieldValueToReach", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::deletePlayerProgressAchievementAsync, GCLASS_METHOD_SIGNATURE("deletePlayerProgressAchievementAsync", "achievementId", "playerProgressFieldName", "playerProgressFieldValueToReach", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::addPurchaseAchievementAsync, GCLASS_METHOD_SIGNATURE("addPurchaseAchievementAsync", "achievementData", "virtualItemTag", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule_Admin::deletePurchaseGameConstRecordAsync, GCLASS_METHOD_SIGNATURE("deletePurchaseGameConstRecordAsync", "achievementId", "virtualItemTag", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void addAchievementAsync(
        godot::Dictionary achievementData,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            RGN::CancellationToken cpp_cancellationToken;
            G_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddAchievementAsync(
                [onSuccess](string response) {
                    godot::Array gArgs;
                    godot::String gResponse;
                    gResponse = godot::String(response.c_str());
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementData,
                cpp_cancellationToken
            );
    }
    void updateAchievementAsync(
        godot::Dictionary achievementData,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            RGN::CancellationToken cpp_cancellationToken;
            G_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::UpdateAchievementAsync(
                [onSuccess](string response) {
                    godot::Array gArgs;
                    godot::String gResponse;
                    gResponse = godot::String(response.c_str());
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementData,
                cpp_cancellationToken
            );
    }
    void deleteAchievementAsync(
        godot::String achievementId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::DeleteAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_cancellationToken
            );
    }
    void addLoginDaysInRowAchievementAsync_AchievementId_DaysInRow_CancellationToken(
        godot::String achievementId,
        int32_t daysInRow,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            int32_t cpp_daysInRow;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            int32_t g_daysInRow = daysInRow;
            cpp_daysInRow = g_daysInRow;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddLoginDaysInRowAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_daysInRow,
                cpp_cancellationToken
            );
    }
    void addLoginDaysInRowAchievementAsync_AchievementData_DaysInRow_CancellationToken(
        godot::Dictionary achievementData,
        int32_t daysInRow,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            int32_t cpp_daysInRow;
            RGN::CancellationToken cpp_cancellationToken;
            G_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            int32_t g_daysInRow = daysInRow;
            cpp_daysInRow = g_daysInRow;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddLoginDaysInRowAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementData,
                cpp_daysInRow,
                cpp_cancellationToken
            );
    }
    void deleteLoginDaysInRowGameConstRecordAsync(
        godot::String achievementId,
        int32_t daysInRow,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            int32_t cpp_daysInRow;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            int32_t g_daysInRow = daysInRow;
            cpp_daysInRow = g_daysInRow;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::DeleteLoginDaysInRowGameConstRecordAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_daysInRow,
                cpp_cancellationToken
            );
    }
    void addPlayerProgressAchievementAsync_AchievementId_PlayerProgressFieldName_PlayerProgressFieldValueToReach_CancellationToken(
        godot::String achievementId,
        godot::String playerProgressFieldName,
        int64_t playerProgressFieldValueToReach,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            string cpp_playerProgressFieldName;
            int64_t cpp_playerProgressFieldValueToReach;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            godot::String g_playerProgressFieldName = playerProgressFieldName;
            cpp_playerProgressFieldName = std::string(g_playerProgressFieldName.utf8().get_data());
            int64_t g_playerProgressFieldValueToReach = playerProgressFieldValueToReach;
            cpp_playerProgressFieldValueToReach = g_playerProgressFieldValueToReach;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddPlayerProgressAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_playerProgressFieldName,
                cpp_playerProgressFieldValueToReach,
                cpp_cancellationToken
            );
    }
    void addPlayerProgressAchievementAsync_AchievementData_PlayerProgressFieldName_PlayerProgressFieldValueToReach_CancellationToken(
        godot::Dictionary achievementData,
        godot::String playerProgressFieldName,
        int64_t playerProgressFieldValueToReach,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            string cpp_playerProgressFieldName;
            int64_t cpp_playerProgressFieldValueToReach;
            RGN::CancellationToken cpp_cancellationToken;
            G_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            godot::String g_playerProgressFieldName = playerProgressFieldName;
            cpp_playerProgressFieldName = std::string(g_playerProgressFieldName.utf8().get_data());
            int64_t g_playerProgressFieldValueToReach = playerProgressFieldValueToReach;
            cpp_playerProgressFieldValueToReach = g_playerProgressFieldValueToReach;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddPlayerProgressAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementData,
                cpp_playerProgressFieldName,
                cpp_playerProgressFieldValueToReach,
                cpp_cancellationToken
            );
    }
    void deletePlayerProgressAchievementAsync(
        godot::String achievementId,
        godot::String playerProgressFieldName,
        int64_t playerProgressFieldValueToReach,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            string cpp_playerProgressFieldName;
            int64_t cpp_playerProgressFieldValueToReach;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            godot::String g_playerProgressFieldName = playerProgressFieldName;
            cpp_playerProgressFieldName = std::string(g_playerProgressFieldName.utf8().get_data());
            int64_t g_playerProgressFieldValueToReach = playerProgressFieldValueToReach;
            cpp_playerProgressFieldValueToReach = g_playerProgressFieldValueToReach;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::DeletePlayerProgressAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_playerProgressFieldName,
                cpp_playerProgressFieldValueToReach,
                cpp_cancellationToken
            );
    }
    void addPurchaseAchievementAsync(
        godot::Dictionary achievementData,
        godot::String virtualItemTag,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            string cpp_virtualItemTag;
            RGN::CancellationToken cpp_cancellationToken;
            G_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            godot::String g_virtualItemTag = virtualItemTag;
            cpp_virtualItemTag = std::string(g_virtualItemTag.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddPurchaseAchievementAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementData,
                cpp_virtualItemTag,
                cpp_cancellationToken
            );
    }
    void deletePurchaseGameConstRecordAsync(
        godot::String achievementId,
        godot::String virtualItemTag,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            string cpp_virtualItemTag;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            godot::String g_virtualItemTag = virtualItemTag;
            cpp_virtualItemTag = std::string(g_virtualItemTag.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule_Admin::DeletePurchaseGameConstRecordAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_virtualItemTag,
                cpp_cancellationToken
            );
    }
};
