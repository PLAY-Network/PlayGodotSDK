#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingModule_Admin.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_MatchmakingModule_Admin : public godot::Object {
    REG_GCLASS(G_MatchmakingModule_Admin, godot::Object);
#ifdef GODOT4
    static inline G_MatchmakingModule_Admin* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_MatchmakingModule_Admin *get_singleton() {
        return singleton;
    }
    G_MatchmakingModule_Admin() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_MatchmakingModule_Admin() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_MatchmakingModule_Admin::deleteMatchesByAppIdAsync, GCLASS_METHOD_SIGNATURE("deleteMatchesByAppIdAsync", "appIdToRemoveTheMatchesFor", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void deleteMatchesByAppIdAsync(
        godot::String appIdToRemoveTheMatchesFor,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_appIdToRemoveTheMatchesFor;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_appIdToRemoveTheMatchesFor = appIdToRemoveTheMatchesFor;
            cpp_appIdToRemoveTheMatchesFor = std::string(g_appIdToRemoveTheMatchesFor.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule_Admin::DeleteMatchesByAppIdAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_appIdToRemoveTheMatchesFor,
                cpp_cancellationToken
            );
    }
};
