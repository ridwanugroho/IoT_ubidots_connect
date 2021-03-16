void reconnectWiFi(int timeout){
  int timeoutCounter = millis();
  WiFi.begin(WIFISSID, WIFIPASSWORD);
  while(WiFi.status() != WL_CONNECTED){
    if(millis() - timeoutCounter > timeout ){
      Serial.println("Timeout. Please connect to another network.");
      while(1){delay(10);}
    }
  }
}
