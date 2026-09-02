# 🔢 Arduino 7-Segment Display Counter

A simple **Arduino Uno project** that uses a **7-segment display** to count from **0 to 9** and then count back from **9 to 0**.

## 🛠️ Components

* Arduino Uno
* 7-Segment Display
* 7 × Resistors
* Breadboard
* Jumper Wires

## 🔌 Pin Connections

| Segment | Arduino Pin |
| ------- | ----------: |
| A       |           2 |
| B       |           3 |
| C       |           4 |
| D       |           5 |
| E       |           6 |
| F       |           7 |
| G       |           8 |

## ⚙️ How It Works

The program defines separate functions for each digit (`zero()` through `nine()`). Each function controls the seven segments using `digitalWrite()`.

The display:

1. Counts **0 → 9**
2. Counts **9 → 0**
3. Repeats continuously
4. Displays each number for **1 second**

> **Note:** This code assumes a **common-cathode 7-segment display**, where `HIGH` turns a segment ON and `LOW` turns it OFF.

## 💻 Arduino Code

Upload the `.ino` file to your Arduino Uno and connect the segments according to the pin table above.

## 📚 Concepts Used

* `digitalWrite()`
* `pinMode()`
* Functions
* `delay()`
* 7-segment display control
* Arduino digital output pins

