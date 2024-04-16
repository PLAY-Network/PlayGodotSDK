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
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_StoreModule : public godot::Object {
    GDCLASS(G_StoreModule, godot::Object);
    static inline G_StoreModule* singleton = nullptr;
protected:
    static void _bind_methods() {
        godot::ClassDB::bind_method(godot::D_METHOD("buyVirtualItemsAsync", "itemIds", "currencies", "offerId", "onSuccess", "onFail"), &G_StoreModule::buyVirtualItemsAsync, DEFVAL(godot::Array()), DEFVAL(""), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("buyStoreOfferAsync", "offerId", "currencies", "onSuccess", "onFail"), &G_StoreModule::buyStoreOfferAsync, DEFVAL(godot::Array()), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getLootBoxesByIdsAsync", "ids", "onSuccess", "onFail"), &G_StoreModule::getLootBoxesByIdsAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getLootBoxesByAppIdAsync", "appId", "limit", "startAfter", "onSuccess", "onFail"), &G_StoreModule::getLootBoxesByAppIdAsync, DEFVAL(""), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getLootBoxesForCurrentAppAsync", "limit", "startAfter", "onSuccess", "onFail"), &G_StoreModule::getLootBoxesForCurrentAppAsync, DEFVAL(""), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("lootboxIsAvailableAsync", "name", "onSuccess", "onFail"), &G_StoreModule::lootboxIsAvailableAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getAvailableLootBoxItemsCountAsync", "name", "onSuccess", "onFail"), &G_StoreModule::getAvailableLootBoxItemsCountAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("openLootboxAsync", "name", "onSuccess", "onFail"), &G_StoreModule::openLootboxAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("addAsync", "appIds", "itemIds", "tags", "name", "description", "quantity", "onSuccess", "onFail"), &G_StoreModule::addAsync, DEFVAL(godot::Array()), DEFVAL(""), DEFVAL(""), DEFVAL(1), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("importStoreOffersFromCSVAsync", "content", "delimiter", "cancellationToken", "onSuccess", "onFail"), &G_StoreModule::importStoreOffersFromCSVAsync, DEFVAL(nullptr), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getByTagsAsync", "tags", "appId", "ignoreTimestamp", "onSuccess", "onFail"), &G_StoreModule::getByTagsAsync, DEFVAL(""), DEFVAL(false), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getByTimestampAsync", "appId", "timestamp", "onSuccess", "onFail"), &G_StoreModule::getByTimestampAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getByAppIdsAsync", "appIds", "limit", "startAfter", "ignoreTimestamp", "onSuccess", "onFail"), &G_StoreModule::getByAppIdsAsync, DEFVAL(""), DEFVAL(false), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getForCurrentAppAsync", "limit", "startAfter", "ignoreTimestamp", "onSuccess", "onFail"), &G_StoreModule::getForCurrentAppAsync, DEFVAL(""), DEFVAL(false), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getWithVirtualItemsDataForCurrentAppAsync", "limit", "startAfter", "ignoreTimestamp", "onSuccess", "onFail"), &G_StoreModule::getWithVirtualItemsDataForCurrentAppAsync, DEFVAL(""), DEFVAL(false), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getWithVirtualItemsDataByAppIdsAsync", "appIds", "limit", "startAfter", "ignoreTimestamp", "onSuccess", "onFail"), &G_StoreModule::getWithVirtualItemsDataByAppIdsAsync, DEFVAL(""), DEFVAL(false), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getByIdsAsync", "ids", "onSuccess", "onFail"), &G_StoreModule::getByIdsAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getTagsAsync", "offerId", "onSuccess", "onFail"), &G_StoreModule::getTagsAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setTagsAsync", "offerId", "tags", "appId", "onSuccess", "onFail"), &G_StoreModule::setTagsAsync, DEFVAL(""), godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setNameAsync", "offerId", "name", "onSuccess", "onFail"), &G_StoreModule::setNameAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setDescriptionAsync", "offerId", "description", "onSuccess", "onFail"), &G_StoreModule::setDescriptionAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setPricesAsync", "offerId", "prices", "onSuccess", "onFail"), &G_StoreModule::setPricesAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setTimeAsync", "offerId", "time", "onSuccess", "onFail"), &G_StoreModule::setTimeAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setImageUrlAsync", "offerId", "imageUrl", "onSuccess", "onFail"), &G_StoreModule::setImageUrlAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("isAvailableAsync", "storeOfferId", "onSuccess", "onFail"), &G_StoreModule::isAvailableAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("getPropertiesAsync", "storeOfferId", "onSuccess", "onFail"), &G_StoreModule::getPropertiesAsync, godot::Callable(), godot::Callable());
        godot::ClassDB::bind_method(godot::D_METHOD("setPropertiesAsync", "storeOfferId", "json", "onSuccess", "onFail"), &G_StoreModule::setPropertiesAsync, godot::Callable(), godot::Callable());
    }
