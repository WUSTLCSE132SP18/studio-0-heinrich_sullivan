int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int secs = millis()/999;
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  Serial.print(secs);
  Serial.println(" sec have elapsed");
  Serial.print(millis());
  Serial.println(" millis elapsed");
}
