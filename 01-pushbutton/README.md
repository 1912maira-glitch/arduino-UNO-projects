# 🔘 Pushbutton State Reading with Arduino UNO

A beginner-level Arduino UNO project that reads the state of a pushbutton using a digital input pin and displays the result on the Serial Monitor.

This project demonstrates how to use Arduino's built-in `INPUT_PULLUP` configuration to read a pushbutton without requiring an external pull-up resistor.

---

## 📌 Project Overview

In this project, a pushbutton is connected to **digital pin 7** of the Arduino UNO.

The Arduino continuously reads the button state using `digitalRead()` and sends the result to the Serial Monitor at a baud rate of **9600**.

Since the pin is configured with `INPUT_PULLUP`, the logic is inverted:

- **Button not pressed → HIGH (1)**
- **Button pressed → LOW (0)**

---

## 🛠️ Components Required

- Arduino UNO
- Pushbutton
- Jumper wires
- Breadboard
- USB cable

---

## 🔌 Circuit Connection

The pushbutton is connected between:

| Component | Arduino UNO |
|---|---|
| Pushbutton | Digital Pin 7 |
| Pushbutton | GND |

The Arduino's internal pull-up resistor is enabled using:

```cpp
pinMode(7, INPUT_PULLUP);
