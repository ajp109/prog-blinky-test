#include "mbed.h"

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);

    // Loop forever...
    while (true) {
        // Switch the LED on
        led = true;
        // Wait for 200ms
        thread_sleep_for(200);
        // Switch the LED off
        led = false;
        // Wait for 300ms
        thread_sleep_for(300);
    }
}
