# Arduino IR Object Detection

A simple Arduino Uno project that uses an IR sensor to detect whether an object is present.

## Components
- Arduino Uno
- IR Sensor
- Jumper Wires

## How It Works
The IR sensor reads the object's presence and displays the result in the Serial Monitor:
- **Object Detected** – when the sensor output is LOW
- **No Object Detected** – when the sensor output is HIGH

## Pin Configuration
- IR Sensor → Digital Pin 2

## Usage
1. Connect the IR sensor to Arduino Uno.
2. Upload the Arduino code.
3. Open the Serial Monitor at **9600 baud**.
4. Place an object in front of the sensor to test detection.

## Technologies
- Arduino Uno
- C/C++
- IR Sensor
