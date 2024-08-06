#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreModule_Admin.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/G_PriceInfo.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_StoreModule_Admin : public godot::Object {
    REG_GCLASS(G_StoreModule_Admin, godot::Object);
#ifdef GODOT4
    static inline G_StoreModule_Admin* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_StoreModule_Admin *get_singleton() {
        return singleton;
    }
    G_StoreModule_Admin() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_StoreModule_Admin() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule_Admin::createLootBoxAsync, GCLASS_METHOD_SIGNATURE("createLootBoxAsync", "lootBoxName", "virtualItemTags", "prices", "cancellationToken", "onSuccess", "onFail"), DEFVAL(godot::Array()), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule_Admin::deleteLootBoxAsync, GCLASS_METHOD_SIGNATURE("deleteLootBoxAsync", "lootBoxId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule_Admin::deleteStoreOfferAsync, GCLASS_METHOD_SIGNATURE("deleteStoreOfferAsync", "offerId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void createLootBoxAsync(
        godot::String lootBoxName,
        godot::Array virtualItemTags,
        godot::Array prices,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_lootBoxName;
            vector<string> cpp_virtualItemTags;
            vector<RGN::Modules::VirtualItems::PriceInfo> cpp_prices;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_lootBoxName = lootBoxName;
            cpp_lootBoxName = std::string(g_lootBoxName.utf8().get_data());
            godot::Array g_cpp_virtualItemTags = virtualItemTags;
            for (int i = 0; i < g_cpp_virtualItemTags.size(); ++i) {
                godot::String g_cpp_virtualItemTags_item = g_cpp_virtualItemTags[i];
                string cpp_virtualItemTags_item;
                godot::String g_g_cpp_virtualItemTags_item = g_cpp_virtualItemTags_item;
                cpp_virtualItemTags_item = std::string(g_g_cpp_virtualItemTags_item.utf8().get_data());
                cpp_virtualItemTags.push_back(cpp_virtualItemTags_item);
            }
            godot::Array g_cpp_prices = prices;
            for (int i = 0; i < g_cpp_prices.size(); ++i) {
                godot::Dictionary g_cpp_prices_item = g_cpp_prices[i];
                RGN::Modules::VirtualItems::PriceInfo cpp_prices_item;
                G_PriceInfo::ConvertToCoreModel(g_cpp_prices_item, cpp_prices_item);
                cpp_prices.push_back(cpp_prices_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule_Admin::CreateLootBoxAsync(
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
                cpp_lootBoxName,
                cpp_virtualItemTags,
                cpp_prices,
                cpp_cancellationToken
            );
    }
    void deleteLootBoxAsync(
        godot::String lootBoxId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_lootBoxId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_lootBoxId = lootBoxId;
            cpp_lootBoxId = std::string(g_lootBoxId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule_Admin::DeleteLootBoxAsync(
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
                cpp_lootBoxId,
                cpp_cancellationToken
            );
    }
    void deleteStoreOfferAsync(
        godot::String offerId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule_Admin::DeleteStoreOfferAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_offerId,
                cpp_cancellationToken
            );
    }
};
