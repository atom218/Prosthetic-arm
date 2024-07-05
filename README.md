# Prosthetic-arm

Prosthetic Arm Control with Arduino
This project demonstrates the control of a prosthetic arm using an Arduino and a MyoWare muscle sensor. The prosthetic arm is equipped with 5 servo motors for each finger and a sixth servo motor for the wrist, allowing precise control based on muscle signals.

Hardware Components
1. Arduino (any model with sufficient PWM pins)
2. 6 Servo Motors
  - 5 for each finger
  - 1 for the wrist
3. MyoWare Muscle Sensor
4. Connecting wires
5. Power supply
6. Breadboard (optional)

Circuit Connections:
1. Connect each servo motor to a PWM pin on the Arduino.
2. Connect the MyoWare sensor to an analog input pin on the Arduino.
3. Power the MyoWare sensor and the servo motors using the Arduino's power pins or an external power supply.
4. Ensure all grounds are connected.
   
Components:	
Arduino           Pin
Thumb Servo	       3
Index Servo	       5
Middle Servo	     6
Ring Servo	       9
Pinky Servo	      10
Wrist Servo	      11
MyoWare Sensor	  A0

Software Setup
1. Download and install the Arduino IDE.
2. Clone this repository or download the ZIP file.
3. Open prosthetic_arm_control.ino in the Arduino IDE.
4. Ensure the Servo library is installed in the Arduino IDE.
5. Upload the code to your Arduino board.
   
Code Explanation
The provided Arduino code reads the muscle signals from the MyoWare sensor and maps these signals to control the angles of the servo motors. Each motor corresponds to a different part of the prosthetic arm (5 fingers and 1 wrist).

Key Variables and Functions
Servo Objects: Each servo motor is represented by a Servo object.
Pin Assignments: Each servo and the MyoWare sensor are connected to specific pins on the Arduino.
Analog Read: The MyoWare sensor's output is read using analogRead().
Mapping: The sensor values (0-1023) are mapped to servo angles (0-180 degrees).
Servo Control: The mapped values are used to set the positions of the servo motors.
