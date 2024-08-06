#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../Utility/G_CancellationToken.h"
#include "../../../../../Utility/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Messaging/MessagingModule.h"
#include "../../../../../Generated/RGN/Modules/Messaging/IMessageReceiver.h"
#include "G_IMessageReceiver.h"
#include "Impl/G_Defs.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

class G_MessagingModule : public godot::Object {
    REG_GCLASS(G_MessagingModule, godot::Object);
#ifdef GODOT4
    static inline G_MessagingModule* singleton = nullptr;
#endif
public:
#ifdef GODOT3
    void _init() {}
#else
    static G_MessagingModule *get_singleton() {
        return singleton;
    }
    G_MessagingModule() {
        ERR_FAIL_COND(singleton != nullptr);
        singleton = this;
    }
    ~G_MessagingModule() {
        ERR_FAIL_COND(singleton != this);
        singleton = nullptr;
    }
#endif
    REG_GCLASS_METHODS_HEADER() {
        BIND_GCLASS_METHOD_DEFVAL(G_MessagingModule::subscribe, GCLASS_METHOD_SIGNATURE("subscribe", "topic", "messageReceiver", "onSuccess", "onFail"), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_MessagingModule::unsubscribe, GCLASS_METHOD_SIGNATURE("unsubscribe", "topic", "messageReceiver", "onSuccess", "onFail"), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
        BIND_GCLASS_METHOD_DEFVAL(G_MessagingModule::sendMessageByUserId, GCLASS_METHOD_SIGNATURE("sendMessageByUserId", "appId", "userId", "payload", "title", "text", "cancellationToken", "onSuccess", "onFail"), DEFVAL(nullptr), GCALLBACK_DEFVAL, GCALLBACK_DEFVAL);
    }
    void subscribe(
        godot::String topic,
        godot::Dictionary messageReceiver,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_topic;
            RGN::Modules::Messaging::IMessageReceiver cpp_messageReceiver;
            godot::String g_topic = topic;
            cpp_topic = std::string(g_topic.utf8().get_data());
            G_IMessageReceiver::ConvertToCoreModel(messageReceiver, cpp_messageReceiver);
            RGN::Modules::Messaging::MessagingModule::Subscribe(
                cpp_topic,
                cpp_messageReceiver
            );
    }
    void unsubscribe(
        godot::String topic,
        godot::Dictionary messageReceiver,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_topic;
            RGN::Modules::Messaging::IMessageReceiver cpp_messageReceiver;
            godot::String g_topic = topic;
            cpp_topic = std::string(g_topic.utf8().get_data());
            G_IMessageReceiver::ConvertToCoreModel(messageReceiver, cpp_messageReceiver);
            RGN::Modules::Messaging::MessagingModule::Unsubscribe(
                cpp_topic,
                cpp_messageReceiver
            );
    }
    void sendMessageByUserId(
        godot::String appId,
        godot::String userId,
        godot::String payload,
        godot::String title,
        godot::String text,
        godot::Object* cancellationToken,
        GCALLBACK onSuccess,
        GCALLBACK onFail) {
            string cpp_appId;
            string cpp_userId;
            string cpp_payload;
            string cpp_title;
            string cpp_text;
            RGN::CancellationToken cpp_cancellationToken;
            godot::String g_appId = appId;
            cpp_appId = std::string(g_appId.utf8().get_data());
            godot::String g_userId = userId;
            cpp_userId = std::string(g_userId.utf8().get_data());
            godot::String g_payload = payload;
            cpp_payload = std::string(g_payload.utf8().get_data());
            godot::String g_title = title;
            cpp_title = std::string(g_title.utf8().get_data());
            godot::String g_text = text;
            cpp_text = std::string(g_text.utf8().get_data());
            G_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Messaging::MessagingModule::SendMessageByUserId(
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
                cpp_userId,
                cpp_payload,
                cpp_title,
                cpp_text,
                cpp_cancellationToken
            );
    }
};
