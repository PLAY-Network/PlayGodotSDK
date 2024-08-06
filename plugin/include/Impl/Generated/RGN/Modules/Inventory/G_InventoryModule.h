#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryModule.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/Properties.h"
#include "../VirtualItems/G_Properties.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddToInventoryResponseData.h"
#include "G_AddToInventoryResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "G_InventoryItemData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddVirtualItemToUserInventoryRequestData.h"
#include "G_AddVirtualItemToUserInventoryRequestData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/RemoveByVirtualItemIdResponseData.h"
#include "G_RemoveByVirtualItemIdResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/RemoveByOwnedIdResponseData.h"
#include "G_RemoveByOwnedIdResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/UpgradesResponseData.h"
#include "G_UpgradesResponseData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/G_Currency.h"
#include "../../../../../Generated/RGN/Modules/Inventory/VirtualItemUpgrade.h"
#include "G_VirtualItemUpgrade.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemsWithVirtualItemsData.h"
#include "G_InventoryItemsWithVirtualItemsData.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_InventoryModule : public godot::Object {
    REG_GCLASS(G_InventoryModule, godot::Object);
#ifdef GODOT4
    static inline G_InventoryModule* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_InventoryModule *get_singleton() {
        return singleton;
    }
    G_InventoryModule() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_InventoryModule() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::addToInventoryAsync_VirtualItemId_Quantity_Properties_CancellationToken, GCLASS_METHOD_SIGNATURE("addToInventoryAsync_VirtualItemId_Quantity_Properties_CancellationToken", "virtualItemId", "quantity", "properties", "cancellationToken", "onSuccess", "onFail"), DEFVAL(1), DEFVAL(godot::Dictionary()), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::addToInventoryAsync_UserId_VirtualItemId_Quantity_Properties_CancellationToken, GCLASS_METHOD_SIGNATURE("addToInventoryAsync_UserId_VirtualItemId_Quantity_Properties_CancellationToken", "userId", "virtualItemId", "quantity", "properties", "cancellationToken", "onSuccess", "onFail"), DEFVAL(1), DEFVAL(godot::Dictionary()), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::addToInventoryAsync_UserId_InventoryData_CancellationToken, GCLASS_METHOD_SIGNATURE("addToInventoryAsync_UserId_InventoryData_CancellationToken", "userId", "inventoryData", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::removeByVirtualItemIdAsync, GCLASS_METHOD_SIGNATURE("removeByVirtualItemIdAsync", "userId", "virtualItemId", "quantity", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::removeByInventoryItemIdAsync, GCLASS_METHOD_SIGNATURE("removeByInventoryItemIdAsync", "userId", "ownedItemId", "quantity", "cancellationToken", "onSuccess", "onFail"), DEFVAL(1), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getPropertiesAsync, GCLASS_METHOD_SIGNATURE("getPropertiesAsync", "ownedItemId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::setPropertiesAsync, GCLASS_METHOD_SIGNATURE("setPropertiesAsync", "ownedItemId", "json", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getUpgradesAsync, GCLASS_METHOD_SIGNATURE("getUpgradesAsync", "ownedItemId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::upgradeAsync, GCLASS_METHOD_SIGNATURE("upgradeAsync", "ownedItemId", "newUpgradeLevel", "upgradePrice", "upgradeId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(godot::Array()), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getByIdAsync, GCLASS_METHOD_SIGNATURE("getByIdAsync", "ownedItemId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getByIdsAsync, GCLASS_METHOD_SIGNATURE("getByIdsAsync", "ownedItemIds", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getByVirtualItemIdsAsync, GCLASS_METHOD_SIGNATURE("getByVirtualItemIdsAsync", "virtualItemIds", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getAllForCurrentAppAsync, GCLASS_METHOD_SIGNATURE("getAllForCurrentAppAsync", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getByAppIdsAsync, GCLASS_METHOD_SIGNATURE("getByAppIdsAsync", "appIds", "startAfter", "limit", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(100), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getWithVirtualItemsDataForCurrentAppAsync, GCLASS_METHOD_SIGNATURE("getWithVirtualItemsDataForCurrentAppAsync", "startAfter", "limit", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(100), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getWithVirtualItemsDataByAppIdsAsync, GCLASS_METHOD_SIGNATURE("getWithVirtualItemsDataByAppIdsAsync", "appIds", "startAfter", "limit", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(100), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::parseInventoryItemData, GCLASS_METHOD_SIGNATURE("parseInventoryItemData", "json", "onSuccess", "onFail"), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::parseInventoryItemsData, GCLASS_METHOD_SIGNATURE("parseInventoryItemsData", "json", "onSuccess", "onFail"), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getByTagsAsync, GCLASS_METHOD_SIGNATURE("getByTagsAsync", "tags", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::getTagsAsync, GCLASS_METHOD_SIGNATURE("getTagsAsync", "ownedItemId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_InventoryModule::setTagsAsync, GCLASS_METHOD_SIGNATURE("setTagsAsync", "ownedItemId", "tags", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void addToInventoryAsync_VirtualItemId_Quantity_Properties_CancellationToken(
        godot::String virtualItemId,
        int32_t quantity,
        godot::Dictionary properties,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_virtualItemId;
            int32_t cpp_quantity;
            RGN::Modules::VirtualItems::Properties cpp_properties;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_virtualItemId = virtualItemId;
            cpp_virtualItemId = std::string(g_virtualItemId.utf8().get_data());
            int32_t g_quantity = quantity;
            cpp_quantity = g_quantity;
            G_Properties::ConvertToCoreModel(properties, cpp_properties);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                [onSuccess](RGN::Modules::Inventory::AddToInventoryResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_AddToInventoryResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_virtualItemId,
                cpp_quantity,
                cpp_properties,
                cpp_cancellationToken
            );
    }
    void addToInventoryAsync_UserId_VirtualItemId_Quantity_Properties_CancellationToken(
        godot::String userId,
        godot::String virtualItemId,
        int32_t quantity,
        godot::Dictionary properties,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_userId;
            string cpp_virtualItemId;
            int32_t cpp_quantity;
            RGN::Modules::VirtualItems::Properties cpp_properties;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            godot::String g_virtualItemId = virtualItemId;
            cpp_virtualItemId = std::string(g_virtualItemId.utf8().get_data());
            int32_t g_quantity = quantity;
            cpp_quantity = g_quantity;
            G_Properties::ConvertToCoreModel(properties, cpp_properties);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                [onSuccess](RGN::Modules::Inventory::AddToInventoryResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_AddToInventoryResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_virtualItemId,
                cpp_quantity,
                cpp_properties,
                cpp_cancellationToken
            );
    }
    void addToInventoryAsync_UserId_InventoryData_CancellationToken(
        godot::String userId,
        godot::Dictionary inventoryData,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_userId;
            RGN::Modules::Inventory::InventoryItemData cpp_inventoryData;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            G_InventoryItemData::ConvertToCoreModel(inventoryData, cpp_inventoryData);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                [onSuccess](RGN::Modules::Inventory::AddToInventoryResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_AddToInventoryResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_inventoryData,
                cpp_cancellationToken
            );
    }
    void removeByVirtualItemIdAsync(
        godot::String userId,
        godot::String virtualItemId,
        int32_t quantity,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_userId;
            string cpp_virtualItemId;
            int32_t cpp_quantity;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            godot::String g_virtualItemId = virtualItemId;
            cpp_virtualItemId = std::string(g_virtualItemId.utf8().get_data());
            int32_t g_quantity = quantity;
            cpp_quantity = g_quantity;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::RemoveByVirtualItemIdAsync(
                [onSuccess](RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_RemoveByVirtualItemIdResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_virtualItemId,
                cpp_quantity,
                cpp_cancellationToken
            );
    }
    void removeByInventoryItemIdAsync(
        godot::String userId,
        godot::String ownedItemId,
        int32_t quantity,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_userId;
            string cpp_ownedItemId;
            int32_t cpp_quantity;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            int32_t g_quantity = quantity;
            cpp_quantity = g_quantity;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::RemoveByInventoryItemIdAsync(
                [onSuccess](RGN::Modules::Inventory::RemoveByOwnedIdResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_RemoveByOwnedIdResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_ownedItemId,
                cpp_quantity,
                cpp_cancellationToken
            );
    }
    void getPropertiesAsync(
        godot::String ownedItemId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetPropertiesAsync(
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
                cpp_ownedItemId,
                cpp_cancellationToken
            );
    }
    void setPropertiesAsync(
        godot::String ownedItemId,
        godot::String json,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            string cpp_json;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            godot::String g_json = json;
            cpp_json = std::string(g_json.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::SetPropertiesAsync(
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
                cpp_ownedItemId,
                cpp_json,
                cpp_cancellationToken
            );
    }
    void getUpgradesAsync(
        godot::String ownedItemId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetUpgradesAsync(
                [onSuccess](vector<RGN::Modules::Inventory::UpgradesResponseData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_UpgradesResponseData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ownedItemId,
                cpp_cancellationToken
            );
    }
    void upgradeAsync(
        godot::String ownedItemId,
        int32_t newUpgradeLevel,
        godot::Array upgradePrice,
        godot::String upgradeId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            int32_t cpp_newUpgradeLevel;
            vector<RGN::Modules::Currency::Currency> cpp_upgradePrice;
            string cpp_upgradeId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            int32_t g_newUpgradeLevel = newUpgradeLevel;
            cpp_newUpgradeLevel = g_newUpgradeLevel;
            godot::Array g_cpp_upgradePrice = upgradePrice;
            for (int i = 0; i < g_cpp_upgradePrice.size(); ++i) {
                godot::Dictionary g_cpp_upgradePrice_item = g_cpp_upgradePrice[i];
                RGN::Modules::Currency::Currency cpp_upgradePrice_item;
                G_Currency::ConvertToCoreModel(g_cpp_upgradePrice_item, cpp_upgradePrice_item);
                cpp_upgradePrice.push_back(cpp_upgradePrice_item);
            }
            godot::String g_upgradeId = upgradeId;
            cpp_upgradeId = std::string(g_upgradeId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::UpgradeAsync(
                [onSuccess](vector<RGN::Modules::Inventory::VirtualItemUpgrade> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_VirtualItemUpgrade::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ownedItemId,
                cpp_newUpgradeLevel,
                cpp_upgradePrice,
                cpp_upgradeId,
                cpp_cancellationToken
            );
    }
    void getByIdAsync(
        godot::String ownedItemId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetByIdAsync(
                [onSuccess](RGN::Modules::Inventory::InventoryItemData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_InventoryItemData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_ownedItemId,
                cpp_cancellationToken
            );
    }
    void getByIdsAsync(
        godot::Array ownedItemIds,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_ownedItemIds;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_ownedItemIds = ownedItemIds;
            for (int i = 0; i < g_cpp_ownedItemIds.size(); ++i) {
                godot::String g_cpp_ownedItemIds_item = g_cpp_ownedItemIds[i];
                string cpp_ownedItemIds_item;
                godot::String g_g_cpp_ownedItemIds_item = g_cpp_ownedItemIds_item;
                cpp_ownedItemIds_item = std::string(g_g_cpp_ownedItemIds_item.utf8().get_data());
                cpp_ownedItemIds.push_back(cpp_ownedItemIds_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetByIdsAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ownedItemIds,
                cpp_cancellationToken
            );
    }
    void getByVirtualItemIdsAsync(
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
            RGN::Modules::Inventory::InventoryModule::GetByVirtualItemIdsAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_virtualItemIds,
                cpp_cancellationToken
            );
    }
    void getAllForCurrentAppAsync(
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            RGN::CancellationToken cpp_cancellationToken;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetAllForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_cancellationToken
            );
    }
    void getByAppIdsAsync(
        godot::Array appIds,
        int64_t startAfter,
        int32_t limit,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            int64_t cpp_startAfter;
            int32_t cpp_limit;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_appIds = appIds;
            for (int i = 0; i < g_cpp_appIds.size(); ++i) {
                godot::String g_cpp_appIds_item = g_cpp_appIds[i];
                string cpp_appIds_item;
                godot::String g_g_cpp_appIds_item = g_cpp_appIds_item;
                cpp_appIds_item = std::string(g_g_cpp_appIds_item.utf8().get_data());
                cpp_appIds.push_back(cpp_appIds_item);
            }
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_startAfter,
                cpp_limit,
                cpp_cancellationToken
            );
    }
    void getWithVirtualItemsDataForCurrentAppAsync(
        int64_t startAfter,
        int32_t limit,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            int64_t cpp_startAfter;
            int32_t cpp_limit;
            RGN::CancellationToken cpp_cancellationToken;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetWithVirtualItemsDataForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_startAfter,
                cpp_limit,
                cpp_cancellationToken
            );
    }
    void getWithVirtualItemsDataByAppIdsAsync(
        godot::Array appIds,
        int64_t startAfter,
        int32_t limit,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            int64_t cpp_startAfter;
            int32_t cpp_limit;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_appIds = appIds;
            for (int i = 0; i < g_cpp_appIds.size(); ++i) {
                godot::String g_cpp_appIds_item = g_cpp_appIds[i];
                string cpp_appIds_item;
                godot::String g_g_cpp_appIds_item = g_cpp_appIds_item;
                cpp_appIds_item = std::string(g_g_cpp_appIds_item.utf8().get_data());
                cpp_appIds.push_back(cpp_appIds_item);
            }
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetWithVirtualItemsDataByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_startAfter,
                cpp_limit,
                cpp_cancellationToken
            );
    }
    void parseInventoryItemData(
        godot::String json,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_json;
            godot::String g_json = json;
            cpp_json = std::string(g_json.utf8().get_data());
            RGN::Modules::Inventory::InventoryModule::ParseInventoryItemData(
                cpp_json
            );
    }
    void parseInventoryItemsData(
        godot::String json,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_json;
            godot::String g_json = json;
            cpp_json = std::string(g_json.utf8().get_data());
            RGN::Modules::Inventory::InventoryModule::ParseInventoryItemsData(
                cpp_json
            );
    }
    void getByTagsAsync(
        godot::Array tags,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_tags;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetByTagsAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_InventoryItemData::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_cancellationToken
            );
    }
    void getTagsAsync(
        godot::String ownedItemId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::GetTagsAsync(
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
                cpp_ownedItemId,
                cpp_cancellationToken
            );
    }
    void setTagsAsync(
        godot::String ownedItemId,
        godot::Array tags,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_ownedItemId;
            vector<string> cpp_tags;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_ownedItemId = ownedItemId;
            cpp_ownedItemId = std::string(g_ownedItemId.utf8().get_data());
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Inventory::InventoryModule::SetTagsAsync(
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
                cpp_ownedItemId,
                cpp_tags,
                cpp_cancellationToken
            );
    }
};
