# Ultrasonic Sensor Servo Control

An Arduino Uno project that uses an **HC-SR04 ultrasonic sensor** to measure distance and automatically control a **servo motor** based on how close an object is.

## Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Jumper wires
- Breadboard

## Pin Connections

| Component | Arduino Pin |
|---|---|
| HC-SR04 Trig | D9 |
| HC-SR04 Echo | D8 |
| Servo Signal | D3 |
| HC-SR04 VCC | 5V |
| HC-SR04 GND | GND |

## How It Works

The HC-SR04 measures the distance of an object using ultrasonic waves. The Arduino calculates the distance and adjusts the servo motor angle accordingly.

| Distance | Servo Angle |
|---|---|
| > 30 cm | 0° |
| 15–30 cm | 90° |
| 0–15 cm | 180° |

The measured distance and servo angle are displayed on the **Serial Monitor at 9600 baud**.

## Formula

```text
Distance = (0.034 × Echo Time) / 2
