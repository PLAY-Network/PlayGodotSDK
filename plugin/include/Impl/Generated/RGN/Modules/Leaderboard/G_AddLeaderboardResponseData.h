#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../../Generated/RGN/Modules/Leaderboard/AddLeaderboardResponseData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardData.h"
#include "G_LeaderboardData.h"
#include "Impl/G_Defs.h"
#include <string>
#include <vector>
#include <unordered_map>

struct G_AddLeaderboardResponseData {
	static void ConvertToGodotModel(const RGN::Modules::Leaderboard::AddLeaderboardResponseData& source, godot::Dictionary& target) {
        target["leaderboardId"] = godot::String(source.leaderboardId.c_str());
        godot::Dictionary g_target_leaderboard;
        G_LeaderboardData::ConvertToGodotModel(source.leaderboard, g_target_leaderboard);
        target["leaderboard"] = g_target_leaderboard;
	}

	static void ConvertToCoreModel(const godot::Dictionary& source, RGN::Modules::Leaderboard::AddLeaderboardResponseData& target) {
        godot::String g_source_leaderboardId = source["leaderboardId"];
        target.leaderboardId = std::string(g_source_leaderboardId.utf8().get_data());
        G_LeaderboardData::ConvertToCoreModel(source["leaderboard"], target.leaderboard);
	}
};
