# 🎛️ Potentiometer Analog Reading — Arduino UNO

A basic Arduino UNO project that reads the analog value of a potentiometer and displays it on the Serial Monitor.

## 🛠️ Components

- Arduino UNO
- Potentiometer
- Breadboard
- Jumper wires

## 🔌 Connections

| Potentiometer | Arduino UNO |
|---|---|
| Middle pin | A0 |
| One outer pin | 5V |
| Other outer pin | GND |

## ⚙️ How It Works

The potentiometer provides a variable voltage to analog pin **A0**.

The Arduino reads this voltage using:

```cpp
value = analogRead(A0);
