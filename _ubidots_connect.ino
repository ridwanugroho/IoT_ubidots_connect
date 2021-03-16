
#include <WiFi.h>
#include <PubSubClient.h>
#include <HTTPClient.h>

#define WIFISSID "Styr-atas"
#define WIFIPASSWORD "upikcantiksekali"
#define UBIDOTS_TOKEN "BBFF-WnYkuFZ9X0PjnSTBTFiT0CYrHo0tyS"
#define MQTT_CLUENT_NAME "CLIENT1_testMQTTClient"

#define DEV_LABEL "testdevice"
#define VAR_LABEL "testvariabel"

char mqttBroker[] = "industrial.api.ubidots.com";
char payload[100];
char topic[150];
char topicSubscriber[100];

WiFiClient ubidotsClient;
PubSubClient client(ubidotsClient);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
