#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementReward.h"
#include "G_AchievementReward.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/G_BaseRequestData.h"
#include "Impl/G_Defs.h"
#include <string>
#include <vector>
#include <unordered_map>

/**
 * Represents achievement data from the backend
 */
struct G_AchievementData {
	static void ConvertToGodotModel(const RGN::Modules::Achievement::AchievementData& source, godot::Dictionary& target) {
        target["id"] = godot::String(source.id.c_str());
        godot::Array g_target_appIds;
        for (const auto& source_appIds_item : source.appIds) {
            godot::String g_source_appIds_item;
            g_source_appIds_item = godot::String(source_appIds_item.c_str());
            g_target_appIds.push_back(g_source_appIds_item);
        }
        target["appIds"] = g_target_appIds;
        godot::Array g_target_tags;
        for (const auto& source_tags_item : source.tags) {
            godot::String g_source_tags_item;
            g_source_tags_item = godot::String(source_tags_item.c_str());
            g_target_tags.push_back(g_source_tags_item);
        }
        target["tags"] = g_target_tags;
        target["requestName"] = godot::String(source.requestName.c_str());
        target["name"] = godot::String(source.name.c_str());
        target["description"] = godot::String(source.description.c_str());
        target["setBy"] = godot::String(source.setBy.c_str());
        target["isClaimable"] = source.isClaimable;
        target["valueToReach"] = source.valueToReach;
        godot::Array g_target_completedAchievementsToUnlock;
        for (const auto& source_completedAchievementsToUnlock_item : source.completedAchievementsToUnlock) {
            godot::String g_source_completedAchievementsToUnlock_item;
            g_source_completedAchievementsToUnlock_item = godot::String(source_completedAchievementsToUnlock_item.c_str());
            g_target_completedAchievementsToUnlock.push_back(g_source_completedAchievementsToUnlock_item);
        }
        target["completedAchievementsToUnlock"] = g_target_completedAchievementsToUnlock;
        target["repeatable"] = source.repeatable;
        target["repeatNoMoreOftenThanCron"] = godot::String(source.repeatNoMoreOftenThanCron.c_str());
        target["startTime"] = source.startTime;
        target["endTime"] = source.endTime;
        target["resetTimeLimitEvery"] = godot::String(source.resetTimeLimitEvery.c_str());
        godot::Array g_target_rewards;
        for (const auto& source_rewards_item : source.rewards) {
            godot::Dictionary g_source_rewards_item;
            godot::Dictionary g_g_source_rewards_item;
            G_AchievementReward::ConvertToGodotModel(source_rewards_item, g_g_source_rewards_item);
            g_source_rewards_item = g_g_source_rewards_item;
            g_target_rewards.push_back(g_source_rewards_item);
        }
        target["rewards"] = g_target_rewards;
        target["createdAt"] = source.createdAt;
        target["updatedAt"] = source.updatedAt;
        target["createdBy"] = godot::String(source.createdBy.c_str());
        target["updatedBy"] = godot::String(source.updatedBy.c_str());
		G_BaseRequestData::ConvertToGodotModel(source, target);
	}

	static void ConvertToCoreModel(const godot::Dictionary& source, RGN::Modules::Achievement::AchievementData& target) {
        godot::String g_source_id = source["id"];
        target.id = std::string(g_source_id.utf8().get_data());
        godot::Array g_target_appIds = source["appIds"];
        for (int i = 0; i < g_target_appIds.size(); ++i) {
            godot::String g_target_appIds_item = g_target_appIds[i];
            string cpp_source_appIds_item;
            godot::String g_g_target_appIds_item = g_target_appIds_item;
            cpp_source_appIds_item = std::string(g_g_target_appIds_item.utf8().get_data());
            target.appIds.push_back(cpp_source_appIds_item);
        }
        godot::Array g_target_tags = source["tags"];
        for (int i = 0; i < g_target_tags.size(); ++i) {
            godot::String g_target_tags_item = g_target_tags[i];
            string cpp_source_tags_item;
            godot::String g_g_target_tags_item = g_target_tags_item;
            cpp_source_tags_item = std::string(g_g_target_tags_item.utf8().get_data());
            target.tags.push_back(cpp_source_tags_item);
        }
        godot::String g_source_requestName = source["requestName"];
        target.requestName = std::string(g_source_requestName.utf8().get_data());
        godot::String g_source_name = source["name"];
        target.name = std::string(g_source_name.utf8().get_data());
        godot::String g_source_description = source["description"];
        target.description = std::string(g_source_description.utf8().get_data());
        godot::String g_source_setBy = source["setBy"];
        target.setBy = std::string(g_source_setBy.utf8().get_data());
        bool g_source_isClaimable = source["isClaimable"];
        target.isClaimable = g_source_isClaimable;
        int32_t g_source_valueToReach = source["valueToReach"];
        target.valueToReach = g_source_valueToReach;
        godot::Array g_target_completedAchievementsToUnlock = source["completedAchievementsToUnlock"];
        for (int i = 0; i < g_target_completedAchievementsToUnlock.size(); ++i) {
            godot::String g_target_completedAchievementsToUnlock_item = g_target_completedAchievementsToUnlock[i];
            string cpp_source_completedAchievementsToUnlock_item;
            godot::String g_g_target_completedAchievementsToUnlock_item = g_target_completedAchievementsToUnlock_item;
            cpp_source_completedAchievementsToUnlock_item = std::string(g_g_target_completedAchievementsToUnlock_item.utf8().get_data());
            target.completedAchievementsToUnlock.push_back(cpp_source_completedAchievementsToUnlock_item);
        }
        bool g_source_repeatable = source["repeatable"];
        target.repeatable = g_source_repeatable;
        godot::String g_source_repeatNoMoreOftenThanCron = source["repeatNoMoreOftenThanCron"];
        target.repeatNoMoreOftenThanCron = std::string(g_source_repeatNoMoreOftenThanCron.utf8().get_data());
        int64_t g_source_startTime = source["startTime"];
        target.startTime = g_source_startTime;
        int64_t g_source_endTime = source["endTime"];
        target.endTime = g_source_endTime;
        godot::String g_source_resetTimeLimitEvery = source["resetTimeLimitEvery"];
        target.resetTimeLimitEvery = std::string(g_source_resetTimeLimitEvery.utf8().get_data());
        godot::Array g_target_rewards = source["rewards"];
        for (int i = 0; i < g_target_rewards.size(); ++i) {
            godot::Dictionary g_target_rewards_item = g_target_rewards[i];
            RGN::Modules::Achievement::AchievementReward cpp_source_rewards_item;
            G_AchievementReward::ConvertToCoreModel(g_target_rewards_item, cpp_source_rewards_item);
            target.rewards.push_back(cpp_source_rewards_item);
        }
        int64_t g_source_createdAt = source["createdAt"];
        target.createdAt = g_source_createdAt;
        int64_t g_source_updatedAt = source["updatedAt"];
        target.updatedAt = g_source_updatedAt;
        godot::String g_source_createdBy = source["createdBy"];
        target.createdBy = std::string(g_source_createdBy.utf8().get_data());
        godot::String g_source_updatedBy = source["updatedBy"];
        target.updatedBy = std::string(g_source_updatedBy.utf8().get_data());
		G_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
