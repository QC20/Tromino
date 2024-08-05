#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include <Arduino.h>

void newShape();
boolean moveDown();
boolean moveLeft();
boolean moveRight();
boolean rotate();
int clearLines();
void saveHighScore();
void initialize();
boolean isGameOver();
void processEndOfShape();

#endif