# 🔢 Arduino 7-Segment Push Button Counter

This project uses an **Arduino Uno**, a **7-segment display**, and a **push button** to count from **0 to 9**. Each button press increases the displayed number by one.

## 🛠️ Components Used

* Arduino Uno
* 7-Segment Display
* Push Button
* 7 × Resistors
* Breadboard
* Jumper Wires

## 🔌 Pin Connections

| Component   | Arduino Pin |
| ----------- | ----------- |
| Segment A   | 2           |
| Segment B   | 3           |
| Segment C   | 4           |
| Segment D   | 5           |
| Segment E   | 6           |
| Segment F   | 7           |
| Segment G   | 8           |
| Push Button | 11          |

## ⚙️ Working

* The 7-segment display initially starts with the counter at **0**.
* Each **push button press** increases the counter by 1.
* The display shows numbers from **0 → 9**.
* After **9**, the counter returns to **0**.
* `INPUT_PULLUP` is used for the push button.
* The program detects the button press using the change from `HIGH` to `LOW`.

> **Note:** This code is designed for a **common-cathode 7-segment display**.

## 📚 Concepts Used

* `digitalRead()`
* `digitalWrite()`
* `pinMode()`
* `INPUT_PULLUP`
* Functions
* Push button input
* 7-segment display control

