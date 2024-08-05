# Tromino: An Arduino-based Tetris-like Game

## Overview

Tromino is an engaging, compact implementation of a Tetris-like game designed for Arduino platforms using an LCD Keypad Shield. This project demonstrates efficient use of limited hardware resources to create an entertaining gaming experience.

## Table of Contents

1. [Project Structure](#project-structure)
2. [Core Components](#core-components)
3. [Game Mechanics](#game-mechanics)
4. [Code Architecture](#code-architecture)
5. [Advanced Features](#advanced-features)
6. [Setup and Running](#setup-and-running)
7. [Future Enhancements](#future-enhancements)

## Project Structure

The Tromino project consists of several interconnected files:

- `Tromino.ino`: Main Arduino sketch and game loop
- `GameConfig.h`: Game constants and configurations
- `ShapeDefinitions.h` & `.cpp`: Tetromino shape definitions
- `GameLogic.h` & `.cpp`: Core game mechanics
- `Display.h` & `.cpp`: LCD display management
- `Melody.h` & `.cpp`: Music playback system
- `pitches.h`: Musical note frequencies

## Core Components

### Game Board Representation

Tromino utilizes a 16x4 boolean matrix to represent the game board. This clever design allows for efficient memory usage while providing enough resolution for gameplay on a 16x2 LCD screen.

### Tetromino Shapes

The game features three classic Tetromino shapes: I, J, and L. Each shape is defined using a 3x3 bit matrix, allowing for compact storage and easy rotation.

### LCD Custom Characters

To maximize the visual appeal on the limited LCD screen, Tromino employs custom characters. These characters enable the display of half-block elements, creating a more detailed and visually pleasing game board.

## Game Mechanics

### Shape Movement and Rotation

Tetrominoes can move left, right, down, and rotate. The `GameLogic.cpp` file contains functions like `moveLeft()`, `moveRight()`, `moveDown()`, and `rotate()` that handle these actions while checking for collisions.

### Line Clearing

When a line is completed, it's cleared from the board. The `clearLines()` function in `GameLogic.cpp` handles this, including a visually appealing line-clearing animation.

### Scoring System

Points are awarded for each cleared line, with bonuses for clearing multiple lines simultaneously. The scoring system is designed to encourage strategic play and reward skilled players.

### Difficulty Progression

As the game progresses, the speed increases, challenging the player's reflexes and decision-making skills. This is managed by gradually decreasing the `gameSpeed` variable.

## Code Architecture

### Modular Design

The project follows a modular design principle, separating concerns into different files:

- `Tromino.ino`: Orchestrates the game flow and user input
- `GameLogic.cpp`: Encapsulates core game rules and mechanics
- `Display.cpp`: Manages all LCD-related operations
- `ShapeDefinitions.cpp`: Defines Tetromino shapes and their properties

This separation allows for easier maintenance, testing, and potential future expansions.

### State Management

The game state is primarily managed through global variables in `Tromino.ino`, representing the current Tetromino position, rotation, game speed, and score. This centralized state management allows for efficient updates and rendering.

### Memory Optimization

Given the limited memory on Arduino platforms, several optimization techniques are employed:

- Use of PROGMEM for storing the Tetris melody
- Bit-packed Tetromino shape definitions
- Efficient use of custom LCD characters

## Advanced Features

### High Score System

Tromino implements a high score system using Arduino's EEPROM. This allows the highest score to persist even when the device is powered off, adding a competitive element to the game.

### Tetris Theme Music

The iconic Tetris theme is implemented using the `Melody.cpp` file. It uses Arduino's `tone()` function to play notes at specific frequencies and durations, creating a nostalgic audio experience.

### Dynamic Difficulty Adjustment

The game speed increases as the player progresses, providing a continuously challenging experience. This is implemented through a gradual reduction of the `gameSpeed` variable after each successful block placement.

## Setup and Running

To run Tromino:

1. Ensure all `.ino`, `.h`, and `.cpp` files are in the same folder.
2. Open `Tromino.ino` in the Arduino IDE.
3. Connect your Arduino board with the LCD Keypad Shield.
4. Upload the sketch to your Arduino.

## Future Enhancements

Potential areas for future development include:

- Adding more Tetromino shapes
- Implementing a pause feature
- Creating a two-player mode
- Enhancing the visual effects within the LCD constraints

Tromino showcases how creative programming can overcome hardware limitations to deliver an engaging gaming experience. Its modular design and efficient use of resources make it an excellent study in embedded systems game development.