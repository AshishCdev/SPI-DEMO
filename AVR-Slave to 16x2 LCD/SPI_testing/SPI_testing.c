/*
 * SPI_testing.c
 *
 * Created: 13/03/2016 05:14:29
 *  Author: Ashish
 */ 

#define F_CPU	11059200

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
#include "SPI.h"

int main(void)
{
	 lcd_init(LCD_DISP_ON_BLINK);
	 SPI_SlaveInit();
     while(1){
	     lcd_putc(SPI_SlaveReceive());
     }
}

