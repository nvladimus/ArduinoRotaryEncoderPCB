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

**Number of layers:** 2

**Dimensions:** 50x30 mm (normal version), 30x30mm (SMD version)

More info in my [blog](https://high-na.blogspot.com/2017/12/rotaryEncoder.html).
