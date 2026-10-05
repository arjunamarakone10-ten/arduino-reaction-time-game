# Arduino Reaction-Time Game

A reaction-time game built from scratch on an Arduino UNO.

## Features
- Measures reaction time in milliseconds using a push button and LED prompt
- Displays live results and tracks best time each session on an LCD
- Potentiometer controls LCD backlight brightness
- Title screen and continuous replay loop

## Components
- Arduino UNO
- Push button
- LED
- 16x2 LCD display
- Potentiometer

## What I learned
Coordinating the LCD and button I/O without one interfering with the timing of the other was the hardest part to get right, along with implementing reliable button debouncing.

## Status
Complete
