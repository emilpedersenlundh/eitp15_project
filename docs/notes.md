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

### Time of Flight Sensor
Since this sensor operates on 2.8V a logic converter is needed for its I2C interface. The voltage supply is regulated on-chip. Thus only the logic pins need conversion, the supply input of the sensor handles conversion from 3.3V to 2.8V. 