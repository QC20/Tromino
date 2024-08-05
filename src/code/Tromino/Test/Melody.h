#ifndef MELODY_H
#define MELODY_H

#include <Arduino.h>

extern const int melody[] PROGMEM;
extern const int noteDurations[] PROGMEM;

int getNote(int k);
int getNoteDuration(int k);
void playNote(int& melodyNote, unsigned long& melodyDelay, int melodyPin, bool melodyOn);

#endif