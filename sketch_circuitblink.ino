/*
  Blinking LEDs - test program to run 3 LEDs in a pattern of blinks
*/

int led1 = 2;
int led2 = 1;
int led3 = 0  ;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);    

}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500); 
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  
  digitalWrite(led2, HIGH);    // turn the LED on (HIGH is the voltage level)
   delay(500);                      // wait for 1/2 a second
  digitalWrite(led2, LOW);     // turn the LED off by making the voltage LOW
  
  digitalWrite(led3, HIGH);     // turn the LED on (HIGH is the voltage level)
   delay(500);                      // wait for 1/2 a second
  digitalWrite(led3, LOW);      // turn the LED off by making the voltage LOW

}
