# Zodify Keyboard

![Zodify](https://placehold.jpg)

To-do

* Keyboard Maintainer: [Aleblazer](https://github.com/Aleblazer/), [Discord Link](https://discord.gg/BCSbXwskVt)
* Hardware Supported: Generic 35 pin RP2040 Pro Micro
* Hardware Availability: [Split Logic Keyboards](https://www.splitlogic.xyz/shop/pcb-kit/p/zodiark-7fyc5)

Make example for this keyboard (after setting up your build environment):

    make aleblazer/zodify:default

Flashing example for this keyboard:

    make aleblazer/zodify:default:flash

Remove USB-C interconnect cable from halves, plug into one side, press reset button when asked. Repeat process on the other side.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **BOOT Button**: Hold down the BOOT button on the top of the PCB and plug in the keyboard 
* **Physical reset button**: Double tap the button RESET on the top of the PCB (This is after the initial firmware flash)
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available (Matrix point 0,0 after initial firmwareflash)
