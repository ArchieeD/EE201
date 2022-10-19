//https://wokwi.com/projects/345983258783122002
#define PIN_TRIG 5
#define PIN_ECHO 4
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

  Serial.begin(9600);

  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  int duration = pulseIn(PIN_ECHO, HIGH);
  digitalWrite(13, HIGH);
  delay(duration/100);
  digitalWrite(13, LOW);
  delay(duration/100);

  

}
