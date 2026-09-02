# 🎛️ Potentiometer Value Mapping & Range Detection — Arduino UNO

An Arduino UNO project that reads a potentiometer's analog value, maps it from **0–1023 to 100–200**, and classifies the mapped value into **LOW, MEDIUM, or HIGH** ranges.

## 🛠️ Components

- Arduino UNO
- Potentiometer
- Breadboard
- Jumper wires

## 🔌 Connections

| Potentiometer | Arduino UNO |
|---|---|
| Middle pin | A1 |
| One outer pin | 5V |
| Other outer pin | GND |

## ⚙️ How It Works

The Arduino reads the potentiometer value from **A1**:

```cpp
value = analogRead(A1);
