# Smart Silent Distress Monitoring System

## Team Name

Tech-Blasters


## Problem Statement

Elderly people and individuals living alone are highly vulnerable to emergencies such as sudden falls, dizziness, unconsciousness, or health-related incidents. In many situations, they may be unable to call for help or reach a communication device. Existing safety systems largely depend on manual interaction or nearby assistance, which may not always be available. This delay in response can lead to serious health risks.

There is a critical need for an intelligent system that can passively monitor, detect distress situations, and automatically alert caregivers without requiring user interaction.

## Our Solution

The Smart Silent Distress Monitoring System is an IoT-based healthcare and safety solution designed to continuously monitor individuals and detect emergency situations such as falls, prolonged inactivity, or manual SOS triggers.

The system uses sensors to collect real-time data, processes it at the edge (microcontroller), and transmits it to the cloud for monitoring and alert generation. When a distress condition is detected, alerts along with live location are sent to caregivers or emergency contacts. Additionally, local alerts like buzzer and LED are activated for immediate assistance.


## IoT Architecture Overview

The system follows a complete IoT pipeline:

1. Sensing Layer – Collects real-time physical data
2. Edge Layer – Processes and detects anomalies
3. Communication Layer – Transfers data wirelessly
4. Cloud Layer – Stores and analyzes data
5. Application Layer – Displays and alerts users


## IoT-Based Features

* Continuous Sensor Monitoring (Sensing Layer)
  Real-time collection of motion and activity data using sensors.

* Wireless Communication (Communication Layer)
  Data transmission via WiFi (ESP32) or GSM for remote accessibility.

* Edge-Based Smart Detection (Edge Computing)
  Immediate detection of:

  * Fall events
  * Prolonged inactivity
  * Emergency button activation

* Cloud Data Integration (Cloud Layer)
  Real-time data logging and analysis using IoT platforms like ThingSpeak or Firebase.

* Real-Time Emergency Alerts
  Automatic alert messages sent to caregivers when abnormal conditions are detected.

* Live GPS Location Tracking
  Sends accurate location data during emergencies.

* Remote Monitoring Dashboard (Application Layer)
  Enables caregivers to monitor user status remotely.

* Hybrid Alert System
  Combines:

  * Remote alerts (IoT-based)
  * Local alerts (buzzer + LED)


## System Components (IoT-Based Architecture)

### 1. Sensing Layer

* Accelerometer (MPU6050) – Fall detection
* Motion/Inactivity detection (via sensor data)
* Push Button – Manual SOS trigger


### 2. Edge Processing Layer

* ESP32 / Arduino

  * Reads sensor data
  * Performs initial processing
  * Detects distress conditions
  * Acts as IoT gateway


### 3. Communication Layer

* WiFi (built into ESP32)
* GSM Module (SIM800L)

  * Ensures communication without internet


### 4. Cloud / IoT Platform Layer

* ThingSpeak / Firebase

  * Data storage
  * Real-time monitoring
  * Event handling


### 5. Location Tracking Layer

* GPS Module (Neo-6M)

  * Provides real-time coordinates
  * Integrated with alert system


### 6. Application Layer

* Web Dashboard / Mobile Application

  * Displays live status
  * Shows alerts and location
  * Enables remote monitoring


### 7. Actuation Layer

* Buzzer – Audio alert
* LED – Visual indication


## Working Principle

1. Sensors continuously collect user activity data
2. Data is processed by ESP32 (edge device)
3. Abnormal conditions are detected using predefined logic
4. Data is transmitted to the cloud platform
5. Alerts are triggered and sent to caregivers
6. Location is shared via GPS
7. Local alerts (buzzer/LED) are activated


## Key Advantages

* No manual interaction required
* Real-time monitoring and alerts
* Works in both connected and low-network environments
* Scalable for smart homes, hospitals, and elderly care
* Low-cost IoT implementation


## Application Areas

* Elderly Care Systems
* Smart Homes
* Hospitals and Patient Monitoring
* Hostels / PG Safety
* Public Safety Infrastructure

## Team Members

* Priyadarshini S
* Nayana Thara K M
* Krishna Patil
* Gireesh Y S

## Project Status

Under Development



## Future Enhancements

* AI-based behavior prediction
* False alarm reduction
* Integration with emergency services
* Wearable device support
* Mobile app with live tracking


## Tagline

"Detecting emergencies even when you cannot call for help."
