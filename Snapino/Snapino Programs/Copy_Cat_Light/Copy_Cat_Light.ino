//Copy_Cat_Light

const int LED = 9;
const int pt = A0;
int pVal;
double counter = 0;
double rcounter = 0;
void setup() {
 Serial.begin(9600);
 pinMode(LED,OUTPUT);
 Serial.println("This is the Copy Cat Program");
 Serial.println();
}
void loop() {
  pVal = analogRead(pt);
  Serial.println(pVal);
  if(pVal < 10){                     //Add to the counter every 10 milliseconds if the phototransistor is covered
    ++counter;      
    delay(10);          }
    if((pVal > 50 ) && (counter > 0)){
      digitalWrite(LED,HIGH);          //Turn on LED for as long as the phototransistor was covered
      delay(counter * 10);
      counter = 0;
      }
  digitalWrite(LED,LOW);               //Turn the LED off
}

