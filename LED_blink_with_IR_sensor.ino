void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(A0);

  Serial.println(reading);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  if (reading < 55)
  {
    //LED1 turns on
    digitalWrite(4, HIGH);
  }

  if (reading < 50)
  {
    //LED2 turns on
    digitalWrite(3, HIGH);
  }
  if (reading < 45)
  {
    //LED3 turns on
    digitalWrite(2, HIGH);
  }
}
