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
    wifiMulti.addAP("PaulJohnson", "pluriels2");
    wifiMulti.addAP("iPhone de Jonathan", "fgwk9u5hgggs7");
    wifiMulti.addAP("NETGEAR", "v13btsiris");

	Serial.println("Connecting Wifi...");
    if(wifiMulti.run() == WL_CONNECTED) {
        Serial.println("");
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
        
    }
      Serial.print("");
      delay(5000);
      Serial.println("AT+CIPSTATUS=id,type,addr,port,tetype");
}

void loop() {
    if(wifiMulti.run() != WL_CONNECTED) {
        Serial.println("WiFi not connected!");
        delay(1000);
    }
    else {
    Serial.print("");
      delay(500);
      Serial.println("AT+CIPSTATUS=id,type,addr,port,tetype");
}
}
