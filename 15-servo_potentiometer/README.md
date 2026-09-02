# 🎛️ Servo Motor with Potentiometer

A simple **Arduino Uno project** that controls a servo motor using a potentiometer. The potentiometer position is mapped to a servo angle from **0° to 180°**.

## 🔧 Components
- 🟦 Arduino Uno
- 🔄 Servo Motor
- 🎛️ Potentiometer
- 🔌 Jumper wires

## 🔌 Connections

| Component | Arduino Uno |
|---|---|
| Potentiometer Signal | A0 |
| Servo Signal | Digital Pin 10 |
| VCC | 5V |
| GND | GND |

## ⚙️ How It Works
The Arduino reads the potentiometer value from **0–1023** and maps it to a servo angle of **0–180°**. Turning the potentiometer changes the servo position accordingly.

## 📦 Library Required
- `Servo.h` — Arduino Servo Library

## 🚀 Features
- 🎛️ Potentiometer-based control
- 🔄 Servo angle from 0° to 180°
- ⚡ Real-time position adjustment
- 🧑‍💻 Beginner-friendly Arduino project

## 🎯 Purpose
This project demonstrates **analog input, value mapping, and servo motor control** using Arduino Uno.
