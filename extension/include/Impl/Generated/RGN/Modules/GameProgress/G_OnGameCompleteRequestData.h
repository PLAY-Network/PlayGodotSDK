#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../../Generated/RGN/Modules/GameProgress/OnGameCompleteRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/G_Currency.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/G_BaseMigrationRequestData.h"
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <vector>
#include <unordered_map>

struct G_OnGameCompleteRequestData {
	static void ConvertToGodotModel(const RGN::Modules::GameProgress::OnGameCompleteRequestData& source, godot::Dictionary& target) {
        godot::Array g_target_reward;
        for (const auto& source_reward_item : source.reward) {
            godot::Dictionary g_source_reward_item;
            godot::Dictionary g_g_source_reward_item = g_source_reward_item;
            G_Currency::ConvertToGodotModel(source_reward_item, g_g_source_reward_item);
            g_target_reward.push_back(g_source_reward_item);
        }
        target["reward"] = g_target_reward;
		G_BaseMigrationRequestData::ConvertToGodotModel(source, target);
	}

	static void ConvertToCoreModel(const godot::Dictionary& source, RGN::Modules::GameProgress::OnGameCompleteRequestData& target) {
        godot::Array g_target_reward = source["reward"];
        for (int i = 0; i < g_target_reward.size(); ++i) {
            godot::Dictionary g_target_reward_item = g_target_reward[i];
            RGN::Modules::Currency::Currency cpp_source_reward_item;
            G_Currency::ConvertToCoreModel(g_target_reward_item, cpp_source_reward_item);
            target.reward.push_back(cpp_source_reward_item);
        }
		G_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
