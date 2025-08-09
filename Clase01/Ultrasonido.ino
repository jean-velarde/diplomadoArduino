float distancia;
float v = 0.0343;
long t;

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
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
}

void loop() {
  digitalWrite(8,0);
  delayMicroseconds(2);
  digitalWrite(8,1);
  delayMicroseconds(10);
  digitalWrite(8,0);

  t = pulseIn(9,1);
  distancia = v * t/2;
  Serial.println(distancia);
}
