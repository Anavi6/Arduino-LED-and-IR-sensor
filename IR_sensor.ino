void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
  //config. sensor inputs
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//to get the IR sensor reading
  int Reading0 = analogRead(A0);
  int Reading1 = analogRead(A1);

//printing the readings
  //Serial.println("A0");
  Serial.println(Reading0);
  delay(100);
  //Serial.println("A1");
  //Serial.println(Reading1);
  //delay(500);
}
