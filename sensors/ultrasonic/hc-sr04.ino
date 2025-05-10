char dato;
int cm=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
// Function that reads distance in centimeters using an ultrasonic sensor
float readDistance(int triggerPin, int echoPin)
{
  // Set trigger pin as OUTPUT
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);  // Clear the trigger pin
  delayMicroseconds(2);

  // Send a 10-microsecond pulse to trigger the sensor
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Set echo pin as INPUT to receive the reflected signal
  pinMode(echoPin, INPUT);

  // Measure the duration of the pulse coming back (in microseconds)
  long durationMicrosec = pulseIn(echoPin, HIGH);

  // Convert the time into distance in centimeters
  // Speed of sound is ~343 m/s or 0.0343 cm/us, divide by 2 for round trip
  float distanceCM = durationMicrosec * 0.01723;

  return distanceCM;
}

void loop() {
  // Read distance from the ultrasonic sensor
  float distance = readDistance(9, 10);

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Wait half a second before measuring again
}
