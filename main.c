#include "main.h"
#include <stdio.h>

// Simulated GPIO read/write functions (replace with actual hardware control)
bool Read_Button(void) {
    // Simulate reading a button state (active-high)
    return false; // Example: button not pressed
}

void Write_LED(bool state) {
    // Simulate writing to an LED (active-high)
    if (state) {
        printf("LED ON\n");
    } else {
        printf("LED OFF\n");
    }
}

void System_Init(void) {
    // Initialize hardware (GPIOs, clocks, etc.)
    printf("System Initialized\n");
}

void Loop(void) {
    // Main loop code
    static bool led_state = false;

    if (Read_Button()) {
        led_state = !led_state; // Toggle LED state
        Write_LED(led_state);
    }
}

int main(void) {
    System_Init();

    while (1) {
        Loop();
    }

    return 0;
}
