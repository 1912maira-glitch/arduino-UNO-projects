# 🌡️ DHT11 Temperature & Humidity Sensor

A simple **Arduino Uno project** that uses the **DHT11 sensor** to measure and display **temperature 🌡️ and humidity 💧** through the Serial Monitor.

## 🔧 Components

* 🟦 Arduino Uno
* 🌡️ DHT11 Temperature & Humidity Sensor
* 🔌 Jumper wires

## 🔌 Connections

| DHT11 | Arduino Uno   |
| ----- | ------------- |
| VCC   | 5V            |
| DATA  | Digital Pin 2 |
| GND   | GND           |

## ⚙️ How It Works

The DHT11 sensor reads the surrounding **temperature and humidity** every 2 seconds. The Arduino then displays the readings in the **Serial Monitor** at **9600 baud**.

## 📦 Library Required

Install the **DHT sensor library** in the Arduino IDE before uploading the code.

## 🖥️ Example Output

```text
Temperature: 27.00 C
Humidity: 58.00 %

Temperature: 27.00 C
Humidity: 59.00 %
```

## 🚀 Features

* 🌡️ Temperature measurement
* 💧 Humidity measurement
* ⏱️ Automatic readings every 2 seconds
* 🖥️ Serial Monitor output

## 🎯 Purpose

This project is a beginner-friendly introduction to **Arduino sensors, environmental monitoring, and serial communication**.

