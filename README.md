# Alcohol-Detection-System-with-Engine-Locking
A vehicle safety system that detects alcohol levels using an MQ-3 sensor and locks the engine if the detected alcohol exceeds a predefined threshold.

## 🚀 Components Used
- Arduino Uno
- MQ-3 Alcohol Sensor
- Relay Module
- DC Motor (representing the vehicle's engine)
- Buzzer
- LED
- Connecting Wires
- Power Supply

## 🛠️ Features
- Detects alcohol concentration using the MQ-3 sensor.
- Compares the sensor reading to a predefined threshold.
- Locks the engine (represented by turning off a DC motor) if alcohol is detected.
- Provides audio (buzzer) and visual (LED) alerts when alcohol is detected.
- Displays sensor readings and system status on the serial monitor.

## 🧠 Project Description
This system enhances vehicle safety by preventing operation when alcohol is detected. The MQ-3 sensor measures alcohol concentration in the air. If the reading exceeds the set threshold, the system locks the engine and activates alerts.


## 🧾 Code
The Arduino code for this project can be found in the [code directory](code/alcohol_detection.ino).

## 📘 How It Works
1. The MQ-3 sensor reads the alcohol concentration and outputs an analog voltage.
2. The Arduino reads this voltage and compares it to the predefined threshold.
3. If the voltage exceeds the threshold:
    - The relay module is triggered to lock the engine (turn off the DC motor).
    - The buzzer and LED are activated to alert the driver.
4. If the voltage is below the threshold:
    - The engine remains operational (DC motor runs).
    - The buzzer and LED remain deactivated.
5. Sensor readings and system status are output to the serial monitor for real-time monitoring.

## 📦 Future Improvements
- Integrate a GSM module to send alerts to predefined contacts when alcohol is detected.
- Add an LCD display to show real-time alcohol concentration levels.
- Implement a more sophisticated engine locking mechanism for real-world applications.

## 📄 License
This project is open-source. Feel free to fork and improve it.
