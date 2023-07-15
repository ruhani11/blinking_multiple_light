/* 
  This program blinks LED connection to the pin number 13, 12, and 11 
*/  
int led1 = 12;
int led2 =11;

void setup()  
{  
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);  
   
}  
void loop()  
{  
 // the first LED is made to blink one time  
  digitalWrite(led1, HIGH);  
  delay(1000); // delay time in milliseconds  
  digitalWrite(led1, LOW);  
  delay(1000);  
  // the second LED will blink two times  
  digitalWrite(led2,  HIGH);  
  delay(500); // the duration is 0.5 seconds  
  digitalWrite(led2, LOW);  
  delay(500);   
}  