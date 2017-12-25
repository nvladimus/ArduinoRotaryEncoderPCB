# Printed circuit board for rotary encoder control
This PCB contains resistors and capacitors for denoising (debouncing) of a Rotary Encoder - Illuminated RGB [(Sparkfun 10982)](https://www.sparkfun.com/products/10982), and controlling it's LEDs.
 ![pcb photo](/pcb/PCB-manufactured.png "PCB bare (left) and assembled (right)")
 ![pcb normal size](/pcb/RotaryEncoderRGB_Sparkfun_debouncing_board_pcb.png "Normal-size verion, 30x50 mm")
 ![pcb SMD size](/pcb/RotaryEncoderRGB_Sparkfun_debouncing_board_SMD_footprint_pcb.png "Small size (SMD) version, 30x35 mm")

**Pins:**
* "+" power supply (3.3-5V)
* "-" ground
* 1 and 2 - readout of the quadrature signals 
* S - pushbutton readout
* R,G,B - control pins for red, green and blue LEDs built in the encoder shaft.

**Functions:**
* Denoising the encoder quadrature signals (resistors R1-R4 and capacitors C1,C2, RC time constant 1 ms)
* Denoising the pushbutton action of the encoder shaft (capacitor C3, RC constant 0.1 ms)
* a pull-up resistor for the pushbutton (resistor R4).
* resistors for R,G,B LEDs of the encoder shaft (resistors R5, R6, R7).

**Usage**

Connect power (+) and ground (-) pins to Arduino 5V and ground, quadrature pins 1,2 to Arduino digital pins with interrupt:
* Arduino Uno: digital pins 2,3
* Arduino Mega: any pair of digital pins	2, 3, 18, 19, 20, 21

Code examples include rotary encoder readout, shaft push-button action, and turning LEDs on/off by the push-button action. Counts are printed out via Serial Monitor, 4 counts per click. Code requires [Encoder](https://github.com/PaulStoffregen/Encoder) library: download and unzip it into your `../Ardunio/libraries/` folder and restart Arduino IDE to install. 

**Number of PCB layers:** 2

**Dimensions:** 30x50 mm (normal version), 30x35mm (SMD version)

**File format**: everything is in Fritzing file format, so no special knowledge is required. The experienced users can find the way to export from Fritzing to professional formats.

**Ordering from AISLER**: 

[30x50 mm (normal version)](https://aisler.net/nvladimus/myboard/debouncing-board-for-rotary-encoder-illuminated-rgb-sparkfun-10982-size-30x50-mm)

[30x35mm (SMD version)](https://aisler.net/nvladimus/myboard/debouncing-board-for-rotary-encoder-illuminated-rgb-sparkfun-10982-smd-style-size-30x35-mm)

More info in my [blog](https://high-na.blogspot.com/2017/12/rotaryEncoder.html).
