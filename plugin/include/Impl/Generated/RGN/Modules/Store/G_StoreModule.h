#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreModule.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyVirtualItemsResponse.h"
#include "G_BuyVirtualItemsResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseResult.h"
#include "G_PurchaseResult.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyStoreOfferResponse.h"
#include "G_BuyStoreOfferResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetLootBoxesResponse.h"
#include "G_GetLootBoxesResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/LootBox.h"
#include "G_LootBox.h"
#include "../../../../../Generated/RGN/Modules/Store/LootboxIsAvailableResponse.h"
#include "G_LootboxIsAvailableResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseItem.h"
#include "G_PurchaseItem.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "../Inventory/G_InventoryItemData.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreOffer.h"
#include "G_StoreOffer.h"
#include "../../../../../Generated/RGN/Modules/Store/ImportStoreOffersFromCSVResponse.h"
#include "G_ImportStoreOffersFromCSVResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOffersResponse.h"
#include "G_GetStoreOffersResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOffersWithVirtualItemsDataResponse.h"
#include "G_GetStoreOffersWithVirtualItemsDataResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOfferTagsResponse.h"
#include "G_GetStoreOfferTagsResponse.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/G_PriceInfo.h"
#include "../../../../../Generated/RGN/Modules/Store/SetPricesRequestData.h"
#include "G_SetPricesRequestData.h"
#include "../../../../../Generated/RGN/Model/TimeInfo.h"
#include "../../Model/G_TimeInfo.h"
#include "../../../../../Generated/RGN/Modules/Store/SetTimeRequestData.h"
#include "G_SetTimeRequestData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsStoreOfferAvailableResponseData.h"
#include "../Leaderboard/G_IsStoreOfferAvailableResponseData.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_StoreModule : public godot::Object {
    REG_GCLASS(G_StoreModule, godot::Object);
