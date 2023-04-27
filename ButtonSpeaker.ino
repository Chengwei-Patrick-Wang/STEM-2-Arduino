int speakerPin = 9;  // Connect the speaker to digital pin 9
int buttonPin = 13;
int buttonPin2 = 12;
int buttonState = 0;

void setup() {
  pinMode(speakerPin, OUTPUT);  // Set the speaker pin as an output
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Define the frequency of the notes in Hz
   int C1 = 33;
int CSharp1 = 35;
int D1 = 37;
int DSharp1 = 39;
int E1 = 41;
int F1 = 44;
int FSharp1 = 46;
int G1 = 49;
int GSharp1 = 52;
int A1 = 55;
int ASharp1 = 58;
int B = 62;

int C2 = 65;
int CSharp2 = 69;
int D2 = 73;
int DSharp2 = 78;
int E2 = 82;
int F2 = 87;
int FSharp2 = 93;
int G2 = 98;
int GSharp2 = 104;
int A2 = 110;
int ASharp2 = 117;
int B2 = 123;

int C3 = 131;
int CSharp3 = 139;
int D3 = 147;
int DSharp3 = 156;
int E3 = 165;
int F3 = 175;
int FSharp3 = 185;
int G3 = 196;
int GSharp3 = 208;
int A3 = 220;
int ASharp3 = 233;
int B3 = 247;

int C4 = 262;
int CSharp4 = 277;
int D4 = 294;
int DSharp4 = 311;
int E4 = 330;
int F4 = 349;
int FSharp4 = 370;
int G4 = 392;
int GSharp4 = 415;
int A4 = 440;
int ASharp4 = 466;
int B4 = 494;

int C5 = 523;
int CSharp5 = 554;
int D5 = 587;
int DSharp5 = 622;
int E5 = 659;
int F5 = 698;
int FSharp5 = 740;
int G5 = 784;
int GSharp5 = 831;
int A5 = 880;
int ASharp5 = 932;
int B5 = 988;

int C6 = 1047;
int CSharp6 = 1109;
int D6 = 1175;
int DSharp6 = 1245;
int E6 = 1319;
int F6 = 1397;
int FSharp6 = 1480;
int G6 = 1568;
int GSharp6 = 1661;
int A6 = 1760;
int ASharp6 = 1865;
int B6 = 1976;

int C7 = 2093;
int CSharp7 = 2217;
int D7 = 2349;
int DSharp7 = 2489;
int E7 = 2637;
int F7 = 2794;
int FSharp7 = 2960;
int G7 = 3136;
int GSharp7 = 3322;
int A7 = 3520;
int ASharp7 = 3729;
int B7 = 3951;

int C8 = 4186;

  // Play the notes in the melody
  int buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    tone(speakerPin, A3, 250);
  delay(250);
  tone(speakerPin, C4, 250);
  delay(250);
  tone(speakerPin, D4, 250);
  delay(250);
  tone(speakerPin, E4, 250);
  delay(250);
  tone(speakerPin, A3, 500);
  delay(500);
  tone(speakerPin, A3, 250);
  delay(250);
  tone(speakerPin, C4, 250);
  delay(250);
  tone(speakerPin, D4, 250);
  delay(250);
  tone(speakerPin, E4, 250);
  delay(250);
  tone(speakerPin, F4, 250);
  delay(250);
  tone(speakerPin, E4, 250);
  delay(250);
  tone(speakerPin, C4, 250);
  delay(250);
  tone(speakerPin, D4, 500);
  delay(500);
  tone(speakerPin, D4, 250);
  delay(250);
  tone(speakerPin, C4, 500);
  delay(500);
  tone(speakerPin, E4, 250);
  delay(250);
  tone(speakerPin, A3, 500);
  delay(500);
  }

}
