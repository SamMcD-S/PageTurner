/*A simple Bluetooth Page Turner using the bleKeyboard Library
 * Prototype Target: Sparkfun ESP32 Thing Plus C
 * Prototype Circuit: Connect the button to the ESP32 through a pull down resistor.
 * The input on BUTTON should be low when the button is not pressed.
 */
#include <BleKeyboard.h>
// Parameters for the button
#define BUTTON 15
#define REPEAT_DELAY 300 //the amount of time between successive page turns if the button is continually depressed (ms)

#define SOFT_BACK 4 // multiples of repeat_delay. SOFT_Back allows the user to turn the page backwards instead of forwards if the button is held for a "long press"

BleKeyboard bleKeyboard;
  
  void setup() {
    
  Serial.begin(9600);
  Serial.println("This is a test for BLE Keyboard");
  bleKeyboard.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
}
int softBackCount = 0;
void loop() {
  // put your main code here, to run repeatedly:
  if (bleKeyboard.isConnected()){
    
    if(digitalRead(BUTTON)==HIGH){
#ifdef SOFT_BACK
        softBackCount++;
        if (softBackCount == SOFT_BACK){
            Serial.println("Left Arrow");
            bleKeyboard.write(KEY_LEFT_ARROW);
        }
        else{
        Serial.println("Right Arrow");
        bleKeyboard.write(KEY_RIGHT_ARROW);
        digitalWrite(LED_BUILTIN,HIGH);
        delay(REPEAT_DELAY);
        }
#else
        Serial.println("Right Arrow");
        bleKeyboard.write(KEY_RIGHT_ARROW);
        digitalWrite(LED_BUILTIN,HIGH);
        delay(REPEAT_DELAY);
#endif
    }
    else softBackCount = 0;

  }
 
}
