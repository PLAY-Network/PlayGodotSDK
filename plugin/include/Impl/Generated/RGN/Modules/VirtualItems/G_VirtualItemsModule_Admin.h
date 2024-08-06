#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItemsModule_Admin.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_VirtualItemsModule_Admin : public godot::Object {
    REG_GCLASS(G_VirtualItemsModule_Admin, godot::Object);
#ifdef GODOT4
    static inline G_VirtualItemsModule_Admin* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_VirtualItemsModule_Admin *get_singleton() {
        return singleton;
    }
    G_VirtualItemsModule_Admin() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_VirtualItemsModule_Admin() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_VirtualItemsModule_Admin::deleteVirtualItemsByIdsAsync, GCLASS_METHOD_SIGNATURE("deleteVirtualItemsByIdsAsync", "virtualItemIds", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_VirtualItemsModule_Admin::deleteVirtualItemsByNameAsync, GCLASS_METHOD_SIGNATURE("deleteVirtualItemsByNameAsync", "itemName", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_VirtualItemsModule_Admin::deleteVirtualItemByAppIdAsync, GCLASS_METHOD_SIGNATURE("deleteVirtualItemByAppIdAsync", "appId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_VirtualItemsModule_Admin::addFromCSVWithBlockchainStubAsync, GCLASS_METHOD_SIGNATURE("addFromCSVWithBlockchainStubAsync", "virtualItemName", "csvContent", "csvDelimiter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(","), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void deleteVirtualItemsByIdsAsync(
        godot::Array virtualItemIds,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_virtualItemIds;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_virtualItemIds = virtualItemIds;
            for (int i = 0; i < g_cpp_virtualItemIds.size(); ++i) {
                godot::String g_cpp_virtualItemIds_item = g_cpp_virtualItemIds[i];
                string cpp_virtualItemIds_item;
                godot::String g_g_cpp_virtualItemIds_item = g_cpp_virtualItemIds_item;
                cpp_virtualItemIds_item = std::string(g_g_cpp_virtualItemIds_item.utf8().get_data());
                cpp_virtualItemIds.push_back(cpp_virtualItemIds_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemsByIdsAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_virtualItemIds,
                cpp_cancellationToken
            );
    }
    void deleteVirtualItemsByNameAsync(
        godot::String itemName,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_itemName;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_itemName = itemName;
            cpp_itemName = std::string(g_itemName.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemsByNameAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_itemName,
                cpp_cancellationToken
            );
    }
    void deleteVirtualItemByAppIdAsync(
        godot::String appId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_appId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemByAppIdAsync(
                [onSuccess]() {
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_appId,
                cpp_cancellationToken
            );
    }
    void addFromCSVWithBlockchainStubAsync(
        godot::String virtualItemName,
        godot::String csvContent,
        godot::String csvDelimiter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_virtualItemName;
            string cpp_csvContent;
            string cpp_csvDelimiter;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_virtualItemName = virtualItemName;
            cpp_virtualItemName = std::string(g_virtualItemName.utf8().get_data());
            godot::String g_csvContent = csvContent;
            cpp_csvContent = std::string(g_csvContent.utf8().get_data());
            godot::String g_csvDelimiter = csvDelimiter;
            cpp_csvDelimiter = std::string(g_csvDelimiter.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::AddFromCSVWithBlockchainStubAsync(
                [onSuccess](vector<string> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::String g_response_item;
                        g_response_item = godot::String(response_item.c_str());
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
                cpp_virtualItemName,
                cpp_csvContent,
                cpp_csvDelimiter,
                cpp_cancellationToken
            );
    }
};
