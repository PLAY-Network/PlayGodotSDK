#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../../Generated/RGN/Modules/Inventory/AddToInventoryResponseData.h"
#include "Impl/G_Defs.h"
#include <string>
#include <vector>
#include <unordered_map>

/**
 * Response that return the new quantity of the item recently added
 */
struct G_AddToInventoryResponseData {
	static void ConvertToGodotModel(const RGN::Modules::Inventory::AddToInventoryResponseData& source, godot::Dictionary& target) {
        target["id"] = godot::String(source.id.c_str());
        target["quantity"] = source.quantity;
        target["createdAt"] = source.createdAt;
        target["updatedAt"] = source.updatedAt;
	}

	static void ConvertToCoreModel(const godot::Dictionary& source, RGN::Modules::Inventory::AddToInventoryResponseData& target) {
        godot::String g_source_id = source["id"];
        target.id = std::string(g_source_id.utf8().get_data());
        int32_t g_source_quantity = source["quantity"];
        target.quantity = g_source_quantity;
        int64_t g_source_createdAt = source["createdAt"];
        target.createdAt = g_source_createdAt;
        int64_t g_source_updatedAt = source["updatedAt"];
        target.updatedAt = g_source_updatedAt;
	}
};
