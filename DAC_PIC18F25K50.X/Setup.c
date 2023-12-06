/*
 * File:   main.c (PERSONALIZACIÓN CARACTER)
 * 
 * Autores: Oscar David Poblador Parra      20211005116
 *          Juan David Bello Rodriguez      20211005028 
 *          Manuel Alejandro Guio Cardona   20211005061
 * Institución:: Universidad Distrital Francisco José de Caldas
 */

#include <xc.h>
#include "Setup.h"

void SetupOscilador(void)
{
    OSCCON=0b01110000; 
return;}

void Setupports(void)
{
    VREFCON1=0b11100000;
    VREFCON0=0b11110000;
    VREFCON2=0b00000000;
    TRISA &=~(1<<4);
    
    
return;}

void Setupint(void)
{
    
    return;}




void Setup(void)
{
    SetupOscilador();
    Setupports();
    Setupint();
return;}


