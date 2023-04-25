int speakerPin = 9;  // Connect the speaker to digital pin 9
int buttonPin = 13;
int buttonState = 0;

void setup() {
  pinMode(speakerPin, OUTPUT);  // Set the speaker pin as an output
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Define the frequency of the notes in Hz
  int noteC = 261;
  int noteD = 294;
  int noteE = 329;
  int noteF = 349;
  int noteG2 = 392;
  int noteG1 = 196;
  int noteA = 220;
  int noteB = 493;

  // Play the notes in the melody
  int buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
  tone(speakerPin, noteC, 750);
  delay(750);
  tone(speakerPin, noteD, 750);
  delay(750);
  tone(speakerPin, noteG1, 500);
  delay(500);
  tone(speakerPin, noteD, 750);
  delay(750);
  tone(speakerPin, noteE, 750);
  delay(750);
  tone(speakerPin, noteG2, 125);
  delay(125);
  tone(speakerPin, noteF, 125);
  delay(125);
  tone(speakerPin, noteE, 125);
  delay(125);
  tone(speakerPin, noteD, 125);
  delay(125);
  tone(speakerPin, noteC, 750);
  delay(750);
  tone(speakerPin, noteD, 750);
  delay(750);
  tone(speakerPin, noteG1, 1250);
  delay(1250);
  delay(500);
  tone(speakerPin, noteG1, 125);
  delay(125);
  tone(speakerPin, noteG1, 125);
  delay(125);
  tone(speakerPin, noteA, 125);
  delay(125);
  tone(speakerPin, noteC, 125);
  delay(125);
  tone(speakerPin, noteC, 125);
  delay(125);
  tone(speakerPin, noteC, 125);
  delay(125);
  }
}
