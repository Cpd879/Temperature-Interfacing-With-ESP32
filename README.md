# Temperature-Interfacing-With-ESP32
Temperature Interfacing With ESP32
# DHT22 Interfacing with ESP32

This Arduino C code is designed to interface with the DHT22 sensor and an ESP32 microcontroller. It reads temperature and humidity values from the DHT22 sensor and prints them to the Serial Monitor.

## Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)
- [ESP32 Board Support](https://github.com/espressif/arduino-esp32)
- [DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library)

## Wiring Instructions

Connect the DHT22 sensor to the ESP32 as follows:
- Connect the positive (VCC) pin of the DHT22 to the 3.3V pin on the ESP32.
- Connect the negative (GND) pin of the DHT22 to the GND pin on the ESP32.
- Connect the data pin of the DHT22 to pin 2 on the ESP32.

## Installation

1. Open the Arduino IDE.
2. Install the ESP32 board support by following [these instructions](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md).
3. Install the DHT Sensor Library by going to "Sketch" -> "Include Library" -> "Manage Libraries..." and then searching for "DHT".

## Upload the Code

1. Connect the ESP32 to your computer using a USB cable.
2. Select the correct board and port in the Arduino IDE.
3. Upload the code to the ESP32.

## Serial Monitor

1. Open the Serial Monitor in the Arduino IDE.
2. Set the baud rate to 115200.
3. Observe the temperature and humidity values printed every 2 seconds.

## Code Explanation

- The code initializes the DHT22 sensor and the serial communication.
- In the loop, it reads temperature and humidity values every 2 seconds.
- If the readings are valid, it prints them to the Serial Monitor.
- If readings are invalid, it prints an error message.

Feel free to customize the code according to your specific requirements.

