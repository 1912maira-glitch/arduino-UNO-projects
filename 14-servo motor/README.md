# 🔄 Servo Motor Sweep

A simple **Arduino Uno project** that controls a servo motor and continuously sweeps it between **0° and 180°**.

## 🔧 Components
- 🟦 Arduino Uno
- 🔄 Servo Motor
- 🔌 Jumper wires

## 🔌 Connection

| Servo | Arduino Uno |
|---|---|
| Signal | Digital Pin 10 |
| VCC | 5V |
| GND | GND |

## ⚙️ How It Works
The servo gradually moves from **0° to 180°**, then returns from **180° to 0°**. This movement repeats continuously.

## 📦 Library Required
- `Servo.h` — Arduino Servo Library

## 🚀 Features
- 🔄 Automatic 0°–180° sweep
- ↩️ Returns from 180°–0°
- 🔁 Continuous movement
- 🎯 Simple beginner-friendly servo control

## 🎯 Purpose
This project demonstrates basic **servo motor control using Arduino**, including angle positioning and looping movement.
