// include libraries

#include "Config.h"  // Copnfiguracion de pines y redes

#include "webServer.h"
#include "Reles.h"


#include <JeVe_EasyOTA.h>  // https://github.com/jeroenvermeulen/JeVe_EasyOTA



EasyOTA OTA;

// configure server

void setup(){
  Serial.begin(9600);

  OTA.onMessage([](char *message, int line) {
    Serial.println(message);
  });
  OTA.setup(ssid, password, ARDUINO_HOSTNAME);
  
  // connect
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(200);
        Serial.print(".");
    }
    Serial.println("Connectado");
    // set up the callback for http server
    setup_server();
    setup_reles();
}
void loop()
{
    // check for client connections
     severhandler();
     OTA.loop();
}
