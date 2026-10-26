# ESP32 GPIO Register Controller

A beginner embedded systems project demonstrating GPIO-based LED control using an ESP32, simulated in Wokwi.

## Project Overview

This project uses a push button to control an LED connected to an ESP32. It combines Arduino framework functions for pin configuration and input reading with direct GPIO output register writes.

## Features

- GPIO-based LED control
- Push-button input using the internal pull-up resistor
- Direct GPIO output register writes
- Bitwise operations for selecting GPIO pins
- Virtual circuit testing using Wokwi

## Hardware Setup

The circuit is simulated; no physical hardware is required.

- ESP32 development board
- LED and current-limiting resistor
- Push button

## How It Works

1. GPIO 2 is configured as an output for the LED.
2. GPIO 4 is configured as an input with an internal pull-up resistor.
3. When the button is pressed, the input reads LOW and the LED turns on.
4. When the button is released, the LED turns off.
5. GPIO output registers are used to set and clear the LED output bit.

## Technologies Used

- C/C++ (Arduino framework)
- ESP32
- Wokwi simulator
- GPIO registers and bitwise operations

## Current Limitations

This is a learning project, not a fully bare-metal firmware implementation. Pin configuration and button input reading still use Arduino framework functions. The project has been tested in simulation, not on physical hardware.

## Future Improvements

- Implement button debouncing
- Add timer-based LED control
- Explore GPIO interrupts
- Implement more peripheral configuration at register level

## Live Simulation

Run the ESP32 GPIO Register Controller on Wokwi - https://wokwi.com/projects/478937682860275713
