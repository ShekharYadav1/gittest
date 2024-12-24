#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>
#include <stdbool.h>

// Define some constants
#define LED_PIN  13   // Example pin for an LED
#define BUTTON_PIN 12 // Example pin for a button

// Function prototypes
void System_Init(void);
void Loop(void);

#endif // MAIN_H
