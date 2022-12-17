/*
 * File:   Main.c
 * 
 *
 * Created on 17 December 2022, 12:27
 * datasheet: https://www.mouser.com/datasheet/2/268/40001239F-890247.pdf
 * 
 */
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = ON       // Master Clear Enable (GP3/MCLR pin function  is MCLR)

#include <xc.h>
#define _XTAL_FREQ 1000000
void main(void) {
    TRISGPIO = 0b00000000; //the last four 0's make the GPIO pins outputs. GP0 GP1 GP2 GP3.
    while (1) {
        GPIO = 0b10; //turn on LED at GP1 at pin 5.
     __delay_ms(500) ; 
     GPIO = 0b00; //turn off LED at GP1.
     __delay_ms(500) ; 
    }
}