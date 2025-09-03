# 🤖 Autonomous Rover (Belt Drive System)

Designed and built an Arduino-powered autonomous rover with a belt-driven dual motor system, capable of terrain navigation, obstacle avoidance, and real-time control via serial commands.

---

## ✨ Features
- Belt-driven mobility with dual DC motors  
- Forward, backward, left, right, and stop controls  
- Terrain adaptability with climbing ability  
- Obstacle avoidance and path correction  
- Arduino-based motor control with serial commands  

---

## 🛠 Components & Libraries

### 🔧 Hardware
- Arduino UNO  
- L298N Motor Driver  
- Dual DC Motors  
- Moving Belt System  
- Chassis Base Board  
- 9V/12V Battery Pack  
- Wires & Switches  

### 📦 Software / Libraries
- Arduino IDE  
- Arduino.h (core functions)  
- Wire.h (I2C communication if sensors are used)  
- Servo.h (for optional servo control)  
- SoftwareSerial.h (for Bluetooth/serial communication)  

---

## ⚙ Implementation
Navigation commands are sent as characters:  

- F → Forward  
- B → Backward  
- L → Left  
- R → Right  
- S → Stop  

Example Arduino code snippet:

```cpp
if (state == 'F') {
  digitalWrite(motorpin11, HIGH);
  digitalWrite(motorpin12, LOW);
  digitalWrite(motorpin21, HIGH);
  digitalWrite(motorpin22, LOW);
}
