# 💡 LED Brightness Control using PWM — Arduino UNO

A simple Arduino UNO project that demonstrates **PWM (Pulse Width Modulation)** by smoothly increasing and decreasing an LED's brightness.

## 🛠️ Components
- Arduino UNO
- LED
- 220Ω resistor
- Jumper wires
- Breadboard

## 🔌 Connections

| Component | Arduino Pin |
|---|---|
| LED | Digital Pin 3 |
| LED GND | GND |

> Pin 3 supports PWM on Arduino UNO.

## ⚙️ How It Works

The program uses `analogWrite()` to control the LED brightness.

The brightness gradually increases from **0 to 255**:

```cpp
for(int i=0; i<=255; i++)
{
    analogWrite(LEDpin, i);
    delay(2);
}
