#include <Servo.h>

// Define the servos for each finger and wrist
Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;
Servo wristServo;

// Define the pins for the servos
const int thumbPin = 3;
const int indexPin = 5;
const int middlePin = 6;
const int ringPin = 9;
const int pinkyPin = 10;
const int wristPin = 11;

// Define the pin for the MyoWare sensor
const int myoWarePin = A0;

// Servo angle limits
const int minAngle = 0;
const int maxAngle = 180;

void setup() {
  // Attach the servos to their respective pins
  thumbServo.attach(thumbPin); // Attach thumb servo
  indexServo.attach(indexPin); // Attach index servo
  middleServo.attach(middlePin); // Attach middle finger servo
  ringServo.attach(ringPin); // Attach ring finger servo
  pinkyServo.attach(pinkyPin); // Attach pinky finger servo
  wristServo.attach(wristPin); // Attach wrist servo

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the MyoWare sensor value
  int sensorValue = analogRead(myoWarePin);
  
  // Print the sensor value for debugging
  Serial.println(sensorValue);

  // Map the sensor value to servo angles for the thumb
  int thumbAngle = map(sensorValue, 0, 1023, minAngle, maxAngle);
  // Control the thumb servo with the mapped angle
  thumbServo.write(thumbAngle);

  // Map the sensor value to servo angles for the index finger
  int indexAngle = map(sensorValue, 0, 1023, minAngle, maxAngle);
  // Control the index finger servo with the mapped angle
  indexServo.write(indexAngle);

  // Map the sensor value to servo angles for the middle finger
  int middleAngle = map(sensorValue, 0, 1023, minAngle, maxAngle);
  // Control the middle finger servo with the mapped angle
  middleServo.write(middleAngle);

  // Map the sensor value to servo angles for the ring finger
  int ringAngle = map(sensorValue, 0, 1023, minAngle, maxAngle);
  // Control the ring finger servo with the mapped angle
  ringServo.write(ringAngle);

  // Map the sensor value to servo angles for the pinky finger
  int pinkyAngle = map(sensorValue, 0, 1023, minAngle, maxAngle);
  // Control the pinky finger servo with the mapped angle
  pinkyServo.write(pinkyAngle);

  // Map the sensor value to servo angles for the wrist
  int wristAngle = map(sensorValue, 0, 1023, minAngle, maxAngle);
  // Control the wrist servo with the mapped angle
  wristServo.write(wristAngle);

  // Delay to allow the servos to reach the position
  delay(15);
}
