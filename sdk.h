#pragma once

#include <string>
#include "nlohmann/json.hpp"

class SDK {
public:
    SDK(const std::string& sdk_key);
    bool registerUser(const std::string& username, const std::string& hwid, const std::string& key);
    bool authenticateUser(const std::string& username, const std::string& hwid);
    bool extendSubscription(const std::string& username, const std::string& hwid, const std::string& key);

private:
    std::string m_sdk_key;
    bool sendRequest(const std::string& command, const nlohmann::json& data);
    void antiDebug();
};