#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementsModule.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetAchievementsResponse.h"
#include "G_GetAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "G_AchievementData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetAchievementsWithUserDataResponse.h"
#include "G_GetAchievementsWithUserDataResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementWithUserData.h"
#include "G_AchievementWithUserData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerAndClaimResponse.h"
#include "G_TriggerAndClaimResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerByIdRequestData.h"
#include "G_TriggerByIdRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerByRequestNameRequestData.h"
#include "G_TriggerByRequestNameRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/ClaimByIdRequestData.h"
#include "G_ClaimByIdRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/ClaimByRequestNameRequestData.h"
#include "G_ClaimByRequestNameRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetProjectAchievementsResponse.h"
#include "G_GetProjectAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetUserAchievementsResponse.h"
#include "G_GetUserAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/UserAchievement.h"
#include "G_UserAchievement.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_AchievementsModule : public godot::Object {
    REG_GCLASS(G_AchievementsModule, godot::Object);
#ifdef GODOT4
    static inline G_AchievementsModule* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_AchievementsModule *get_singleton() {
        return singleton;
    }
    G_AchievementsModule() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_AchievementsModule() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByIdsAsync, GCLASS_METHOD_SIGNATURE("getByIdsAsync", "ids", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByAppIdsAsync, GCLASS_METHOD_SIGNATURE("getByAppIdsAsync", "appIds", "limit", "startAfter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByTagsAsync, GCLASS_METHOD_SIGNATURE("getByTagsAsync", "tags", "limit", "startAfter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getForCurrentAppAsync, GCLASS_METHOD_SIGNATURE("getForCurrentAppAsync", "limit", "startAfter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByAppIdsWithUserDataAsync, GCLASS_METHOD_SIGNATURE("getByAppIdsWithUserDataAsync", "appIds", "limit", "startAfter", "withHistory", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByTagsWithUserDataAsync, GCLASS_METHOD_SIGNATURE("getByTagsWithUserDataAsync", "tags", "limit", "startAfter", "withHistory", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getForCurrentAppWithUserDataAsync, GCLASS_METHOD_SIGNATURE("getForCurrentAppWithUserDataAsync", "limit", "startAfter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByRequestNameAsync, GCLASS_METHOD_SIGNATURE("getByRequestNameAsync", "requestName", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getByRequestNamesAsync, GCLASS_METHOD_SIGNATURE("getByRequestNamesAsync", "requestNames", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::triggerByIdAsync, GCLASS_METHOD_SIGNATURE("triggerByIdAsync", "id", "progress", "cancellationToken", "onSuccess", "onFail"), DEFVAL(1), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::triggerByRequestNameAsync, GCLASS_METHOD_SIGNATURE("triggerByRequestNameAsync", "requestName", "progress", "cancellationToken", "onSuccess", "onFail"), DEFVAL(1), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::claimByIdAsync, GCLASS_METHOD_SIGNATURE("claimByIdAsync", "achievementId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::claimByRequestNameAsync, GCLASS_METHOD_SIGNATURE("claimByRequestNameAsync", "requestName", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getProjectAchievementsAsync, GCLASS_METHOD_SIGNATURE("getProjectAchievementsAsync", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getUserAchievementsAsync, GCLASS_METHOD_SIGNATURE("getUserAchievementsAsync", "userId", "withHistory", "startAfter", "limit", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(false), DEFVAL((int64_t)9223372036854775807), DEFVAL(2147483647), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_AchievementsModule::getUserAchievementByIdAsync, GCLASS_METHOD_SIGNATURE("getUserAchievementByIdAsync", "achievementId", "userId", "withHistory", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void getByIdsAsync(
        godot::Array ids,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_ids;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_ids = ids;
            for (int i = 0; i < g_cpp_ids.size(); ++i) {
                godot::String g_cpp_ids_item = g_cpp_ids[i];
                string cpp_ids_item;
                godot::String g_g_cpp_ids_item = g_cpp_ids_item;
                cpp_ids_item = std::string(g_g_cpp_ids_item.utf8().get_data());
                cpp_ids.push_back(cpp_ids_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByIdsAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_ids,
                cpp_cancellationToken
            );
    }
    void getByAppIdsAsync(
        godot::Array appIds,
        int32_t limit,
        godot::String startAfter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_appIds = appIds;
            for (int i = 0; i < g_cpp_appIds.size(); ++i) {
                godot::String g_cpp_appIds_item = g_cpp_appIds[i];
                string cpp_appIds_item;
                godot::String g_g_cpp_appIds_item = g_cpp_appIds_item;
                cpp_appIds_item = std::string(g_g_cpp_appIds_item.utf8().get_data());
                cpp_appIds.push_back(cpp_appIds_item);
            }
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken
            );
    }
    void getByTagsAsync(
        godot::Array tags,
        int32_t limit,
        int64_t startAfter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_tags;
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByTagsAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_tags,
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken
            );
    }
    void getForCurrentAppAsync(
        int32_t limit,
        godot::String startAfter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            RGN::CancellationToken cpp_cancellationToken;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken
            );
    }
    void getByAppIdsWithUserDataAsync(
        godot::Array appIds,
        int32_t limit,
        godot::String startAfter,
        bool withHistory,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_withHistory;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_appIds = appIds;
            for (int i = 0; i < g_cpp_appIds.size(); ++i) {
                godot::String g_cpp_appIds_item = g_cpp_appIds[i];
                string cpp_appIds_item;
                godot::String g_g_cpp_appIds_item = g_cpp_appIds_item;
                cpp_appIds_item = std::string(g_g_cpp_appIds_item.utf8().get_data());
                cpp_appIds.push_back(cpp_appIds_item);
            }
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            bool g_withHistory = withHistory;
            cpp_withHistory = g_withHistory;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByAppIdsWithUserDataAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementWithUserData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementWithUserData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_withHistory,
                cpp_cancellationToken
            );
    }
    void getByTagsWithUserDataAsync(
        godot::Array tags,
        int32_t limit,
        int64_t startAfter,
        bool withHistory,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_tags;
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_withHistory;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            bool g_withHistory = withHistory;
            cpp_withHistory = g_withHistory;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByTagsWithUserDataAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementWithUserData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementWithUserData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_tags,
                cpp_limit,
                cpp_startAfter,
                cpp_withHistory,
                cpp_cancellationToken
            );
    }
    void getForCurrentAppWithUserDataAsync(
        int32_t limit,
        godot::String startAfter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            RGN::CancellationToken cpp_cancellationToken;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetForCurrentAppWithUserDataAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementWithUserData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementWithUserData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken
            );
    }
    void getByRequestNameAsync(
        godot::String requestName,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_requestName;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_requestName = requestName;
            cpp_requestName = std::string(g_requestName.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByRequestNameAsync(
                [onSuccess](RGN::Modules::Achievement::AchievementData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_AchievementData::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_requestName,
                cpp_cancellationToken
            );
    }
    void getByRequestNamesAsync(
        godot::Array requestNames,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_requestNames;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_requestNames = requestNames;
            for (int i = 0; i < g_cpp_requestNames.size(); ++i) {
                godot::String g_cpp_requestNames_item = g_cpp_requestNames[i];
                string cpp_requestNames_item;
                godot::String g_g_cpp_requestNames_item = g_cpp_requestNames_item;
                cpp_requestNames_item = std::string(g_g_cpp_requestNames_item.utf8().get_data());
                cpp_requestNames.push_back(cpp_requestNames_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetByRequestNamesAsync(
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_AchievementData::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_requestNames,
                cpp_cancellationToken
            );
    }
    void triggerByIdAsync(
        godot::String id,
        int32_t progress,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_id;
            int32_t cpp_progress;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_id = id;
            cpp_id = std::string(g_id.utf8().get_data());
            int32_t g_progress = progress;
            cpp_progress = g_progress;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::TriggerByIdAsync(
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_TriggerAndClaimResponse::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_id,
                cpp_progress,
                cpp_cancellationToken
            );
    }
    void triggerByRequestNameAsync(
        godot::String requestName,
        int32_t progress,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_requestName;
            int32_t cpp_progress;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_requestName = requestName;
            cpp_requestName = std::string(g_requestName.utf8().get_data());
            int32_t g_progress = progress;
            cpp_progress = g_progress;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::TriggerByRequestNameAsync(
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_TriggerAndClaimResponse::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_requestName,
                cpp_progress,
                cpp_cancellationToken
            );
    }
    void claimByIdAsync(
        godot::String achievementId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::ClaimByIdAsync(
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_TriggerAndClaimResponse::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
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
    void claimByRequestNameAsync(
        godot::String requestName,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_requestName;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_requestName = requestName;
            cpp_requestName = std::string(g_requestName.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::ClaimByRequestNameAsync(
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_TriggerAndClaimResponse::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_requestName,
                cpp_cancellationToken
            );
    }
    void getProjectAchievementsAsync(
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::CancellationToken cpp_cancellationToken;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetProjectAchievementsAsync(
                [onSuccess](RGN::Modules::Achievement::GetProjectAchievementsResponse response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_GetProjectAchievementsResponse::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_cancellationToken
            );
    }
    void getUserAchievementsAsync(
        godot::String userId,
        bool withHistory,
        int64_t startAfter,
        int32_t limit,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_userId;
            bool cpp_withHistory;
            int64_t cpp_startAfter;
            int32_t cpp_limit;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            bool g_withHistory = withHistory;
            cpp_withHistory = g_withHistory;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetUserAchievementsAsync(
                [onSuccess](vector<RGN::Modules::Achievement::UserAchievement> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_UserAchievement::ConvertToGodotModel(response_item, g_g_response_item);
                        g_response_item = g_g_response_item;
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_userId,
                cpp_withHistory,
                cpp_startAfter,
                cpp_limit,
                cpp_cancellationToken
            );
    }
    void getUserAchievementByIdAsync(
        godot::String achievementId,
        godot::String userId,
        bool withHistory,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_achievementId;
            string cpp_userId;
            bool cpp_withHistory;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_achievementId = achievementId;
            cpp_achievementId = std::string(g_achievementId.utf8().get_data());
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            bool g_withHistory = withHistory;
            cpp_withHistory = g_withHistory;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Achievement::AchievementsModule::GetUserAchievementByIdAsync(
                [onSuccess](RGN::Modules::Achievement::UserAchievement response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_UserAchievement::ConvertToGodotModel(response, g_gResponse);
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_achievementId,
                cpp_userId,
                cpp_withHistory,
                cpp_cancellationToken
            );
    }
};
