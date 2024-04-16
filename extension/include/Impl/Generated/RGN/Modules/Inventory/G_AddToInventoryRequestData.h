#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../../Generated/RGN/Modules/Inventory/AddToInventoryRequestData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryData.h"
#include "G_InventoryData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/G_BaseRequestData.h"
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <vector>
#include <unordered_map>

struct G_AddToInventoryRequestData {
	static void ConvertToGodotModel(const RGN::Modules::Inventory::AddToInventoryRequestData& source, godot::Dictionary& target) {
        godot::Array g_target_inventoryDatas;
        for (const auto& source_inventoryDatas_item : source.inventoryDatas) {
            godot::Dictionary g_source_inventoryDatas_item;
            godot::Dictionary g_g_source_inventoryDatas_item = g_source_inventoryDatas_item;
            G_InventoryData::ConvertToGodotModel(source_inventoryDatas_item, g_g_source_inventoryDatas_item);
            g_target_inventoryDatas.push_back(g_source_inventoryDatas_item);
        }
        target["inventoryDatas"] = g_target_inventoryDatas;
		G_BaseRequestData::ConvertToGodotModel(source, target);
	}

	static void ConvertToCoreModel(const godot::Dictionary& source, RGN::Modules::Inventory::AddToInventoryRequestData& target) {
        godot::Array g_target_inventoryDatas = source["inventoryDatas"];
        for (int i = 0; i < g_target_inventoryDatas.size(); ++i) {
            godot::Dictionary g_target_inventoryDatas_item = g_target_inventoryDatas[i];
            RGN::Modules::Inventory::InventoryData cpp_source_inventoryDatas_item;
            G_InventoryData::ConvertToCoreModel(g_target_inventoryDatas_item, cpp_source_inventoryDatas_item);
            target.inventoryDatas.push_back(cpp_source_inventoryDatas_item);
        }
		G_BaseRequestData::ConvertToCoreModel(source, target);
	}
};