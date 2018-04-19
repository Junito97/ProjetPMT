#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;

void setup() {
    Serial.begin(115200);
    delay(10);
    WiFi.mode(WIFI_STA);
    wifiMulti.addAP("iPhone de Junior", "pluriels2");
    wifiMulti.addAP("iPhone de Jonathan", "fgwk9u5hgggs7");
    wifiMulti.addAP("NETGEAR", "v13btsiris");

    Serial.println("Tentative de connexion au réseau");
    int i = 0;
    while (wifiMulti.run() != WL_CONNECTED) { 
        delay(1000);
        Serial.print('.');
    }
    if(wifiMulti.run() == WL_CONNECTED) {
        Serial.println("");
        Serial.println("Connexion Wi-Fi réussie.");
        Serial.println("Adresse IP : ");
        Serial.println(WiFi.localIP());
        Serial.print("Connecter au réseau wifi : ");
        Serial.println(WiFi.SSID()); } 
  }
 
void loop(){}
