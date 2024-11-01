# Robot_Avoider-ObjectFollower

This project consists of a design that I have developed to make a robot follow an object, while the object actively avoids the robot. This README covers the project overview, setup instructions, and necessary tools to replicate the hardware and software environment.

## Table of Contents
- [Project Overview](#project-overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Folder Structure](#folder-structure)

## Project Overview

This **Robot_Avoider-ObjectFollower** project combines both object-following and obstacle-avoidance capabilities, making it interactive and responsive in a dynamic environment. The design has been developed using **Eagle** for hardware schematics and layouts, while programming was done in **Arduino IDE**.

## Features

- Object-following functionality using sensor-based tracking.
- Dynamic obstacle avoidance to prevent collision with the target.
- Real-time response for interactive control and navigation.
- Simple and compact hardware design.

## Technologies Used

- **Eagle** - Used for designing and simulating the hardware circuits.
- **Arduino IDE** - Used for writing and uploading the control code to the robot.
- **Arduino Mega2560** - The microcontroller used for executing the control logic.
- **Ultrasonic Sensors** - Used for detecting objects and avoiding obstacles.

## Installation

### Hardware Setup
1. Design and create the hardware circuit using **Eagle**. You can find the `.sch` and `.brd` files in the `hardware` folder.
2. Assemble the components on a breadboard or PCB according to the provided design files.
3. Ensure the connections between the sensors, motors, and Arduino board are secure.

### Software Setup
1. Download and install the **Arduino IDE** from [Arduino's official site](https://www.arduino.cc/en/software).
2. Clone this repository:
   ```bash
   git clone https://github.com/NVL-Project/Robot_Avoider-ObjectFollower.git
   cd Robot_Avoider-ObjectFollower

## Folder Structure
```plaintext
Robot_Avoider-ObjectFollower/
├── docs/                          # Dokumentasi proyek
│   └── panduan.md                 # Panduan penggunaan
├── hardware/                      # Desain perangkat keras
│   ├── NamaDesain.sch             # File skematik
│   ├── NamaDesain.brd             # File layout PCB
├── src/                           # Kode sumber program
│   ├── NamaProyek.ino             # Kode utama untuk Arduino
│   └── utils/                     # Folder untuk modul tambahan
│       └── helper.ino             # Kode pendukung
├── test/                          # File pengujian
│   └── test_case.ino              # Contoh pengujian
├── assets/                        # File gambar, ikon, dan lain-lain
│   └── preview.jpg                # Gambar pratinjau
├── README.md                      # Dokumentasi utama proyek
└── LICENSE                        # File lisensi proyek

