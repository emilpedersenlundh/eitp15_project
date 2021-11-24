# Notes

## PCB Design

### PSU
Due to the maximum current output of the voltage regulator a dual VR design is used. The XBee module is fed by one VR, and the rest of the circuit by another VR. Both of which receive power from a USB-connector.

### MCU Bus Allocation
PORTA: ADC for sensors
PORTB: Control interface
PORTC: JTAG, TWI(I2C)
PORTD: USART

### XBee Pins
The course coordinator will make a USB-XBee interface board for flashing firmware onto the XBee module. Thus the module should be removable from the design, or its pins accessible to an external board as to allow for future flashing with updated software.

### Sensors
A total of 4 sensors are implemented on board, with the option of additional addons via 2.54 pinouts for ADC inputs, I2C and USART. 

#### Temperature

#### Humidity

#### Microphone
Small surface-mounted microphone for detecting ambient noise. Potential uses include presence detection. 

#### Motion
PIR-sensor for detecting variations in infrared radiation (effectively detecting people's movement). 