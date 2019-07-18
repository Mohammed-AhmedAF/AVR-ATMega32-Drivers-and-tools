/*
 * IC74595_program.c
 * Created: 7/17/2019 4:23:59 PM
 */ 

#include "Macros.h"
#include "Std_Types.h"
#include "DIO_interface.h"
#include "IC74595_interface.h"



void IC74595_vidInit(void) {
	DIO_vidSetPinDirection(IC74595_LATCH_PORT,IC74595_LATCH_PIN,DIO_OUTPUT);
	DIO_vidSetPinDirection(IC74595_OUTENABLE_PORT,IC74595_OUTENABLE_PIN,DIO_OUTPUT);
}

void IC74595_vidControl(void)  {
	DIO_vidSetPinValue(IC74595_OUTENABLE_PORT,IC74595_OUTENABLE_PIN,STD_HIGH);
	
	DIO_vidSetPinValue(IC74595_LATCH_PORT,IC74595_LATCH_PIN,STD_HIGH);
	DIO_vidSetPinValue(IC74595_LATCH_PORT,IC74595_LATCH_PIN,STD_LOW);

	DIO_vidSetPinValue(IC74595_OUTENABLE_PORT,IC74595_OUTENABLE_PIN,STD_LOW);
}