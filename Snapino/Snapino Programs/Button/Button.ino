//Button 

const int ledPin =  10;
const int button = 9;   
int buttonState = 0;      

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(button, INPUT);     
}

void loop(){
   buttonState = digitalRead(button);  //Read the value from the button and assign it to a variable
   
  if (buttonState == HIGH) {     
    digitalWrite(ledPin, HIGH);         //If the value is high (button is pressed) turn on the LED
  } 
  else {
    digitalWrite(ledPin, LOW);          //If anything else happens turn the LED off
  }
}

