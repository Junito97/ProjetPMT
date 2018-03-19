/*
 *  This sketch trys to Connect to the best AP based on a given list
 *
 */

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;

void setup() {
    Serial.begin(115200);
    delay(10);
  
    WiFi.mode(WIFI_STA);
    wifiMulti.addAP("Paul Johnson", "pluriels2");
    wifiMulti.addAP("iPhone de Jonathan", "fgwk9u5hgggs7");
    wifiMulti.addAP("NETGEAR", "v13btsiri");

    Serial.println("Connecting Wifi...");
    int i = 0;
    while (wifiMulti.run() != WL_CONNECTED) { // Wait for the Wi-Fi to connect: scan for Wi-Fi networks, and connect to the strongest of the networks above
        delay(1000);
        Serial.print('.');
    }
    if(wifiMulti.run() == WL_CONNECTED) {
        Serial.println("");
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
        Serial.print("Connecter au réseau wifitte :");
        Serial.println(WiFi.SSID());
        Serial.println("Welcome :)");
  }
}
void loop(){}
