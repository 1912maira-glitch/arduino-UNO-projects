# 🔘 Pushbutton Controlled LED — Arduino UNO

A simple Arduino UNO project where a pushbutton controls an LED. The button is connected to digital pin 7, while the LED is connected to digital pin 13 (built-in LED).

## 🛠️ Components
- Arduino UNO
- Pushbutton
- Jumper wires
- Breadboard
- LED (or Arduino built-in LED on pin 13)

## 🔌 Connections

| Component | Arduino Pin |
|---|---|
| Pushbutton | Digital Pin 7 |
| LED | Digital Pin 13 |
| Button GND | GND |

The button uses Arduino's internal pull-up resistor with `INPUT_PULLUP`, so an external pull-up resistor is not required.

## ⚙️ How It Works

The Arduino continuously reads the pushbutton state:

- **Button released → LED OFF**
- **Button pressed → LED ON**

The `!digitalRead(7)` expression inverts the `INPUT_PULLUP` logic.

```cpp
state = !digitalRead(7);
