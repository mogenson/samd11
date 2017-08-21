#include <atmel_start.h>

int main(void) {
    /* Initializes MCU, drivers and middleware */
    atmel_start_init();
    gpio_set_pin_direction(PIN_PA02, GPIO_DIRECTION_OUT);

    /* Replace with your application code */
    while (1) {
        delay_ms(1000);
        gpio_set_pin_level(PIN_PA02, true);
        delay_ms(1000);
        gpio_set_pin_level(PIN_PA02, false);
    }
}
