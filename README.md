# Daisy LED Morse code
This is a rest program to run in the [Arduino IDE](https://docs.arduino.cc/software/ide/).

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
