# Daisy LED Morse code
This is a test program to run in the [Arduino IDE](https://docs.arduino.cc/software/ide/).

Refer to [these instructions](https://github.com/stm32duino/Arduino_Core_STM32/wiki/Getting-Started) to get started.

## Daisyduino
It is also recommended to install the [Daisyduino](https://github.com/electro-smith/DaisyDuino) library within the IDE for Arduinio support.

Once the Arduino is installed and running:
- Go to `Tools > Manage Libraries...`.
- Search for and install `Daisyduino`.

## STM32CubeProgrammer
In order to upload your compiled code, you will need [STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html) to be installed.

## Configuring the Arduino IDE for the Daisy
In order to configure the Arduino IDE for the Daisy:
- Go to `Tools > Board > Board Manager...`.
- Choose type "Contributed" and search for and select `STM32 MCU based boards`.
- Go to `Tools > Board > STM32 boards groups` and select `Generic STM32H7 Series`.
- Go to `Tools > Board part number` and select `Daisy Seed`.
- Go to `Tools > U(S)ART support` and select `Enabled (generic 'Serial')`.
- Go to `Tools > USB support` and select `CDC (generic 'Serial' supersede U(S)ART)`.
- Go to `Tools > USB speed` and select `Low/Full Speed`.
- Go to `Tools > Upload method` and select `STM32CubeProgrammer (DFU)`.

## Testing
In order to set up your Daisy Seed to receive your code:
1. Plug in your Daisy Seed to your computer.
2. Let any drivers install.
3. To flash the code to the board, hold the BOOT button, press and release the RESET button, and finally release the BOOT button.
4. Run the program in the Arduinio IDE by selecting `Sketch > Upload`.
5. The code should compile, then be sent to the Daisy board. It will run infinitely on a loop.
6. After making any changes to the code, it can be re-compiled and by starting again from step 3.

## Making changes to the code
This software is programmed to make the LED on the board blink in Morse code. Initially, it is programmed to blink the phrase "HELLO WORLD". This can be changed by modifying the code within the `void loop()` function block.

There are 36 pre-built functions included, for each letter of the alphabet and numbers 0-9. Any of these can be run by calling the `blink_$()` function (`$` represents any alphanumeric character). The variable `unit` at the top of the file is base milliseconds used to control the global blink speed. A lower number makes it blink faster, and a higher number makes it blink slower.

There are also variables called `space_between_letters` and `space_between_words`. Traditionally, this is the standard followed by International Morse code rules. The initial code can be understood like this:

    void loop() {
        // "HELLO"
        blink_h();
        delay(space_between_letters); // (short pause)
        blink_e();
        delay(space_between_letters); // (short pause)
        blink_l();
        delay(space_between_letters); // (short pause)
        blink_l();
        delay(space_between_letters); // (short pause)
        blink_o();
        delay(space_between_words); // (longer pause)

        // "WORLD"
        blink_w();
        delay(space_between_letters); // (short pause)
        blink_o();
        delay(space_between_letters); // (short pause)
        blink_r();
        delay(space_between_letters); // (short pause)
        blink_l();
        delay(space_between_letters); // (short pause)
        blink_d();
        delay(space_between_words); // (longer pause)
    }

As an easier example, the rhythm from Rush's song "YYZ" could be created by changing the code to this:

    void loop() {
        blink_y();
        blink_y();
        blink_z();
    }

The custom `blink_$()` functions all make use of other custom functions `blink_dot()` and `blink_dash()`, which are built on alternations of `digitalWrite(LED_BUILTIN, HIGH)` and `digitalWrite(LED_BUILTIN, LOW)` functions, which turn the LED on and off, with a `delay(x)` in the middle. The `delay` speed can be adjusted by modifying the value of the global variable `unit`.
