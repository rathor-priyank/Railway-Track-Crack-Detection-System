# Railway Track Crack Detection System 🚉

A microcontroller-based safety system to detect cracks in railway tracks and alert relevant authorities using GSM and GPS modules. This project helps prevent railway accidents by enabling real-time monitoring and alerts.

## 💡 Features

- **Ultrasonic Sensor** to detect track discontinuities (cracks).
- **Arduino Uno** for controlling and processing sensor data.
- **GSM Module (SIM800L)** for SMS alerts to authorities.
- **GPS Module (NEO-6M)** to send precise location of detected faults.
- **Proteus Simulation** for pre-hardware validation of the circuit design.

## 🛠️ Technologies Used

- **Arduino IDE** – Development and programming environment.
- **Proteus** – Circuit simulation and testing.
- **Embedded C** – Firmware for Arduino.
- **GSM/GPS Modules** – Communication and positioning.

## ⚙️ System Workflow

1. Ultrasonic sensor constantly monitors the railway track for cracks.
2. Upon detecting a crack, Arduino triggers GSM to send an alert SMS.
3. GPS module provides accurate geolocation of the fault.
4. Authorities receive real-time updates to take prompt action.

## 🔧 Hardware Requirements

- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- GSM Module (SIM800L)
- GPS Module (NEO-6M)
- Power Supply
- Breadboard, jumper wires, etc.

## 📐 Simulation

All components and interactions were simulated using **Proteus** before physical implementation. The simulation helped verify signal accuracy and system reliability.


