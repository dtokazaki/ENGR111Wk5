//Night_Light

const int LED = 9;
int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop(){
  val = analogRead(0);     //Read the value of analog pin 2, and assign it to a variable
  Serial.println(val);

if(val < 50){
  digitalWrite(LED, HIGH); //If the value is less than 50, turn on the LED
}
  else
  digitalWrite(LED, LOW);  //If anything else happens, turn the LED off
}

