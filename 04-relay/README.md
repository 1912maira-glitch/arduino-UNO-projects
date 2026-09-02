# 🔌 Pushbutton Controlled Relay — Arduino UNO

An Arduino UNO project that uses a pushbutton to toggle a relay ON and OFF. Each button press changes the relay to the opposite state.

## 🛠️ Components
- Arduino UNO
- Relay module
- Pushbutton
- Jumper wires
- Breadboard

## 🔌 Connections

| Component | Arduino Pin |
|---|---|
| Relay | Digital Pin 7 |
| Pushbutton | Digital Pin 11 |
| Pushbutton GND | GND |

The button uses the Arduino's internal pull-up resistor with `INPUT_PULLUP`.

## ⚙️ How It Works

The Arduino continuously reads the button state. When it detects a transition from **HIGH to LOW**, the relay state is toggled:

```cpp
if (lastButtonState == HIGH && buttonState == LOW)
{
    relayState = !relayState;
    digitalWrite(relay, relayState);
}
