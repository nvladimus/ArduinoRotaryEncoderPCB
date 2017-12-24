# Printed circuit board for rotary encoder control
This PCB contains resistors and capacitors for denoising (debouncing) of a Rotary Encoder - Illuminated RGB [(Sparkfun 10982)](https://www.sparkfun.com/products/10982), and controlling it's LEDs.
 ![pcb photo](/pcb/PCB-manufactured.png)
 ![pcb normal size](/pcb/RotaryEncoderRGB_Sparkfun_debouncing_board_pcb.png)

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
Connect pins 1,2 to Arduino DIO pins 2,3, power and ground pins to Arduino 5V and ground pins, and run one of the code examples provided here. Counts are displayed via Serial Monitor, 4 counts per each click.

Code examples require [Encoder](https://github.com/PaulStoffregen/Encoder) library: download and unzip it into your `../Ardunio/libraries/` folder and restart Arduino IDE. 

**Number of PCB layers:** 2

**Dimensions:** 30x50 mm (normal version), 30x35mm (SMD version)

More info in my [blog](https://high-na.blogspot.com/2017/12/rotaryEncoder.html).
