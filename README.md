# Atmel START / ASF4 demo project for SAMD11 MCU

This project was generated from http://start.atmel.com using the Advanced
Software Framework 4 hardware abstraction library.

This demo blinks an LED connected to pin `PA02` at 1 Hz on a samd11c14 microcontroller.

To update the project configuration upload `atmel_start_config.atstart` to
http://start.atmel.com

To build:
- Install an arm-none-eabi-gcc toolchain
- `$ make -C gcc/`
- `$ make -C gcc/ clean`

To flash:
- Use a Segger J-Link programmer and JLinkExe utility
- ```
    $ JLinkExe
    J-Link> connect
    Device> ATSAMD11C14
    TIF> S
    Speed> 1000
    J-Link> reset
    J-Link> loadbin gcc/AtmelStart.bin 0
    J-Link> reset
    J-Link> go
    J-Link> exit
    ```
