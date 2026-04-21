#include <Arduino.h>
#define irPin 2
void setup() {
    Serial.begin(9600);
    pinMode(irPin, INPUT);
}

void loop() {
    int irValue = digitalRead(irPin);
    if (irValue == HIGH)
    {
        Serial.println("IR Sensor:No obstacle");
    }
    else
    {
        Serial.println("IR Sensor:obstacle detected");
    }
    delay(500);
}