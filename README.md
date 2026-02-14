# Smoke-Detector
Smoke detector using arduino

Wiring:

Component	            Arduino Pin
Smoke Sensor 1        (Room 1)	A0
Smoke Sensor 2        (Room 2)	A1
Buzzer 1              (Room 1)	D8
Buzzer 2              (Room 2)	D9
Button 1              (Room 1)	D2
Button 2              (Room 2)	D3

Smoke Sensor Wiring (Both Sensors)
VCC → Arduino 5V
GND → Arduino GND
AO → Arduino Analog Pin

Active buzzer:
+ (long leg) → Arduino digital pin
– (short leg) → GND

Button Wiring
One leg → Arduino pin
Other leg → GND
