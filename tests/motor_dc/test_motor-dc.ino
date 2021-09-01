// Made By Bl4ky113

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  Serial.println("Motor DC: True");
  delay(5000);
  digitalWrite(13, LOW);
  Serial.println("Motor DC: False");
  delay(5000);
}