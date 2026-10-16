// Copy this file to secrets.h (same folder) and fill in your own values.
// secrets.h is listed in .gitignore so your credentials never get committed.
#pragma once

// Name used in the alert text ("<USER_NAME> may be in trouble...")
#define USER_NAME "Your Name"

// ---------- Wi-Fi ----------
// 0 = normal Wi-Fi / phone hotspot, 1 = WPA2-Enterprise (campus network)
#define USE_WPA2_ENTERPRISE 0

const char* WIFI_SSID     = "your-network-name";
const char* WIFI_PASSWORD = "your-wifi-password";      // used when USE_WPA2_ENTERPRISE = 0

const char* EAP_IDENTITY  = "you@school.edu";          // used when USE_WPA2_ENTERPRISE = 1
const char* EAP_USERNAME  = "you";
const char* EAP_PASSWORD  = "your-school-password";

// ---------- Telegram ----------
// Create a bot with @BotFather to get a token; message the bot, then get your
// chat ID from https://api.telegram.org/bot<TOKEN>/getUpdates
const char* BOT_TOKEN = "123456789:replace-with-your-bot-token";
const char* CHAT_ID   = "123456789";
