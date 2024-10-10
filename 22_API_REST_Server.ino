#include <ESP8266WiFi.h>
#include <ESPAsyncWebServer.h>
#include <FS.h>
#include <ArduinoJson.h>

#include "config.h"  // Sustituir con datos de vuestra red
#include "API.hpp"
#include "Server.hpp"
#include "ESP8266_Utils.hpp"

void setup() 
{
	Serial.begin(9600);

	//ConnectWiFi_STA();

 ConnectWiFi_AP();
	InitServer();
}

void loop() 
{
}

