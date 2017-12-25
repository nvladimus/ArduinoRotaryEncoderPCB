# Printed circuit board for rotary encoder control
This PCB contains resistors and capacitors for denoising (debouncing) of a Rotary Encoder - Illuminated RGB [(Sparkfun 10982)](https://www.sparkfun.com/products/10982), and controlling it's LEDs.
 ![pcb photo](/pcb/PCB-manufactured.png)
 ![pcb normal size](/pcb/RotaryEncoderRGB_Sparkfun_debouncing_board_pcb.png)
 ![pcb SMD size](/pcb/RotaryEncoderRGB_Sparkfun_debouncing_board_SMD_footprint_pcb.png)

**Pins:**
* "+" power supply (3.3-5V)
* "-" ground
* 1 and 2 - readout of the quadrature signals 
* S - pushbutton readout
* R,G,B - control pins for red, green and blue LEDs built in the encoder shaft.

**Functions:**
* Denoising the encoder quadrature signals (RC time constant 1 ms, resistors R1-R4 and capacitors C1,C2)
* Denoising the pushbutton action of the encoder shaft (RC constant 0.1 ms, capacitor C3)
* Adding a pull-up resistor to the pushbutton (resistor R4).
* Adding 3 resistors for R,G,B LEDs built into the shaft (resistors R5, R6, R7).

**Usage**
Connect pins 1,2 to Arduino digital pins 2,3, power and ground pins to 5V and ground, and run one of the code examples provided here. Counts are displayed via Serial Monitor, 4 counts per click.

Code examples require [Encoder](https://github.com/PaulStoffregen/Encoder) library: download and unzip it into your `../Ardunio/libraries/` folder and restart Arduino IDE. 

**Number of PCB layers:** 2

**Dimensions:** 30x50 mm (normal version), 30x35mm (SMD version)

**File format**: everything is in Fritzing file format, so no special knowledge is required. The experienced users can find the way to export from Fritzing to professional formats.

**Ordering from AISLER**: 
[30x50 mm (normal version)](https://aisler.net/nvladimus/myboard/debouncing-board-for-rotary-encoder-illuminated-rgb-sparkfun-10982-size-30x50-mm)

[30x35mm (SMD version)](https://aisler.net/nvladimus/myboard/debouncing-board-for-rotary-encoder-illuminated-rgb-sparkfun-10982-smd-style-size-30x35-mm)

More info in my [blog](https://high-na.blogspot.com/2017/12/rotaryEncoder.html).
