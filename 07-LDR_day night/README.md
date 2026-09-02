# 🌞🌙 LDR Day/Night Detection — Arduino UNO

An Arduino UNO project that uses an **LDR (Light Dependent Resistor)** to detect whether the surrounding environment is bright or dark.

## 🛠️ Components

- Arduino UNO
- LDR
- Resistor
- Breadboard
- Jumper wires

## 🔌 Connection

| Component | Arduino |
|---|---|
| LDR circuit output | Analog Pin A1 |

The LDR is typically connected as a voltage divider to produce an analog voltage that Arduino can read.

## ⚙️ How It Works

The Arduino reads the LDR value from analog pin **A1**:

```cpp
int value = analogRead(A1);
