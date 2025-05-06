// Motor Driver Pins
int in1 = 13;
int in2 = 6;
int in3 = 4;
int in4 = 5;
int ENA = 9;
int ENB = 10;

// Ultrasonic Sensor Pins
int trigpin = 11;
int echopin = 12;

// Buzzer and LED
int buzzer = A0;
int led = 7;

// Variables
int speed = 220;
float distance;
float duration;

void setup() {
  // Motor pins
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Ultrasonic sensor pins
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);

  // Output devices
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Set motor speed
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);

  // Trigger the ultrasonic sensor
  digitalWrite(trigpin, LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  // Read echo duration and calculate distance
  duration = pulseIn(echopin, HIGH);
  distance = (duration * 0.034) / 2;

  Serial.print("The distance is = ");
  Serial.print(distance);
  Serial.println(" cm");

  // Distance check and control logic
  if (distance > 2.5) {
    // Obstacle far: stop motors, activate buzzer & LED
    tone(buzzer, 450);
    digitalWrite(led, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  } else {
    // Obstacle close: move forward, turn off buzzer & LED
    noTone(buzzer);
    digitalWrite(led, LOW);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
}
