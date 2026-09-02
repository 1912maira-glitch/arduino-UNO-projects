# Ultrasonic Distance Measurement

A simple Arduino Uno project that uses an **HC-SR04 ultrasonic sensor** to measure the distance of an object and display the result through the Serial Monitor.

## Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Jumper wires
- Breadboard

## Pin Connections

| HC-SR04 | Arduino Uno |
|---|---|
| Trig | D8 |
| Echo | D9 |
| VCC | 5V |
| GND | GND |

## How It Works

The sensor sends an ultrasonic pulse through the **Trig** pin and receives the reflected signal through the **Echo** pin. The Arduino measures the echo time and calculates the distance in centimeters.

The distance is displayed on the **Serial Monitor at 9600 baud**.

## Formula

```text
Distance = (0.034 × Echo Time) / 2
