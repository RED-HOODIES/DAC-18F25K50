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


