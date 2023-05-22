#include <RF24.h>
#include <RF24_config.h>
#include <nRF24L01.h>
#include <printf.h>
#include <string.h>
#include "pitches.h"

RF24 radio(7, 8); // CE, CSN
int speakerPin = 2;
const byte addresses[][6] = {"00001", "00002"};
int buttonState = 0;
bool soundPlayed = false;

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(addresses[1]);
  radio.openReadingPipe(1, addresses[0]);
  radio.setPALevel(RF24_PA_MIN);
  pinMode(2, OUTPUT);
  radio.startListening();
  
}

void loop() {
    char text[32] = "";
    if (radio.available()) {
      
      radio.read(&text, sizeof(text));
      char check1[32] = "Hello World";
      char check2[32] = "Goodbye World";
      char check3[32] = "Hola World";
      char check4[32] = "Adios World";
      if (strcmp(text, check1) == 0) {
        for (int i = 500; i < 1500; i++) {
          tone(speakerPin, i);
          delay(1);
        }
        for (int i = 1500; i > 500; i--) {
          tone(speakerPin, i);
          delay(1);
        }
        soundPlayed = true;
      }  
      else if (strcmp(text, check2) == 0) {
        noTone(speakerPin);
      }  
      
      else if (strcmp(text, check3) == 0) {
         tone(speakerPin, NOTE_A3, 250);
  delay(250);
  tone(speakerPin, NOTE_C3, 250);
  delay(250);
  tone(speakerPin, NOTE_D3, 250);
  delay(250);
  tone(speakerPin, NOTE_E3, 250);
  delay(250);
  tone(speakerPin, NOTE_A3, 500);
  delay(500);
  tone(speakerPin, NOTE_A3, 250);
  delay(250);
  tone(speakerPin, NOTE_C3, 250);
  delay(250);
  tone(speakerPin, NOTE_D3, 250);
  delay(250);
  tone(speakerPin, NOTE_E3, 250);
  delay(250);
  tone(speakerPin, NOTE_F3, 250);
  delay(250);
  tone(speakerPin, NOTE_E3, 250);
  delay(250);
  tone(speakerPin, NOTE_C3, 250);
  delay(250);
  tone(speakerPin, NOTE_D3, 500);
  delay(500);
  tone(speakerPin, NOTE_D3, 250);
  delay(250);
  tone(speakerPin, NOTE_C3, 500);
  delay(500);
  tone(speakerPin, NOTE_E3, 250);
    delay(250);
    tone(speakerPin, NOTE_A3, 500);
    delay(5000);
        soundPlayed = true;
      }  
      
      else if (strcmp(text, check4) == 0) {
        noTone(speakerPin);
      }  
    }
    delay(5);
    
    if (soundPlayed){
      char confirmation[32] = "done";
      radio.write(&confirmation, sizeof(confirmation));
      Serial.println("done");
      soundPlayed = 0;

    }
    
}