# Smart Silent Distress Monitoring System

## Team Name
**Tech-Blasters**

## Tagline
**Detecting emergencies even when you cannot call for help.**


## Project Overview

The **Smart Silent Distress Monitoring System** is an IoT-based healthcare and personal safety solution designed for elderly people, patients, and individuals living alone. The system continuously monitors movement, activity, and health conditions to detect emergencies such as falls, unconsciousness, prolonged inactivity, or distress situations.

When an emergency is detected, the system automatically sends alerts to caregivers or emergency contacts along with live GPS location details. It also activates local alerts such as a buzzer and LED for immediate nearby attention.

This project aims to reduce response time during critical situations and provide a smart, reliable, and low-cost safety system.


## Problem Statement

Many elderly people and individuals living alone are vulnerable to emergencies such as:

- Sudden falls  
- Dizziness or unconsciousness  
- Health-related incidents  
- Inability to call for help  
- Delayed medical response  

Existing systems often depend on manual interaction or nearby assistance, which may not always be available.

There is a strong need for an intelligent system that can automatically detect distress conditions and notify caregivers without requiring user action.


## Our Solution

The Smart Silent Distress Monitoring System uses sensors, edge processing, wireless communication, and cloud connectivity to create an automated emergency response system.

### Key Functions

- Continuous sensor monitoring  
- Fall detection  
- Inactivity detection  
- SOS manual emergency trigger  
- Health parameter monitoring  
- GPS live location tracking  
- Instant alert notifications  
- Cloud data logging  
- Local alarm system  


## System Architecture

Sensors → ESP32 Controller → WiFi / GSM → Cloud Server → Caregiver Dashboard / Alerts  
                                     ↓  
                             Buzzer / LED Alarm


## Hardware Components

### Sensing Layer

- MPU6050 Accelerometer / Gyroscope  
- Pulse Sensor  
- SpO₂ Sensor (Optional)  
- Push Button (SOS)

### Processing Layer

- ESP32 Microcontroller

### Communication Layer

- WiFi (ESP32 Built-in)  
- GSM Module (SIM800L)

### Location Layer

- GPS Module (Neo-6M)

### Alert Layer

- Buzzer  
- LED Indicator

### Cloud Layer

- ThingSpeak / Firebase


## Pin Connections

| Component | ESP32 Pin |
|----------|-----------|
| MPU6050 SDA | GPIO21 |
| MPU6050 SCL | GPIO22 |
| Pulse Sensor OUT | GPIO34 |
| SOS Button | GPIO4 |
| Buzzer | GPIO5 |
| LED | GPIO2 |
| GPS TX | GPIO16 |
| GPS RX | GPIO17 |
| GSM TX | GPIO26 |
| GSM RX | GPIO27 |


## Working Principle

1. Sensors continuously collect movement and health data.  
2. ESP32 processes real-time sensor values.  
3. If abnormal conditions are detected:  
   - Fall event  
   - Long inactivity  
   - Emergency button press  
4. System triggers:  
   - Buzzer ON  
   - LED ON  
   - SMS / Notification sent  
   - GPS location shared  
5. Data uploaded to cloud dashboard.  
6. Caregiver receives alert instantly.


## Features

- Real-time emergency monitoring  
- Automatic distress detection  
- Live GPS location sharing  
- Wireless cloud connectivity  
- Local and remote alerts  
- Low-cost implementation  
- Expandable for future healthcare systems


## Technologies Used

- Embedded C / Arduino C++  
- ESP32 Programming  
- IoT Sensors  
- WiFi Communication  
- GSM Communication  
- Cloud Platforms  
- MATLAB / Python (Testing & Analysis)


## Current Status

| Module | Status |
|-------|--------|
| System Design | Completed |
| Prototype Development | Completed |
| Sensor Integration | Completed |
| Alert Logic | Completed |
| GPS Tracking | Completed |
| Cloud Connectivity | Completed |
| Testing | Ongoing |
| Final Optimization | In Progress |


## Applications

- Elderly Care  
- Smart Homes  
- Hospitals  
- Patient Monitoring  
- Hostels / PG Safety  
- Public Safety Systems


## Advantages

- No manual interaction required  
- Fast emergency response  
- Real-time monitoring  
- Works in low-cost environments  
- Easy to scale and maintain


## Future Enhancements

- AI-based health prediction  
- Reduced false alarms  
- Wearable integration  
- Mobile app with live dashboard  
- Ambulance / emergency service integration  
- Voice assistant support


## Team Members

- Priyadarshini S  
- Nayana Thara K M  
- Krishna Patil  
- Gireesh Y S  


## Repository Contents

/Code  
/Circuit_Diagram  
/Documentation  
/Presentation  
/Images  
README.md


## How to Run

1. Connect all sensors to ESP32.  
2. Upload code using Arduino IDE / VS Code PlatformIO.  
3. Configure WiFi credentials.  
4. Add caregiver phone number for alerts.  
5. Power ON the system.  
6. Monitor dashboard and test alerts.


## Conclusion

The Smart Silent Distress Monitoring System provides an effective and intelligent emergency monitoring solution for vulnerable individuals. By combining sensors, automation, IoT communication, and real-time alerts, the system helps save lives through faster response and continuous monitoring.


## License

This project is developed for academic and innovation purposes.
