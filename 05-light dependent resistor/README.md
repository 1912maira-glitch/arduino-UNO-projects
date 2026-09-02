# 🌞 Light Dependent Resistor (LDR) — Arduino UNO

A basic Arduino UNO project that reads the analog value from an **LDR (Light Dependent Resistor)** and displays the reading on the Serial Monitor.

## 🛠️ Components
- Arduino UNO
- LDR
- Resistor
- Breadboard
- Jumper wires

## 🔌 Connections

| Component | Arduino |
|---|---|
| LDR circuit output | Analog Pin A1 |

The LDR is typically connected as a voltage divider so that its changing resistance produces a changing voltage that Arduino can read.

## ⚙️ How It Works

The Arduino reads the LDR value using:

```cpp
int value = analogRead(A1);
