# rhythmpad

![rhythmpad](https://imgur.com/a/bP9TW7X)

A 10-key SEEED XIAO RP2040 macropad, originally oriented for the usage of Pulsus (one of my favorite 9-key rhythm games) and 4-key rhythm games (such as FNF). This macropad additonally has an EC11E rotary encoder (with switch!) and 128x32 0.91 OLED display. Pressing in the encoder switches to an alt layer to allow for usage outside of rhythm games. On the base layer, the rotary controls volume. 

* Keyboard Maintainer: [Juda Ramsey](https://github.com/cooly-kirbyy)
* Hardware Supported: rhythmpad PCB, XIAO RP2040
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make rhythmpad:default

Flashing example for this keyboard:

    make rhythmpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

How to enter the bootloader! : 

* **Bootmagic reset**: Hold down the key at (0,3) in the matrix (top right key) and plug in the keyboard!
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
