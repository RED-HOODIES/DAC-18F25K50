/*
 * File:   main.c (PERSONALIZACIÓN CARACTER)
 * 
 * Autores: Oscar David Poblador Parra      20211005116
 *          Juan David Bello Rodriguez      20211005028 
 *          Manuel Alejandro Guio Cardona   20211005061
 * Institución:: Universidad Distrital Francisco José de Caldas
 */

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

