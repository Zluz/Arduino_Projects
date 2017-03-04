
// see also
// https://github.com/adafruit/DHT-sensor-library/blob/master/examples/DHTtester/DHTtester.ino

#include "DHT.h"

#define PIN 10
DHT dht( PIN, DHT11 );


void setup() {
  Serial.begin(115200);
  
  dht.begin();
}


void loop() {

  const float fHumid = dht.readHumidity();
  const String strHumid = String(fHumid);
  Serial.println( "fHumid = " + strHumid );

  const float fTemp = dht.readTemperature(true);
  const String strTemp = String(fTemp);
  Serial.println( "fTemp = " + strTemp );

  delay(2000);
}

