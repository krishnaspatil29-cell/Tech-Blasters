# Smart Silent Distress Monitoring System

## Team Name

Tech-Blasters


## Project Overview

The Smart Silent Distress Monitoring System is an IoT-based healthcare and safety solution designed to assist elderly individuals and people living alone. The system automatically detects emergency situations such as falls, unconsciousness, or abnormal inactivity and sends alerts to caregivers without requiring manual intervention.


## Problem Statement

Elderly people and individuals living alone are highly vulnerable to emergencies such as sudden falls, dizziness, unconsciousness, or health-related incidents. In many situations, they may be unable to call for help or reach a communication device. Existing safety systems largely depend on manual interaction or nearby assistance, which may not always be available. This delay in response can lead to serious health risks.

There is a critical need for an intelligent system that can passively monitor, detect distress situations, and automatically alert caregivers without requiring user interaction.


## Our Solution

The system uses IoT-based sensing, edge processing, and cloud communication to continuously monitor user activity. It detects emergency conditions such as falls, prolonged inactivity, and distress signals, and sends alerts along with live location details to caregivers or emergency contacts. Local alerts such as buzzer and LED are also activated for immediate assistance.


## IoT Architecture Overview

The system follows a complete IoT pipeline:

1. Sensing Layer – Collects real-time physical data
2. Edge Layer – Processes and detects anomalies
3. Communication Layer – Transfers data wirelessly
4. Cloud Layer – Stores and analyzes data
5. Application Layer – Displays and alerts users


## IoT-Based Features

* Continuous Sensor Monitoring
* Wireless Communication (WiFi/GSM)
* Edge-Based Smart Detection (Fall, Inactivity, SOS)
* Cloud Data Integration (ThingSpeak / Firebase)
* Real-Time Emergency Alerts
* Live GPS Location Tracking
* Remote Monitoring Dashboard
* Hybrid Alert System (Local + Remote)


## Feature Integration and Refinement

The system has been progressively enhanced into a complete IoT-based healthcare ecosystem.

### Multi-Parameter Monitoring

Supports multiple health indicators such as heart rate, SpO₂, activity levels, and sleep tracking for improved accuracy.

### Sensor to Device Synchronization

Sensor data is continuously synchronized with smart devices for real-time monitoring.

### Smart Device as IoT Gateway

Acts as an intermediate node for data aggregation and forwarding to the server.

### Centralized Server Integration

Handles data storage, communication, and coordination between system components.

### Intelligent Alert System

Triggers alerts to caregivers, doctors, and emergency services based on abnormal conditions.

### Healthcare Service Integration

Includes doctors, medical stores, and emergency transport in the response loop.

### End-to-End Data Flow

Sensor → Device → Server → Services → Response

### Bidirectional Communication

Supports both monitoring and response communication.

### Scalability

System is modular and expandable for future healthcare applications.


## System Components (IoT-Based Architecture)

### Sensing Layer

* Accelerometer (MPU6050)
* Motion/Inactivity detection
* Push Button (SOS)

### Edge Processing Layer

* ESP32 / Arduino

### Communication Layer

* WiFi
* GSM Module (SIM800L)

### Cloud Layer

* ThingSpeak / Firebase

### Location Tracking

* GPS Module (Neo-6M)

### Application Layer

* Web / Mobile Dashboard

### Actuation Layer

* Buzzer
* LED


## Working Principle

1. Sensors collect user data
2. ESP32 processes and detects abnormalities
3. Data is sent to the cloud
4. Alerts are generated and sent to caregivers
5. GPS shares location
6. Local alerts are triggered


## Mid-Progress Review

### Progress Achieved

#### System Design Completed

* Architecture defined (Sensor → Processing → Alert)
* Components selected
* Data flow designed


#### Core Development (In Progress)

* Sensor data collection implemented
* Initial detection logic developed
* Microcontroller integration started


#### Prototype Implementation

* Basic prototype working
* Sensor values being processed
* Threshold-based logic implemented


#### Partial Feature Integration

* Alert system partially integrated
* Real-time response testing ongoing


## Technologies Used

* Embedded Systems
* IoT Sensors
* Communication Modules (WiFi/GSM)
* MATLAB / Embedded C / Python


## Current Testing Status

* Sensor testing completed
* Detection logic validated
* Integration testing ongoing


## Challenges Faced

* Sensor noise and accuracy
* Real-time responsiveness
* System integration complexity


## Work in Progress

* Improving detection accuracy
* Completing alert integration
* Reducing false positives


## Next Steps

* Complete full system integration
* Optimize algorithms
* Perform stability testing
* Enhance user interface


## Current Status Summary

System Design: Completed
Prototype: Working
Feature Integration: In Progress
Testing: Ongoing


## Repository Updates

* Sensor data handling code added
* Detection logic implemented
* Documentation updated


## Key Advantages

* No manual interaction required
* Real-time monitoring
* Works in low network conditions
* Scalable and cost-effective


## Application Areas

* Elderly Care
* Smart Homes
* Hospitals
* Hostels / PG Safety
* Public Safety Systems


## Team Members

* Priyadarshini S
* Nayana Thara K M
* Krishna Patil
* Gireesh Y S


## Project Status

Under Development


## Future Enhancements

* AI-based prediction
* False alarm reduction
* Emergency service integration
* Wearable support
* Advanced mobile app


## Tagline

"Detecting emergencies even when you cannot call for help."
