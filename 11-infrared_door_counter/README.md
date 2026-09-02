# 🚪 Infrared Door Counter — Arduino UNO

An Arduino UNO project that uses an **IR sensor** to detect objects/persons and count each new detection. A buzzer is activated while an object is detected.

## 🛠️ Components
- Arduino UNO
- IR Sensor
- Buzzer
- Breadboard & Jumper Wires

## 🔌 Connections

| Component | Pin |
|---|---|
| IR Sensor | Digital Pin 4 |
| Buzzer | Digital Pin 11 |

## ⚙️ How It Works

The IR sensor is continuously monitored using `digitalRead()`.

- **Object detected (LOW) → Buzzer ON**
- **New detection → Counter increases by 1**
- **Object remains detected → Counter stays unchanged**
- **No object → Buzzer OFF**

The `previousState` variable ensures that each detection is counted only once.

The count is displayed on the **Serial Monitor at 9600 baud**.

## 🧠 Concepts
- IR sensor & object detection
- Digital input/output
- State change detection
- Counter logic
- Buzzer control
- Serial Monitor

## ▶️ How to Run
1. Connect the IR sensor to **pin 4** and the buzzer to **pin 11**.
2. Upload `infrared_door_counter.ino` to Arduino UNO.
3. Open Serial Monitor at **9600 baud**.
4. Place an object/person in front of the sensor and observe the count.

## 🎯 Learning Outcome

Learned how to detect and count individual objects using an IR sensor with **state-change detection**.
