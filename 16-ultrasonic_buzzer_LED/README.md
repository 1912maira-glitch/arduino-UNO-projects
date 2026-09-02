# Ultrasonic Distance Sensor with LED & Buzzer

An Arduino Uno project that uses an **HC-SR04 ultrasonic sensor** to measure distance and provides **LED and buzzer alerts** based on how close an object is.

## Components

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* LED
* Buzzer
* Resistor
* Jumper wires
* Breadboard

## Pin Connections

| Component    | Arduino Pin |
| ------------ | ----------- |
| HC-SR04 Trig | D9          |
| HC-SR04 Echo | D8          |
| LED          | D7          |
| Buzzer       | D11         |

## How It Works

The HC-SR04 sends an ultrasonic pulse and measures the time taken for the echo to return. The Arduino calculates the distance in centimeters.

* **< 10 cm:** Fast buzzer beeps
* **10–20 cm:** Medium-speed beeps
* **20–30 cm:** Slow beeps
* **30–50 cm:** Occasional beeps
* **> 50 cm:** Buzzer OFF
* **< 30 cm:** LED ON
* **≥ 30 cm:** LED OFF

The measured distance is also displayed in the **Serial Monitor at 9600 baud**.

## Arduino Code

The project is implemented in C++ using the Arduino IDE. The `pulseIn()` function is used to measure the ultrasonic echo time, which is then converted into distance.

## Applications

* Obstacle detection
* Parking assistance
* Distance monitoring
* Simple proximity alarms
* Arduino learning projects

