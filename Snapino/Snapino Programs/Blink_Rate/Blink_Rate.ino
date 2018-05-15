//Blink Rate
const int LED = 9;
int val = 0;
void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  val = analogRead(0);      //Read the analog input pin 0, and assign it to val
  Serial.println(val);
  digitalWrite(LED, HIGH);  //Turn the LED on
  delay(val/2);             //Wait for (the value of val) in milliseconds
  digitalWrite(LED, LOW);   //Turn the LED off
  delay(val/2);             //Wait for (the value of val) in milliseconds
}

