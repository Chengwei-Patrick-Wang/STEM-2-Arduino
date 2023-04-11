int LED = 2;
int BUTTON = 3;
bool BUTTONSTATE = false;
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT);
}

void loop() {
  BUTTONSTATE = digitalRead(BUTTON);
if (BUTTONSTATE == HIGH){
  digitalWrite(LED, HIGH);
}
else {
  digitalWrite(LED, LOW);
}
}
