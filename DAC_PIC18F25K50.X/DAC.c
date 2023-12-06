
#include "config.h"
#include "Setup.h"
#include <stdio.h>
#include <string.h>


void main(void){
    Setup();
    
    while(1){
        __delay_ms(10);
       if(VREFCON2++>=32) VREFCON2=0;
        PORTA |=(1<<4);
        __delay_ms(100);
        PORTA &=~(1<<4);
        //VREFCON2++;
    }
} 

