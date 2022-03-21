// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT_Particle.h>

/// DHT parameters
#define DHTPIN 5
#define DHTTYPE DHT11


int temperature;


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  dht.begin();
}

void loop() {
  temperature = dht.getTempCelcius();
  Particle.publish("Temp", String(temperature), PRIVATE);
  delay(15000);

 
}
      

