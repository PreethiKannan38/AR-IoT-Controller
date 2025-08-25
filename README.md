# AR-IoT-Controller

This project demonstrates an **Augmented Reality (AR) based IoT controller** that allows users to control physical devices using AR buttons in Unity.  

## 🔧 Tech Stack
- Unity (with Vuforia) – for AR interface
- ESP32 (Arduino code) – hardware control
- Blynk – IoT communication and control

## ⚙️ Features
- AR buttons appear on target images in Unity.
- Buttons send control signals to IoT devices via Blynk.
- ESP32 hardware successfully turns LEDs on/off in real time.

## 📂 Repository Structure
- `unity-project/` → Unity project files & scripts  
- `arduino-code/` → ESP32 Arduino sketch  
- `docs/` → Setup instructions  

## 🚀 How to Run
1. Open `unity-project/` in Unity Hub (ensure Vuforia is enabled).  
2. Upload `esp32_led_control.ino` to ESP32 using Arduino IDE.  
3. Connect ESP32 to Blynk and update credentials.  
4. Run the AR app → use target image to toggle LEDs.  
