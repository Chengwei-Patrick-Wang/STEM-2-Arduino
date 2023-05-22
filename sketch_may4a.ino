
#include <RF24.h>
#include <RF24_config.h>
#include <nRF24L01.h>
#include <printf.h>
#include "pitches.h"

RF24 radio(7, 8); // CE, CSN
int buttonState = 0;
bool status = false;

const byte addresses[][6] = {"00001", "00002"};

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(addresses[0]);
  radio.openReadingPipe(1, addresses[1]);
  radio.setPALevel(RF24_PA_MIN);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  radio.stopListening();
}

void loop() {
  buttonState = digitalRead(2);
  
  if (buttonState == HIGH) {
    const char text[] = "Hello World";
    radio.write(&text, sizeof(text));
  }
  else if (buttonState == LOW) {
    const char text[] = "Goodbye World";
    radio.write(&text, sizeof(text));
    //delay(100);
  }
  
  buttonState = digitalRead(3);
  if (buttonState == HIGH) {
    const char text[] = "Hola World";
    radio.write(&text, sizeof(text));
    //delay(100);
  }
  else if (buttonState == LOW) {
    const char text[] = "Adios World";
    radio.write(&text, sizeof(text));
    //delay(100);
  }
  delay(10);
}