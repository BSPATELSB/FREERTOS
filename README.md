# FreeRTOS Learning Repository (ESP-IDF)

## Overview

This repository contains a structured collection of hands-on implementations to understand and master **FreeRTOS** using the **ESP-IDF framework**. It focuses on practical embedded system design, covering core RTOS concepts and real-world usage patterns.

The goal is to build a strong foundation in designing reliable, scalable, and efficient real-time embedded applications.

---

## Objectives

* Develop a clear understanding of FreeRTOS fundamentals
* Implement real-time task management and scheduling
* Learn inter-task communication and synchronization mechanisms
* Apply RTOS concepts to real-world embedded scenarios
* Build a strong base for complex systems such as CAN, BLE, and UI-driven applications

---

## Topics Covered

* Task creation and management
* Task priorities and scheduling
* Delays and timing control
* Queues for inter-task communication
* Semaphores and mutexes
* Event groups
* ISR to task communication
* System design patterns using FreeRTOS

---

## Repository Structure

```text
FreeRTOS_Tutorials/
│
├── 01_LED_Blink_Task/
├── 02_Multiple_Tasks/
├── 03_Task_Priority/
├── 04_Queues/
├── 05_Semaphores/
├── 06_Event_Groups/
├── 07_ISR_to_Task/
├── 08_Real_World_Examples/
```

---

## Tech Stack

* ESP-IDF
* FreeRTOS
* ESP32

---

## Getting Started

### Prerequisites

* ESP-IDF installed and configured
* ESP32 development board
* Basic knowledge of C/C++

### Clone Repository

```bash
git clone https://github.com/your-username/FreeRTOS_Tutorials.git
cd FreeRTOS_Tutorials
```

### Set Up Environment

```bash
. $HOME/esp/esp-idf/export.sh
```

### Build Project

```bash
idf.py build
```

### Flash and Monitor

```bash
idf.py -p /dev/ttyUSB0 flash monitor
```

---

## Approach

Each example in this repository is designed to:

* Demonstrate a specific FreeRTOS concept
* Provide a minimal and clear implementation
* Serve as a building block for real-world embedded systems

---

## Use Cases

The concepts demonstrated in this repository are applicable to:

* IoT systems
* Industrial automation
* Automotive embedded systems
* Real-time data processing applications

---

## Contribution

Contributions, suggestions, and improvements are welcome. Feel free to open issues or submit pull requests.

---

## Author

**Bhaumik Patel**
Embedded Software Engineer
Specializing in Qt/QML, ESP32, and Embedded Systems

---

## License

This project is intended for learning and educational purposes.

