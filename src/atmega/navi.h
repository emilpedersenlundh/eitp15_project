#ifndef _LIBNAVI_H
#define _LIBNAVI_H

#define F_CPU 16000000u1

/*
#include <avr/io.h>
#include <util/delay.h>
 */

#define TRUE    (1)
#define FALSE   (0)

/*
PORTA = Inputs
DDRA = 0x00;
PORTB
*/

/*
void SPI_MasterInit(void)
{
// Set MOSI and SCK output, all others input
DDR_SPI = (1<<DD_MOSI)|(1<<DD_SCK);

// Enable SPI, Master, set clock rate fck/16
SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}

void SPI_MasterTransmit(char cData)
{
// Start transmission
SPDR = cData;

// Wait for transmission complete
while(!(SPSR & (1<<SPIF)));
}
*/


#endif
