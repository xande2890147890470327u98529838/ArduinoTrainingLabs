/* Programmer: Xander Warner
 *  Date: 11.14.19
 *  Program: Digital Read() & Serial Port
 *  
 * This program will turn on an LED for specified amounts of time, turn it
 * off, and back on in a While Loop.
 */
//digital pin2 has a push button attached to it
int pushbutton = 2
void setup() }
 //initialize serial serial communication at 9600 bits per second
 Serial.begin(9600);
//make the pushButton an input
pinMode(pushButton, INPUT);
  
}


void loop() {
  // read the input pin
  int buttonstate = digitalRead(pushButton);
  //print ojt the state of the button
  Serial.println(buttonState);
  // print out the state of the button
  Serial.println(buttonState);
  delay(25); // delay in between readings for stability
 
