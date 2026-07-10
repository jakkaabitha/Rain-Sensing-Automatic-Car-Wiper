# Rain Sensing Automatic Car Wiper

## Overview

This project is an Arduino-based automatic car wiper system that detects rain using a rain sensor and automatically moves a servo motor to simulate windshield wiper movement.

## Features

- Automatic rain detection
- Servo motor controlled wiper
- Low-cost prototype
- Easy to build

## Components Used

- Arduino Uno
- Rain Sensor Module
- Servo Motor
- Breadboard
- Jumper Wires
- USB Cable

## Circuit

The rain sensor is connected to Arduino Analog Pin A0.
The servo motor signal pin is connected to Digital Pin 9.

## Working

1. Rain sensor detects water.
2. Arduino reads the sensor value.
3. If rain is detected, the servo moves like a wiper.
4. If no rain is detected, the servo stays at its initial position.

## Arduino Code

The complete Arduino program is available in:

rain_sensing_automatic_car_wiper.ino

## Project Image

See project_photo.jpeg

## Presentation

presentation.pptx

## Author

Jakka Abitha
