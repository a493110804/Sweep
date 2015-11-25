/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;
Servo main; // create servo object to control a servo

int pos = 0;   

void setup() {
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
  main.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);
    main.write(pos);                      // tell servo to go to position in variable 'pos'
    delay(15); 
  }
     for (pos = 180; pos >=0; pos -= 1)  {// goes from 180 degrees to 0 degrees
    myservo.write(pos);
    main.write(pos);                     // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
}
}
// waits 15ms for the servo to reach the position

 

//Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//int pos = 0;    // variable to store the servo position