#ifdef GODOT4
    static inline G_StoreModule* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_StoreModule *get_singleton() {
        return singleton;
    }
    G_StoreModule() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_StoreModule() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::buyVirtualItemsAsync, GCLASS_METHOD_SIGNATURE("buyVirtualItemsAsync", "itemIds", "currencies", "offerId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(godot::Array()), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::buyStoreOfferAsync, GCLASS_METHOD_SIGNATURE("buyStoreOfferAsync", "offerId", "currencies", "cancellationToken", "onSuccess", "onFail"), DEFVAL(godot::Array()), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getLootBoxesByIdsAsync, GCLASS_METHOD_SIGNATURE("getLootBoxesByIdsAsync", "ids", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getLootBoxesByAppIdAsync, GCLASS_METHOD_SIGNATURE("getLootBoxesByAppIdAsync", "appId", "limit", "startAfter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getLootBoxesForCurrentAppAsync, GCLASS_METHOD_SIGNATURE("getLootBoxesForCurrentAppAsync", "limit", "startAfter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(""), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::lootboxIsAvailableAsync, GCLASS_METHOD_SIGNATURE("lootboxIsAvailableAsync", "name", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getAvailableLootBoxItemsCountAsync, GCLASS_METHOD_SIGNATURE("getAvailableLootBoxItemsCountAsync", "name", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::openLootboxAsync, GCLASS_METHOD_SIGNATURE("openLootboxAsync", "name", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::addAsync, GCLASS_METHOD_SIGNATURE("addAsync", "appIds", "itemIds", "tags", "name", "description", "quantity", "cancellationToken", "onSuccess", "onFail"), DEFVAL(godot::Array()), DEFVAL(""), DEFVAL(""), DEFVAL(1), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::importStoreOffersFromCSVAsync, GCLASS_METHOD_SIGNATURE("importStoreOffersFromCSVAsync", "content", "delimiter", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getByTagsAsync, GCLASS_METHOD_SIGNATURE("getByTagsAsync", "tags", "limit", "startAfter", "ignoreTimestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getByTimestampAsync, GCLASS_METHOD_SIGNATURE("getByTimestampAsync", "appId", "timestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getByAppIdsAsync, GCLASS_METHOD_SIGNATURE("getByAppIdsAsync", "appIds", "limit", "startAfter", "ignoreTimestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getForCurrentAppAsync, GCLASS_METHOD_SIGNATURE("getForCurrentAppAsync", "limit", "startAfter", "ignoreTimestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getWithVirtualItemsDataForCurrentAppAsync, GCLASS_METHOD_SIGNATURE("getWithVirtualItemsDataForCurrentAppAsync", "limit", "startAfter", "ignoreTimestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getWithVirtualItemsDataByAppIdsAsync, GCLASS_METHOD_SIGNATURE("getWithVirtualItemsDataByAppIdsAsync", "appIds", "limit", "startAfter", "ignoreTimestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(false), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getByIdsAsync, GCLASS_METHOD_SIGNATURE("getByIdsAsync", "ids", "limit", "startAfter", "ignoreTimestamp", "cancellationToken", "onSuccess", "onFail"), DEFVAL(0), DEFVAL(0), DEFVAL(true), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getTagsAsync, GCLASS_METHOD_SIGNATURE("getTagsAsync", "offerId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setTagsAsync, GCLASS_METHOD_SIGNATURE("setTagsAsync", "offerId", "tags", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setNameAsync, GCLASS_METHOD_SIGNATURE("setNameAsync", "offerId", "name", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setDescriptionAsync, GCLASS_METHOD_SIGNATURE("setDescriptionAsync", "offerId", "description", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setPricesAsync, GCLASS_METHOD_SIGNATURE("setPricesAsync", "offerId", "prices", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setTimeAsync, GCLASS_METHOD_SIGNATURE("setTimeAsync", "offerId", "time", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setImageUrlAsync, GCLASS_METHOD_SIGNATURE("setImageUrlAsync", "offerId", "imageUrl", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::isAvailableAsync, GCLASS_METHOD_SIGNATURE("isAvailableAsync", "storeOfferId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::getPropertiesAsync, GCLASS_METHOD_SIGNATURE("getPropertiesAsync", "storeOfferId", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_StoreModule::setPropertiesAsync, GCLASS_METHOD_SIGNATURE("setPropertiesAsync", "storeOfferId", "json", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void buyVirtualItemsAsync(
        godot::Array itemIds,
        godot::Array currencies,
        godot::String offerId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_itemIds;
            vector<string> cpp_currencies;
            string cpp_offerId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_itemIds = itemIds;
            for (int i = 0; i < g_cpp_itemIds.size(); ++i) {
                godot::String g_cpp_itemIds_item = g_cpp_itemIds[i];
                string cpp_itemIds_item;
                godot::String g_g_cpp_itemIds_item = g_cpp_itemIds_item;
                cpp_itemIds_item = std::string(g_g_cpp_itemIds_item.utf8().get_data());
                cpp_itemIds.push_back(cpp_itemIds_item);
            }
            godot::Array g_cpp_currencies = currencies;
            for (int i = 0; i < g_cpp_currencies.size(); ++i) {
                godot::String g_cpp_currencies_item = g_cpp_currencies[i];
                string cpp_currencies_item;
                godot::String g_g_cpp_currencies_item = g_cpp_currencies_item;
                cpp_currencies_item = std::string(g_g_cpp_currencies_item.utf8().get_data());
                cpp_currencies.push_back(cpp_currencies_item);
            }
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::BuyVirtualItemsAsync(
                [onSuccess](RGN::Modules::Store::PurchaseResult response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_PurchaseResult::ConvertToGodotModel(response, g_gResponse);
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
                cpp_itemIds,
                cpp_currencies,
                cpp_offerId,
                cpp_cancellationToken
            );
    }
    void buyStoreOfferAsync(
        godot::String offerId,
        godot::Array currencies,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            vector<string> cpp_currencies;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::Array g_cpp_currencies = currencies;
            for (int i = 0; i < g_cpp_currencies.size(); ++i) {
                godot::String g_cpp_currencies_item = g_cpp_currencies[i];
                string cpp_currencies_item;
                godot::String g_g_cpp_currencies_item = g_cpp_currencies_item;
                cpp_currencies_item = std::string(g_g_cpp_currencies_item.utf8().get_data());
                cpp_currencies.push_back(cpp_currencies_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::BuyStoreOfferAsync(
                [onSuccess](RGN::Modules::Store::PurchaseResult response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_PurchaseResult::ConvertToGodotModel(response, g_gResponse);
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
                cpp_offerId,
                cpp_currencies,
                cpp_cancellationToken
            );
    }
    void getLootBoxesByIdsAsync(
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
            RGN::Modules::Store::StoreModule::GetLootBoxesByIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_LootBox::ConvertToGodotModel(response_item, g_g_response_item);
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
    void getLootBoxesByAppIdAsync(
        godot::String appId,
        int32_t limit,
        godot::String startAfter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_appId;
            int32_t cpp_limit;
            string cpp_startAfter;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetLootBoxesByAppIdAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_LootBox::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_appId,
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken
            );
    }
    void getLootBoxesForCurrentAppAsync(
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
            RGN::Modules::Store::StoreModule::GetLootBoxesForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_LootBox::ConvertToGodotModel(response_item, g_g_response_item);
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
    void lootboxIsAvailableAsync(
        godot::String name,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_name;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::LootboxIsAvailableAsync(
                [onSuccess](bool response) {
                    godot::Array gArgs;
                    bool gResponse;
                    gResponse = response;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_name,
                cpp_cancellationToken
            );
    }
    void getAvailableLootBoxItemsCountAsync(
        godot::String name,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_name;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetAvailableLootBoxItemsCountAsync(
                [onSuccess](int64_t response) {
                    godot::Array gArgs;
                    int64_t gResponse;
                    gResponse = response;
                    gArgs.push_back(gResponse);
                    EXECUTE_GCALLBACK_DEFVAL(onSuccess, gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     EXECUTE_GCALLBACK_DEFVAL(onFail, gArgs);
                },
                cpp_name,
                cpp_cancellationToken
            );
    }
    void openLootboxAsync(
        godot::String name,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_name;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::OpenLootboxAsync(
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
                cpp_name,
                cpp_cancellationToken
            );
    }
    void addAsync(
        godot::Array appIds,
        godot::Array itemIds,
        godot::Array tags,
        godot::String name,
        godot::String description,
        int32_t quantity,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            vector<string> cpp_itemIds;
            vector<string> cpp_tags;
            string cpp_name;
            string cpp_description;
            int32_t cpp_quantity;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_appIds = appIds;
            for (int i = 0; i < g_cpp_appIds.size(); ++i) {
                godot::String g_cpp_appIds_item = g_cpp_appIds[i];
                string cpp_appIds_item;
                godot::String g_g_cpp_appIds_item = g_cpp_appIds_item;
                cpp_appIds_item = std::string(g_g_cpp_appIds_item.utf8().get_data());
                cpp_appIds.push_back(cpp_appIds_item);
            }
            godot::Array g_cpp_itemIds = itemIds;
            for (int i = 0; i < g_cpp_itemIds.size(); ++i) {
                godot::String g_cpp_itemIds_item = g_cpp_itemIds[i];
                string cpp_itemIds_item;
                godot::String g_g_cpp_itemIds_item = g_cpp_itemIds_item;
                cpp_itemIds_item = std::string(g_g_cpp_itemIds_item.utf8().get_data());
                cpp_itemIds.push_back(cpp_itemIds_item);
            }
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            godot::String g_description = description;
            cpp_description = std::string(g_description.utf8().get_data());
            int32_t g_quantity = quantity;
            cpp_quantity = g_quantity;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::AddAsync(
                [onSuccess](RGN::Modules::Store::StoreOffer response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_StoreOffer::ConvertToGodotModel(response, g_gResponse);
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
                cpp_itemIds,
                cpp_tags,
                cpp_name,
                cpp_description,
                cpp_quantity,
                cpp_cancellationToken
            );
    }
    void importStoreOffersFromCSVAsync(
        godot::String content,
        godot::String delimiter,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_content;
            string cpp_delimiter;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_content = content;
            cpp_content = std::string(g_content.utf8().get_data());
            godot::String g_delimiter = delimiter;
            cpp_delimiter = std::string(g_delimiter.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::ImportStoreOffersFromCSVAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_content,
                cpp_delimiter,
                cpp_cancellationToken
            );
    }
    void getByTagsAsync(
        godot::Array tags,
        int32_t limit,
        int64_t startAfter,
        bool ignoreTimestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_tags;
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_ignoreTimestamp;
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
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetByTagsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ignoreTimestamp,
                cpp_cancellationToken
            );
    }
    void getByTimestampAsync(
        godot::String appId,
        int64_t timestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_appId;
            int64_t cpp_timestamp;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            int64_t g_timestamp = timestamp;
            cpp_timestamp = g_timestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetByTimestampAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_appId,
                cpp_timestamp,
                cpp_cancellationToken
            );
    }
    void getByAppIdsAsync(
        godot::Array appIds,
        int32_t limit,
        int64_t startAfter,
        bool ignoreTimestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_ignoreTimestamp;
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
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ignoreTimestamp,
                cpp_cancellationToken
            );
    }
    void getForCurrentAppAsync(
        int32_t limit,
        int64_t startAfter,
        bool ignoreTimestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_ignoreTimestamp;
            RGN::CancellationToken cpp_cancellationToken;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ignoreTimestamp,
                cpp_cancellationToken
            );
    }
    void getWithVirtualItemsDataForCurrentAppAsync(
        int32_t limit,
        int64_t startAfter,
        bool ignoreTimestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_ignoreTimestamp;
            RGN::CancellationToken cpp_cancellationToken;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetWithVirtualItemsDataForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ignoreTimestamp,
                cpp_cancellationToken
            );
    }
    void getWithVirtualItemsDataByAppIdsAsync(
        godot::Array appIds,
        int32_t limit,
        int64_t startAfter,
        bool ignoreTimestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_ignoreTimestamp;
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
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetWithVirtualItemsDataByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_ignoreTimestamp,
                cpp_cancellationToken
            );
    }
    void getByIdsAsync(
        godot::Array ids,
        int32_t limit,
        int64_t startAfter,
        bool ignoreTimestamp,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            vector<string> cpp_ids;
            int32_t cpp_limit;
            int64_t cpp_startAfter;
            bool cpp_ignoreTimestamp;
            RGN::CancellationToken cpp_cancellationToken;
            godot::Array g_cpp_ids = ids;
            for (int i = 0; i < g_cpp_ids.size(); ++i) {
                godot::String g_cpp_ids_item = g_cpp_ids[i];
                string cpp_ids_item;
                godot::String g_g_cpp_ids_item = g_cpp_ids_item;
                cpp_ids_item = std::string(g_g_cpp_ids_item.utf8().get_data());
                cpp_ids.push_back(cpp_ids_item);
            }
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            int64_t g_startAfter = startAfter;
            cpp_startAfter = g_startAfter;
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetByIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
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
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp,
                cpp_cancellationToken
            );
    }
    void getTagsAsync(
        godot::String offerId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetTagsAsync(
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
                cpp_offerId,
                cpp_cancellationToken
            );
    }
    void setTagsAsync(
        godot::String offerId,
        godot::Array tags,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            vector<string> cpp_tags;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetTagsAsync(
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
                cpp_tags,
                cpp_cancellationToken
            );
    }
    void setNameAsync(
        godot::String offerId,
        godot::String name,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            string cpp_name;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetNameAsync(
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
                cpp_name,
                cpp_cancellationToken
            );
    }
    void setDescriptionAsync(
        godot::String offerId,
        godot::String description,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            string cpp_description;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::String g_description = description;
            cpp_description = std::string(g_description.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetDescriptionAsync(
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
                cpp_description,
                cpp_cancellationToken
            );
    }
    void setPricesAsync(
        godot::String offerId,
        godot::Array prices,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            vector<RGN::Modules::VirtualItems::PriceInfo> cpp_prices;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::Array g_cpp_prices = prices;
            for (int i = 0; i < g_cpp_prices.size(); ++i) {
                godot::Dictionary g_cpp_prices_item = g_cpp_prices[i];
                RGN::Modules::VirtualItems::PriceInfo cpp_prices_item;
                G_PriceInfo::ConvertToCoreModel(g_cpp_prices_item, cpp_prices_item);
                cpp_prices.push_back(cpp_prices_item);
            }
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetPricesAsync(
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
                cpp_prices,
                cpp_cancellationToken
            );
    }
    void setTimeAsync(
        godot::String offerId,
        godot::Dictionary time,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            RGN::Model::TimeInfo cpp_time;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            G_TimeInfo::ConvertToCoreModel(time, cpp_time);
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetTimeAsync(
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
                cpp_time,
                cpp_cancellationToken
            );
    }
    void setImageUrlAsync(
        godot::String offerId,
        godot::String imageUrl,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_offerId;
            string cpp_imageUrl;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::String g_imageUrl = imageUrl;
            cpp_imageUrl = std::string(g_imageUrl.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetImageUrlAsync(
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
                cpp_imageUrl,
                cpp_cancellationToken
            );
    }
    void isAvailableAsync(
        godot::String storeOfferId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_storeOfferId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_storeOfferId = storeOfferId;
            cpp_storeOfferId = std::string(g_storeOfferId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::IsAvailableAsync(
                [onSuccess](RGN::Modules::Leaderboard::IsStoreOfferAvailableResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse;
                    G_IsStoreOfferAvailableResponseData::ConvertToGodotModel(response, g_gResponse);
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
                cpp_storeOfferId,
                cpp_cancellationToken
            );
    }
    void getPropertiesAsync(
        godot::String storeOfferId,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_storeOfferId;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_storeOfferId = storeOfferId;
            cpp_storeOfferId = std::string(g_storeOfferId.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::GetPropertiesAsync(
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
                cpp_storeOfferId,
                cpp_cancellationToken
            );
    }
    void setPropertiesAsync(
        godot::String storeOfferId,
        godot::String json,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_storeOfferId;
            string cpp_json;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_storeOfferId = storeOfferId;
            cpp_storeOfferId = std::string(g_storeOfferId.utf8().get_data());
            godot::String g_json = json;
            cpp_json = std::string(g_json.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::SetPropertiesAsync(
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
                cpp_storeOfferId,
                cpp_json,
                cpp_cancellationToken
            );
    }
};
