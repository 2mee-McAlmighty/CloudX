
// CloudX Configuration Bit Settings

// 'C' source line config statements

////////////////////////////////////////////////////////////
//Processor operting Frequency defined
///////////////////////////////////////////////////////////
#define _XTAL_FREQ 20000000


// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

#include <xc.h>

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)





////////////////////////////////////////////////////////////
//Logic state Configuration defined libary
///////////////////////////////////////////////////////////
#define HIGH 1
#define LOW  0
#define INPUT 1
#define OUTPUT 0
#define ON_ALL 0xFF
#define OFF_ALL 0x00




////////////////////////////////////////////////////////////
//Delay loop defined library
////////////////////////////////////////////////////////////
#define delayMs __delay_ms
#define delayUs __delay_us
#define DelayMs __delay_ms
#define DelayUs __delay_us
#define delayms __delay_ms
#define delayus __delay_us



////////////////////////////////////////////////////////////
//Program Configuration loops defined libary
///////////////////////////////////////////////////////////
#define loop()   while(1)
#define setup()     main()


////////////////////////////////////////////////////////////
//ANSI C defined libary
///////////////////////////////////////////////////////////
#define  intTostr itoa
#define  floatTostr ftoa


////////////////////////////////////////////////////////////
//Operator library
///////////////////////////////////////////////////////////
#define is  ==
#define invert ~

////////////////////////////////////////////////////////////
//Logic library
///////////////////////////////////////////////////////////

#define true 1
#define false 0
#define TRUE 1
#define FALSE 0
#define BIN 2
#define HEX 16
#define DEC 10

#define integer int

////////////////////////////////////////////////////////////
//Pin Configuration defined libary
///////////////////////////////////////////////////////////
#define pin1 RB0
#define pin2 RB1
#define pin3 RB2
#define pin4 RB3
#define pin5 RB4
#define pin6 RB5
#define pin7 RB6
#define pin8 RB7
#define pin9 RD0
#define pin10 RD1
#define pin11 RD2
#define pin12 RD3
#define pin13 RD4
#define pin14 RD5
#define pin15 RD6
#define pin16 RD7



////////////////////////////////////////////////////////////
//PinMode Configuration defined libary
///////////////////////////////////////////////////////////
#define pin1Mode  TRISB0
#define pin2Mode  TRISB1
#define pin3Mode  TRISB2
#define pin4Mode  TRISB3
#define pin5Mode  TRISB4
#define pin6Mode  TRISB5
#define pin7Mode  TRISB6
#define pin8Mode  TRISB7
#define pin9Mode  TRISD0
#define pin10Mode  TRISD1
#define pin11Mode  TRISD2
#define pin12Mode  TRISD3
#define pin13Mode  TRISD4
#define pin14Mode  TRISD5
#define pin15Mode  TRISD6
#define pin16Mode  TRISD7


////////////////////////////////////////////////////////////
//PortMode Configuration defined libary
///////////////////////////////////////////////////////////
#define port1Mode TRISB
#define port2Mode TRISD

////////////////////////////////////////////////////////////
//Port Configuration defined libary
///////////////////////////////////////////////////////////
#define port1 PORTB
#define port2 PORTD


PinSelect(char selPins, char segState){
    switch(selPins){
        case 1:     if (segState) pin1=HIGH; else pin1=LOW; break;
        case 2:     if (segState) pin2=HIGH; else pin2=LOW; break;
        case 3:     if (segState) pin3=HIGH; else pin3=LOW; break;
        case 4:     if (segState) pin4=HIGH; else pin4=LOW; break;
        case 5:     if (segState) pin5=HIGH; else pin5=LOW; break;
        case 6:     if (segState) pin6=HIGH; else pin6=LOW; break;
        case 7:     if (segState) pin7=HIGH; else pin7=LOW; break;
        case 8:     if (segState) pin8=HIGH; else pin8=LOW; break;
        case 9:     if (segState) pin9=HIGH; else pin9=LOW; break;

        case 10:     if (segState) pin10=HIGH; else pin10=LOW; break;
        case 11:     if (segState) pin11=HIGH; else pin11=LOW; break;
        case 12:     if (segState) pin12=HIGH; else pin12=LOW; break;
        case 13:     if (segState) pin13=HIGH; else pin13=LOW; break;
        case 14:     if (segState) pin14=HIGH; else pin14=LOW; break;
        case 15:     if (segState) pin15=HIGH; else pin15=LOW; break;
        case 16:     if (segState) pin16=HIGH; else pin16=LOW; break;
        default: break;
    }

}


