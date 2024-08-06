#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardModule_Admin.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardData.h"
#include "G_LeaderboardData.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_LeaderboardModule_Admin : public godot::Object {
    REG_GCLASS(G_LeaderboardModule_Admin, godot::Object);
#ifdef GODOT4
    static inline G_LeaderboardModule_Admin* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_LeaderboardModule_Admin *get_singleton() {
        return singleton;
    }
    G_LeaderboardModule_Admin() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_LeaderboardModule_Admin() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_LeaderboardModule_Admin::addLeaderboardAsync, GCLASS_METHOD_SIGNATURE("addLeaderboardAsync", "leaderboardData", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_LeaderboardModule_Admin::updateLeaderboardAsync, GCLASS_METHOD_SIGNATURE("updateLeaderboardAsync", "leaderboardData", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_LeaderboardModule_Admin::deleteLeaderboardAsync, GCLASS_METHOD_SIGNATURE("deleteLeaderboardAsync", "leaderboardId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void addLeaderboardAsync(
        godot::Dictionary leaderboardData,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Leaderboard::LeaderboardData cpp_leaderboardData;
            RGN::CancellationToken cpp_cancellationToken;
            G_LeaderboardData::ConvertToCoreModel(leaderboardData, cpp_leaderboardData);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Leaderboard::LeaderboardModule_Admin::AddLeaderboardAsync(
                [onSuccess](RGN::Modules::Leaderboard::LeaderboardData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_LeaderboardData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_leaderboardData,
                cpp_cancellationToken
            );
    }
    void updateLeaderboardAsync(
        godot::Dictionary leaderboardData,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::Leaderboard::LeaderboardData cpp_leaderboardData;
            RGN::CancellationToken cpp_cancellationToken;
            G_LeaderboardData::ConvertToCoreModel(leaderboardData, cpp_leaderboardData);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Leaderboard::LeaderboardModule_Admin::UpdateLeaderboardAsync(
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
                cpp_leaderboardData,
                cpp_cancellationToken
            );
    }
    void deleteLeaderboardAsync(
        godot::String leaderboardId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_leaderboardId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_leaderboardId = leaderboardId;
            cpp_leaderboardId = std::string(g_leaderboardId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Leaderboard::LeaderboardModule_Admin::DeleteLeaderboardAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_leaderboardId,
                cpp_cancellationToken
            );
    }
};
