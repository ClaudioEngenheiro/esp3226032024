void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
pinMode(19, OUTPUT);
pinMode(18, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(19, HIGH);
  delay(200); // this speeds up the simulation
  digitalWrite(19, LOW);
  Serial.println(digitalRead(18));
  delay(200);
}
