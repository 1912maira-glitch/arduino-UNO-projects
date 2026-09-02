# 🚪 Infrared Door Counter — Arduino UNO

An Arduino UNO project that uses an **infrared (IR) sensor** to detect a person/object crossing a doorway, count each new detection, and activate a buzzer during detection.

## 🛠️ Components

- Arduino UNO
- IR sensor module
- Buzzer
- Breadboard
- Jumper wires

## 🔌 Connections

| Component | Arduino UNO |
|---|---|
| IR Sensor Output | Digital Pin 4 |
| Buzzer | Digital Pin 11 |
| GND | GND |

## ⚙️ How It Works

The IR sensor is continuously monitored using `digitalRead()`.

When the sensor detects an object (`LOW`):

- The buzzer turns ON.
- The counter increases only when a **new detection** occurs.
- The current person count is displayed on the Serial Monitor.

The `previousState` variable prevents the counter from increasing repeatedly while the object remains detected.

### Behavior

- **New detection → Counter increases by 1**
- **Object remains detected → Counter does not increase**
- **No object → Buzzer OFF**

## 🧠 Concepts Practiced

- IR sensor interfacing
- Digital input/output
- Object/person detection
- Event/state detection
- Counter implementation
- `digitalRead()`
- `digitalWrite()`
- Serial Monitor
- Buzzer control

## ▶️ How to Run

1. Connect the IR sensor output to **digital pin 4**.
2. Connect the buzzer to **digital pin 11**.
3. Open `infrared_door_counter.ino` in Arduino IDE.
4. Select **Arduino UNO** and the correct COM port.
5. Upload the code.
6. Open the Serial Monitor at **9600 baud**.
7. Pass an object/person through the sensor and observe the counter.

## 🎯 Learning Outcome

This project demonstrates how an IR sensor can be used to detect movement and maintain a running count using **state-change detection**.