void PortMode(char segPortSel, char stater){
    switch(segPortSel){
        case 1:    if(stater==OUTPUT) pin1Mode=OUTPUT;   else pin1Mode=INPUT ; pin1=LOW;break;
        case 2:    if(stater==OUTPUT) pin2Mode=OUTPUT;   else pin2Mode=INPUT ; pin2=LOW;break;
        case 3:    if(stater==OUTPUT)  pin3Mode=OUTPUT;  else pin3Mode=INPUT;  pin3=LOW;break;
        case 4:    if(stater==OUTPUT)  pin4Mode=OUTPUT;  else pin4Mode=INPUT;  pin4=LOW;break;
        case 5:    if(stater==OUTPUT)  pin5Mode=OUTPUT;  else pin5Mode=INPUT;  pin5=LOW;break;
        case 6:    if(stater==OUTPUT)  pin6Mode=OUTPUT;  else pin6Mode=INPUT;  pin6=LOW;break;
        case 7:    if(stater==OUTPUT)   pin7Mode=OUTPUT;  else pin7Mode=INPUT; pin7=LOW;break;
        case 8:    if(stater==OUTPUT)   pin8Mode=OUTPUT;  else pin8Mode=INPUT; pin8=LOW;break;
        case 9:    if(stater==OUTPUT)  pin9Mode=OUTPUT;  else pin9Mode=INPUT;   pin9=LOW;break;
        case 10:   if(stater==OUTPUT)  pin10Mode=OUTPUT;  else pin10Mode=INPUT; pin10=LOW;break;
        case 11:   if(stater==OUTPUT)  pin11Mode=OUTPUT;  else pin11Mode=INPUT; pin11=LOW;break;
        case 12:   if(stater==OUTPUT)  pin12Mode=OUTPUT;  else pin12Mode=INPUT; pin12=LOW;break;
        case 13:   if(stater==OUTPUT)  pin13Mode=OUTPUT;  else pin13Mode=INPUT; pin13=LOW;break;
        case 14:   if(stater==OUTPUT)  pin14Mode=OUTPUT;  else pin14Mode=INPUT; pin14=LOW;break;
        case 15:   if(stater==OUTPUT)  pin15Mode=OUTPUT;  else pin15Mode=INPUT; pin15=LOW;break;
        case 16:   if(stater==OUTPUT)  pin16Mode=OUTPUT;  else pin16Mode=INPUT; pin16=LOW;break;
        default: break;
    }
}
 unsigned char readPin(unsigned char stater){
	            switch (stater){
	    case 1:     if (pin1 == HIGH) return HIGH; else return LOW; 
        case 2:     if (pin2 == HIGH) return HIGH; else return LOW; 
        case 3:     if (pin3 == HIGH) return HIGH; else return LOW; 
        case 4:     if (pin4 == HIGH) return HIGH; else return LOW; 
        case 5:     if (pin5 == HIGH) return HIGH; else return LOW; 
        case 6:     if (pin6 == HIGH) return HIGH; else return LOW; 
        case 7:     if (pin7 == HIGH) return HIGH; else return LOW; 
        case 8:     if (pin8 == HIGH) return HIGH; else return LOW; 
        case 9:     if (pin9 == HIGH) return HIGH; else return LOW; 

        case 10:     if (pin10 == HIGH) return HIGH; else return LOW; 
        case 11:     if (pin11 == HIGH) return HIGH; else return LOW; 
        case 12:     if (pin12 == HIGH) return HIGH; else return LOW; 
        case 13:     if (pin13 == HIGH) return HIGH; else return LOW; 
        case 14:     if (pin14 == HIGH) return HIGH; else return LOW; 
        case 15:     if (pin15 == HIGH) return HIGH; else return LOW; 
        case 16:     if (pin16 == HIGH) return HIGH; else return LOW; 
				}
 }

//#include<stdlib.h>
