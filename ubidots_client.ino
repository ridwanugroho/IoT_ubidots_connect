void callback(char* topic, byte* payload, unsigned int length){
  char p[length + 1];
  memcpy(p, payload, length);
  p[length] = NULL;
  String message(p);
  Serial.println("message : " + message);
}

bool post(String Url, String value, String &messages, int &httpCode){
  HTTPClient http;
  http.begin(Url);
  http.addHeader("Content-Type", "application/json");
  http.addHeader("X-Auth-Token", UBIDOTS_TOKEN); 
  httpCode = http.POST(value);

  if (httpCode != 200){
    messages = http.getString();
    return false;
  }
  return true;
}


bool retrieve(String Url, String &value, int &httpCode){
  HTTPClient http;
  http.begin(Url);
  http.addHeader("Content-Type", "application/json");
  http.addHeader("X-Auth-Token", UBIDOTS_TOKEN); 
  httpCode = http.GET();

  if (httpCode != 200){
    value = http.getString();
    return false;
  }
  return true;
}


void reconnectMQClient(){
  while(!client)
}
