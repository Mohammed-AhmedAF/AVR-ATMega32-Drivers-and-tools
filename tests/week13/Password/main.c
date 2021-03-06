/*
 * Project: Password
 * Developer: Mohamed Ahmed
 * Date: 11 Feb 2018
 */


#include "Macros.h"
#include "Std_Types.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include "KEYPAD_interface.h"
#include "Services_interface.h"
#include <util/delay.h>

void main(void) {
	LCD_vidInit();
	KEYPAD_vidInit();

	while(1) {
		Services_vidWriteCharacter();
	}

}
