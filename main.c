#include <DHT.h>

#define DHTPIN 2     // Pin where the DHT22 sensor is connected to
#define DHTTYPE DHT22 // DHT 22 sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("DHT22 Interfacing with ESP32");
  dht.begin();
}

void loop() {
  delay(2000);  // Delay between readings

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
}
