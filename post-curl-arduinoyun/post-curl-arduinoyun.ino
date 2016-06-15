#include <Process.h>
String urlDataBase = "https://example.firebaseio.com/";

void setup()
{
  // Initialize Bridge
  Bridge.begin();
}

void loop()
{
  // We simulate a data of a fake sensor
  int sensor = random(10, 20);

  // In this step we post the data with curl to a json file called 
  // "registers.json" in our firebase database. If "registers.json" 
  // doesnt exist then the first post that we do will create it.
  Process p;
  p.runShellCommand("curl -k -X POST " + urlDataBase + "registers.json -d '{ \"value\" : " + String(sensor) + "}'");  
  Serial.println("data sent");
  while(p.running()); 
  delay(2000);                
}

