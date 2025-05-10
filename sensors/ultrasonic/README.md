# HC-SR04 Ultrasonic Sensor

![HC-SR04 Pinout](https://d22fxaf9t8d39k.cloudfront.net/046e2d87a475bc33c69874b726d9079aef6baea3592bbe07e717bf4c375023cf48985.png)

## Quick Overview

The HC-SR04 is a popular ultrasonic distance sensor that uses sound waves to measure distance. It's commonly used in robotics, obstacle detection, and distance measurement projects.

## Pin Description

| Pin | Function | Description |
|-----|----------|-------------|
| VCC | Power    | 5V power supply |
| GND | Ground   | Ground connection |
| TRIG| Trigger  | Input pin to start measurement (Connected to D9) |
| ECHO| Echo     | Output pin for distance reading (Connected to D10) |

## Key Specifications

- Operating Voltage: 5V DC
- Working Current: 15mA
- Measuring Angle: 15 degrees
- Measuring Range: 2cm - 400cm
- Resolution: 0.3cm
- Trigger Input Signal: 10µS TTL pulse
- Echo Output Signal: TTL level signal

## Code Implementation

```cpp
// Function that reads distance in centimeters using an ultrasonic sensor
float readDistance(int triggerPin, int echoPin) {
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
```

## Basic Usage

1. Power the sensor with 5V
2. Connect TRIG to Arduino D9
3. Connect ECHO to Arduino D10
4. Send a 10µS pulse to TRIG pin
5. Measure the pulse width on ECHO pin
6. Calculate distance: `distance = (pulse_width × 0.01723)`

## Common Applications

- Distance measurement
- Obstacle detection
- Level measurement
- Parking sensors
- Robotics navigation

## Notes

- Keep the sensor clean and free from obstructions
- Works best with solid objects
- May have trouble with soft or angled surfaces
- Affected by temperature and humidity
- Minimum measuring distance is 2cm
- Measurement interval: 500ms (as per code implementation)
- Serial output at 9600 baud rate 