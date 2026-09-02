# 🚨 Infrared Sensor with Buzzer — Arduino UNO

An Arduino UNO project that uses an **infrared (IR) sensor** to detect the presence of an object and activate a buzzer when an object is detected.

## 🛠️ Components

- Arduino UNO
- IR sensor module
- Buzzer
- Breadboard
- Jumper wires

## 🔌 Connections

| Component | Arduino UNO |
|---|---|
| IR Sensor Output | Digital Pin 2 |
| Buzzer | Digital Pin 8 |
| GND | GND |

## ⚙️ How It Works

The IR sensor is read through digital pin **2**:

```cpp
sensorValue = digitalRead(sensorPin);
