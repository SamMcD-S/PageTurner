# Bluetooth Page-Turning pedal
Musicians utilize Bluetooth Pedals to turn pages while reading music electronically. However, these gadgets tend to be very expensive in proportion to their complexity. While pedals are often between $75-100, they only require simple (and inexpensive) electronics.

#  Version 1, Prototype
Materials:
* 2500mHh Lipo Battery
* Sparkfun Esp32 Thing Plus C
* Button
* Adafruit Battery Managment Board
### Current Bill of Material Price: $45
### Prototype
![The front of the pedal](https://github.com/SamMcD-S/PageTurner/blob/main/Front.jpeg)
![A side profile](https://github.com/SamMcD-S/PageTurner/blob/main/Side.jpeg)
![The bottom](https://github.com/SamMcD-S/PageTurner/blob/main/Bottom.jpeg)
# Version 1, Code
In order to make this project reproducible (and demonstrate the simplicity of the device as a whole), I've incldued a basic Arduino sketch to demonstrate the pedal functionality.
# Version 2, Smaller
The first revision works, but isn't particularly efficient. The ESP32, while inexpensive, is seriously overkill for this project, and the project (hand soldered on proto-board) takes a fairly large amount of space. 
For the second revision, I'll utilize a new microprocessor, and design a custom PCB and case.