public:
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
    void buyVirtualItemsAsync(
        godot::Array itemIds,
        godot::Array currencies,
        godot::String offerId,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_itemIds;
            vector<string> cpp_currencies;
            string cpp_offerId;
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
            RGN::Modules::Store::StoreModule::BuyVirtualItemsAsync(
                [onSuccess](RGN::Modules::Store::PurchaseResult response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse = gResponse;
                    G_PurchaseResult::ConvertToGodotModel(response, g_gResponse);
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_itemIds,
                cpp_currencies,
                cpp_offerId
            );
    }
    void buyStoreOfferAsync(
        godot::String offerId,
        godot::Array currencies,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            vector<string> cpp_currencies;
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
            RGN::Modules::Store::StoreModule::BuyStoreOfferAsync(
                [onSuccess](RGN::Modules::Store::PurchaseResult response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse = gResponse;
                    G_PurchaseResult::ConvertToGodotModel(response, g_gResponse);
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_currencies
            );
    }
    void getLootBoxesByIdsAsync(
        godot::Array ids,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_ids;
            godot::Array g_cpp_ids = ids;
            for (int i = 0; i < g_cpp_ids.size(); ++i) {
                godot::String g_cpp_ids_item = g_cpp_ids[i];
                string cpp_ids_item;
                godot::String g_g_cpp_ids_item = g_cpp_ids_item;
                cpp_ids_item = std::string(g_g_cpp_ids_item.utf8().get_data());
                cpp_ids.push_back(cpp_ids_item);
            }
            RGN::Modules::Store::StoreModule::GetLootBoxesByIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_LootBox::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_ids
            );
    }
    void getLootBoxesByAppIdAsync(
        godot::String appId,
        int32_t limit,
        godot::String startAfter,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_appId;
            int32_t cpp_limit;
            string cpp_startAfter;
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            RGN::Modules::Store::StoreModule::GetLootBoxesByAppIdAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_LootBox::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_appId,
                cpp_limit,
                cpp_startAfter
            );
    }
    void getLootBoxesForCurrentAppAsync(
        int32_t limit,
        godot::String startAfter,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            RGN::Modules::Store::StoreModule::GetLootBoxesForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_LootBox::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_limit,
                cpp_startAfter
            );
    }
    void lootboxIsAvailableAsync(
        godot::String name,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_name;
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            RGN::Modules::Store::StoreModule::LootboxIsAvailableAsync(
                [onSuccess](bool response) {
                    godot::Array gArgs;
                    bool gResponse;
                    gResponse = response;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_name
            );
    }
    void getAvailableLootBoxItemsCountAsync(
        godot::String name,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_name;
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            RGN::Modules::Store::StoreModule::GetAvailableLootBoxItemsCountAsync(
                [onSuccess](int64_t response) {
                    godot::Array gArgs;
                    int64_t gResponse;
                    gResponse = response;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_name
            );
    }
    void openLootboxAsync(
        godot::String name,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_name;
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            RGN::Modules::Store::StoreModule::OpenLootboxAsync(
                [onSuccess](RGN::Modules::Inventory::InventoryItemData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse = gResponse;
                    G_InventoryItemData::ConvertToGodotModel(response, g_gResponse);
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_name
            );
    }
    void addAsync(
        godot::Array appIds,
        godot::Array itemIds,
        godot::Array tags,
        godot::String name,
        godot::String description,
        int32_t quantity,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_appIds;
            vector<string> cpp_itemIds;
            vector<string> cpp_tags;
            string cpp_name;
            string cpp_description;
            int32_t cpp_quantity;
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
            RGN::Modules::Store::StoreModule::AddAsync(
                [onSuccess](RGN::Modules::Store::StoreOffer response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse = gResponse;
                    G_StoreOffer::ConvertToGodotModel(response, g_gResponse);
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_appIds,
                cpp_itemIds,
                cpp_tags,
                cpp_name,
                cpp_description,
                cpp_quantity
            );
    }
    void importStoreOffersFromCSVAsync(
        godot::String content,
        godot::String delimiter,
        godot::Object* cancellationToken,
        godot::Callable onSuccess,
        godot::Callable onFail) {
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
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_content,
                cpp_delimiter,
                cpp_cancellationToken
            );
    }
    void getByTagsAsync(
        godot::Array tags,
        godot::String appId,
        bool ignoreTimestamp,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_tags;
            string cpp_appId;
            bool cpp_ignoreTimestamp;
            godot::Array g_cpp_tags = tags;
            for (int i = 0; i < g_cpp_tags.size(); ++i) {
                godot::String g_cpp_tags_item = g_cpp_tags[i];
                string cpp_tags_item;
                godot::String g_g_cpp_tags_item = g_cpp_tags_item;
                cpp_tags_item = std::string(g_g_cpp_tags_item.utf8().get_data());
                cpp_tags.push_back(cpp_tags_item);
            }
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetByTagsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_tags,
                cpp_appId,
                cpp_ignoreTimestamp
            );
    }
    void getByTimestampAsync(
        godot::String appId,
        int64_t timestamp,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_appId;
            int64_t cpp_timestamp;
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            int64_t g_timestamp = timestamp;
            cpp_timestamp = g_timestamp;
            RGN::Modules::Store::StoreModule::GetByTimestampAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_appId,
                cpp_timestamp
            );
    }
    void getByAppIdsAsync(
        godot::Array appIds,
        int32_t limit,
        godot::String startAfter,
        bool ignoreTimestamp,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
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
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp
            );
    }
    void getForCurrentAppAsync(
        int32_t limit,
        godot::String startAfter,
        bool ignoreTimestamp,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp
            );
    }
    void getWithVirtualItemsDataForCurrentAppAsync(
        int32_t limit,
        godot::String startAfter,
        bool ignoreTimestamp,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            int32_t g_limit = limit;
            cpp_limit = g_limit;
            godot::String g_startAfter = startAfter;
            cpp_startAfter = std::string(g_startAfter.utf8().get_data());
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetWithVirtualItemsDataForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp
            );
    }
    void getWithVirtualItemsDataByAppIdsAsync(
        godot::Array appIds,
        int32_t limit,
        godot::String startAfter,
        bool ignoreTimestamp,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
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
            bool g_ignoreTimestamp = ignoreTimestamp;
            cpp_ignoreTimestamp = g_ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetWithVirtualItemsDataByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp
            );
    }
    void getByIdsAsync(
        godot::Array ids,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            vector<string> cpp_ids;
            godot::Array g_cpp_ids = ids;
            for (int i = 0; i < g_cpp_ids.size(); ++i) {
                godot::String g_cpp_ids_item = g_cpp_ids[i];
                string cpp_ids_item;
                godot::String g_g_cpp_ids_item = g_cpp_ids_item;
                cpp_ids_item = std::string(g_g_cpp_ids_item.utf8().get_data());
                cpp_ids.push_back(cpp_ids_item);
            }
            RGN::Modules::Store::StoreModule::GetByIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    godot::Array gArgs;
                    godot::Array gResponse;
                    godot::Array g_gResponse;
                    for (const auto& response_item : response) {
                        godot::Dictionary g_response_item;
                        godot::Dictionary g_g_response_item = g_response_item;
                        G_StoreOffer::ConvertToGodotModel(response_item, g_g_response_item);
                        g_gResponse.push_back(g_response_item);
                    }
                    gResponse = g_gResponse;
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_ids
            );
    }
    void getTagsAsync(
        godot::String offerId,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
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
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId
            );
    }
    void setTagsAsync(
        godot::String offerId,
        godot::Array tags,
        godot::String appId,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            vector<string> cpp_tags;
            string cpp_appId;
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
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            RGN::Modules::Store::StoreModule::SetTagsAsync(
                [onSuccess]() {
                    onSuccess.callv(godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_tags,
                cpp_appId
            );
    }
    void setNameAsync(
        godot::String offerId,
        godot::String name,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            string cpp_name;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::String g_name = name;
            cpp_name = std::string(g_name.utf8().get_data());
            RGN::Modules::Store::StoreModule::SetNameAsync(
                [onSuccess]() {
                    onSuccess.callv(godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_name
            );
    }
    void setDescriptionAsync(
        godot::String offerId,
        godot::String description,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            string cpp_description;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::String g_description = description;
            cpp_description = std::string(g_description.utf8().get_data());
            RGN::Modules::Store::StoreModule::SetDescriptionAsync(
                [onSuccess]() {
                    onSuccess.callv(godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_description
            );
    }
    void setPricesAsync(
        godot::String offerId,
        godot::Array prices,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            vector<RGN::Modules::VirtualItems::PriceInfo> cpp_prices;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::Array g_cpp_prices = prices;
            for (int i = 0; i < g_cpp_prices.size(); ++i) {
                godot::Dictionary g_cpp_prices_item = g_cpp_prices[i];
                RGN::Modules::VirtualItems::PriceInfo cpp_prices_item;
                G_PriceInfo::ConvertToCoreModel(g_cpp_prices_item, cpp_prices_item);
                cpp_prices.push_back(cpp_prices_item);
            }
            RGN::Modules::Store::StoreModule::SetPricesAsync(
                [onSuccess]() {
                    onSuccess.callv(godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_prices
            );
    }
    void setTimeAsync(
        godot::String offerId,
        godot::Dictionary time,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            RGN::Model::TimeInfo cpp_time;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            G_TimeInfo::ConvertToCoreModel(time, cpp_time);
            RGN::Modules::Store::StoreModule::SetTimeAsync(
                [onSuccess]() {
                    onSuccess.callv(godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_time
            );
    }
    void setImageUrlAsync(
        godot::String offerId,
        godot::String imageUrl,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_offerId;
            string cpp_imageUrl;
            godot::String g_offerId = offerId;
            cpp_offerId = std::string(g_offerId.utf8().get_data());
            godot::String g_imageUrl = imageUrl;
            cpp_imageUrl = std::string(g_imageUrl.utf8().get_data());
            RGN::Modules::Store::StoreModule::SetImageUrlAsync(
                [onSuccess]() {
                    onSuccess.callv(godot::Array());
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_offerId,
                cpp_imageUrl
            );
    }
    void isAvailableAsync(
        godot::String storeOfferId,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_storeOfferId;
            godot::String g_storeOfferId = storeOfferId;
            cpp_storeOfferId = std::string(g_storeOfferId.utf8().get_data());
            RGN::Modules::Store::StoreModule::IsAvailableAsync(
                [onSuccess](RGN::Modules::Leaderboard::IsStoreOfferAvailableResponseData response) {
                    godot::Array gArgs;
                    godot::Dictionary gResponse;
                    godot::Dictionary g_gResponse = gResponse;
                    G_IsStoreOfferAvailableResponseData::ConvertToGodotModel(response, g_gResponse);
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_storeOfferId
            );
    }
    void getPropertiesAsync(
        godot::String storeOfferId,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_storeOfferId;
            godot::String g_storeOfferId = storeOfferId;
            cpp_storeOfferId = std::string(g_storeOfferId.utf8().get_data());
            RGN::Modules::Store::StoreModule::GetPropertiesAsync(
                [onSuccess](string response) {
                    godot::Array gArgs;
                    godot::String gResponse;
                    gResponse = godot::String(response.c_str());
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_storeOfferId
            );
    }
    void setPropertiesAsync(
        godot::String storeOfferId,
        godot::String json,
        godot::Callable onSuccess,
        godot::Callable onFail) {
            string cpp_storeOfferId;
            string cpp_json;
            godot::String g_storeOfferId = storeOfferId;
            cpp_storeOfferId = std::string(g_storeOfferId.utf8().get_data());
            godot::String g_json = json;
            cpp_json = std::string(g_json.utf8().get_data());
            RGN::Modules::Store::StoreModule::SetPropertiesAsync(
                [onSuccess](string response) {
                    godot::Array gArgs;
                    godot::String gResponse;
                    gResponse = godot::String(response.c_str());
                    gArgs.push_back(gResponse);
                    onSuccess.callv(gArgs);
                },
                [onFail](int code, std::string message) {
                     godot::Array gArgs;
                     gArgs.push_back(code);
                     gArgs.push_back(godot::String(message.c_str()));
                     onFail.callv(gArgs);
                },
                cpp_storeOfferId,
                cpp_json
            );
    }
};