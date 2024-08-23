# Tromino Game for Arduino

This project implements a Tetris-like game called Tromino for Arduino using an LCD Keypad Shield.

![Tromino Start Screen](/src/assets/img/Tromino_StartScreen2.jpg)

## Requirements

- Arduino board (e.g., Arduino Uno)
- LCD Keypad Shield
- Arduino IDE

## Setup

1. **Hardware Setup**
   - Attach the LCD Keypad Shield to your Arduino board.
   - Connect a piezo buzzer or speaker to pin 3 for sound output.

2. **Software Setup**
   - Download and install the [Arduino IDE](https://www.arduino.cc/en/software) if you haven't already.
   - Open the Arduino IDE.

3. **Installing Required Libraries**
   - Go to Sketch > Include Library > Manage Libraries
   - Search for and install the `LiquidCrystal` library if it's not already installed.

4. **Uploading the Code**
   - Create a new sketch in the Arduino IDE.
   - Copy and paste the contents of `Tromino.ino` into the sketch.
   - Create a new tab named `pitches.h` and copy the contents of the `pitches.h` file into it.
   - Select your Arduino board type from Tools > Board.
   - Select the correct port from Tools > Port.
   - Click the Upload button (right arrow icon) to compile and upload the code to your Arduino.

## How to Play

- Use the buttons on the LCD Keypad Shield to control the game:
  - Up: Move left
  - Down: Move right
  - Left: Rotate piece
  - Right: Drop piece quickly
  - Select: Toggle sound on/off

- The game starts automatically after displaying the title screen and high score.
- Try to complete lines to score points.
- The game speeds up as you play longer.
- The game ends when a piece can't be placed at the top of the screen.

Here's a video demonstration of the gameplay:

[Watch the demo video](/src/assets/vid/Tromino-In-Game(Compressed).mp4)

## Customization

- You can adjust game parameters like speed and scoring in the code.
- The melody can be modified by changing the notes in the `melody` array.

## Troubleshooting

- If the display doesn't work, check your wiring and make sure the LCD Keypad Shield is properly connected.
- If there's no sound, verify that the piezo buzzer is connected to pin 3.
- If the buttons don't respond, ensure the LCD Keypad Shield is properly seated on the Arduino board.

## Notes

- This code uses EEPROM to store the high score, which may have limited write cycles. Consider using external storage for frequent updates in a production environment.
- The code assumes specific pin connections for the LCD Keypad Shield. If you're using a different shield or custom wiring, you may need to adjust the pin definitions in the code.

## Game Screenshots

![In-Game Screenshot](/src/assets/img/Tromino_InGame.jpeg) ![Game Over Screenshot](/src/assets/img/Tromino_GameOver.jpeg)

Enjoy playing Tromino on your Arduino!