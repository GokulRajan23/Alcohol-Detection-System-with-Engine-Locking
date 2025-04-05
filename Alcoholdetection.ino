// Alcohol Detection System with Engine Locking

const int sensorPin = A0;      // MQ-3 sensor analog pin
const int motorPin = 9;        // DC motor control pin
const int buzzerPin = 8;       // Buzzer pin
const int ledPin = 7;          // LED pin
const int threshold = 400;     // Alcohol detection threshold

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > threshold) {
    digitalWrite(motorPin, LOW);    // Lock engine (turn off motor)
    digitalWrite(buzzerPin, HIGH);  // Activate buzzer
    digitalWrite(ledPin, HIGH);     // Turn on LED
    Serial.println("Alcohol detected! Engine locked.");
  } else {
    digitalWrite(motorPin, HIGH);   // Unlock engine (turn on motor)
    digitalWrite(buzzerPin, LOW);   // Deactivate buzzer
    digitalWrite(ledPin, LOW);      // Turn off LED
    Serial.println("No alcohol detected. Engine is operational.");
  }

  delay(1000); // Delay for stability
}
