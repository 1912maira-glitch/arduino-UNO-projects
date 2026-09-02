# 🌞 LDR Controlled Light Intensity — Arduino UNO

An Arduino UNO project that uses an **LDR (Light Dependent Resistor)** to automatically control the brightness of an LED according to the surrounding light level.

## 🛠️ Components

- Arduino UNO
- LDR
- Resistor
- LED
- 220Ω resistor
- Breadboard
- Jumper wires

## 🔌 Connections

| Component | Arduino |
|---|---|
| LDR output | Analog Pin A1 |
| LED | PWM Pin 3 |
| LED | GND through resistor |

The LDR is used as a voltage divider to provide an analog signal to pin A1.

## ⚙️ How It Works

The Arduino reads the LDR value using:

```cpp
analogRead(A1);
