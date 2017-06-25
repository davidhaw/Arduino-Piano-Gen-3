 
  // Create a very simple "breadboard" piano using a jumper wire to simulate pressing each "piano" key.
  // This one has 5 notes, but you can expand it using more digital IO pins.
  //  
  //  author:
  //   Rolf Widenfelt - Feb 2014 - Workshop Weekend
 //
 //Additional Edits done by David Hawiger for arduinofuin.tk

 #include "pitches.h"

 int tonepin = 13;  // PWM0 output = 9, PWM1 output = 10

 // these are the "piano keys" - they are just input pins
 #define D3 3
 #define D4 4
 #define D5 5
 #define D6 6
 #define D7 7
 #define D8 8
 #define D9 9
 #define D10 10
 #define D11 11    

 void setup() {          
   // setup internal pullups on "piano keys" (pins D2 through D6)
   pinMode(D3, INPUT);
   pinMode(D4, INPUT);
   pinMode(D5, INPUT);
   pinMode(D6, INPUT);
   pinMode(D7, INPUT);
   pinMode(D8, INPUT);
   pinMode(D9, INPUT);
   pinMode(D10, INPUT);
   pinMode(D11, INPUT);
   
   digitalWrite(D3, HIGH);
   digitalWrite(D4, HIGH);
   digitalWrite(D5, HIGH);
   digitalWrite(D6, HIGH);
   digitalWrite(D7, HIGH);
   digitalWrite(D8, HIGH);
   digitalWrite(D9, HIGH);
   digitalWrite(D10, HIGH);
   digitalWrite(D11, HIGH);
 }    

 void loop() {
   while (1) {    
     // scan "piano keys" for one that is "pressed"
     if (digitalRead(D11) == LOW) {
       tone(tonepin, NOTE_C4);
     } else if (digitalRead(D10) == LOW) {
       tone(tonepin, NOTE_D4);
     } else if (digitalRead(D9) == LOW) {
       tone(tonepin, NOTE_E4);
     } else if (digitalRead(D8) == LOW) {
       tone(tonepin, NOTE_F4);
     } else if (digitalRead(D7) == LOW) {
       tone(tonepin, NOTE_G4);
     //Add extra tone for D6
   } else if (digitalRead(D6) == LOW) {
       tone(tonepin, NOTE_E7); 
    
     }else {
       noTone(tonepin);
     }
     delay(100);    // probably not needed.. you can experiment!
   }
 }
