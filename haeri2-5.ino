float voltage ;
int ledpin = 5;//ledpin connected to digital pin 5
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//setup serial
    pinMode(ledpin, OUTPUT);//sets the digital pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage = analogRead(A3);//read the input voltage(analog pin A3)
  float v = voltage / 1023 * 5;//ating the real voltage value based on the analog sensor reading
  Serial.print("Voltage=");//show character
  Serial.println(v);//show voltage value
  //delay(1000);//waits for asecond
  int voltage1 = map(voltage, 0, 1023, 0, 255);//values go from 0 to 1023 , Range values go from 0 to 255
  analogWrite(ledpin,voltage1);
}
