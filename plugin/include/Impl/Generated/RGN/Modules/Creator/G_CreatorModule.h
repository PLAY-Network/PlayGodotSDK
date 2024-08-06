#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorModule.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSignupResponseData.h"
#include "G_CreatorSignupResponseData.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSignupRequestData.h"
#include "G_CreatorSignupRequestData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../VirtualItems/G_VirtualItem.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSubmitItemResponseData.h"
#include "G_CreatorSubmitItemResponseData.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSubmitItemRequestData.h"
#include "G_CreatorSubmitItemRequestData.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorData.h"
#include "G_CreatorData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/G_BaseMigrationRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/ClaimCurrencyResponseData.h"
#include "../Currency/G_ClaimCurrencyResponseData.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_CreatorModule : public godot::Object {
    REG_GCLASS(G_CreatorModule, godot::Object);
#ifdef GODOT4
    static inline G_CreatorModule* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_CreatorModule *get_singleton() {
        return singleton;
    }
    G_CreatorModule() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_CreatorModule() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_CreatorModule::becomeACreatorAsync, GCLASS_METHOD_SIGNATURE("becomeACreatorAsync", "brandName", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_CreatorModule::submitItemAsync, GCLASS_METHOD_SIGNATURE("submitItemAsync", "customizedItem", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_CreatorModule::getCreatorDataAsync, GCLASS_METHOD_SIGNATURE("getCreatorDataAsync", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_CreatorModule::claimCurrenciesAsync, GCLASS_METHOD_SIGNATURE("claimCurrenciesAsync", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void becomeACreatorAsync(
        godot::String brandName,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_brandName;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_brandName = brandName;
            cpp_brandName = std::string(g_brandName.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Creator::CreatorModule::BecomeACreatorAsync(
                [onSuccess](RGN::Modules::Creator::CreatorSignupResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_CreatorSignupResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_brandName,
                cpp_cancellationToken
            );
    }
    void submitItemAsync(
        godot::Dictionary customizedItem,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::Modules::VirtualItems::VirtualItem cpp_customizedItem;
            RGN::CancellationToken cpp_cancellationToken;
            G_VirtualItem::ConvertToCoreModel(customizedItem, cpp_customizedItem);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Creator::CreatorModule::SubmitItemAsync(
                [onSuccess](RGN::Modules::Creator::CreatorSubmitItemResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_CreatorSubmitItemResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_customizedItem,
                cpp_cancellationToken
            );
    }
    void getCreatorDataAsync(
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::CancellationToken cpp_cancellationToken;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Creator::CreatorModule::GetCreatorDataAsync(
                [onSuccess](RGN::Modules::Creator::CreatorData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_CreatorData::ConvertToGodotModel(response, g_gResponse);
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
    void claimCurrenciesAsync(
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::CancellationToken cpp_cancellationToken;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Creator::CreatorModule::ClaimCurrenciesAsync(
                [onSuccess](RGN::Modules::Currency::ClaimCurrencyResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_ClaimCurrencyResponseData::ConvertToGodotModel(response, g_gResponse);
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
};
