void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int pot = analogRead(A0);
  int led = map(pot, 0, 1023, 0, 255);
  int activeLed = map(led, 0, 255, 0, 100);
  analogWrite(3, led);
  Serial.print("ADC: "); Serial.println(pot);
  Serial.print("LED: "); Serial.println(led);
  if(activeLed > 80 ){
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
  }else {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
  }
}
