#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>

void initializeDisplay();
void drawScreen();
void showWelcomeScreen();
void showHighScoreScreen();
void showGameOverScreen();

#endif