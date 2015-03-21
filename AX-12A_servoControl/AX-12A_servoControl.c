#define F_CPU 11059200ULL

#include <avr/io.h>
#include <util/delay.h>
#include "qei.h"
#include "control.h"
#include <avr/io.h>

#define AX_SERVO1 1
#define AX_SERVO2 2

int main(void)
{
	DDRE |= (1 << PINE4);
	PORTE &= (~(1 << PINE4));
	DDRE |= (1 << PINE5);
	PORTE &= (~(1 << PINE5));
	AX_UART_Init();
	CAN_Init();
	TIMER1_Init();
  
	_delay_ms(1000);


	AX_SetAngle(150, 180, 1, AX_SERVO1);//okrene
	_delay_ms(500);
	AX_SetAngle(100, 180, 1, AX_SERVO1);//okrene
	_delay_ms(500);
	AX_SetAngle(50, 180, 1, AX_SERVO1);//okrene
	_delay_ms(500);
	AX_SetAngle(10, 180, 1, AX_SERVO1);//okrene
	_delay_ms(500);
	AX_SetAngle(200, 180, 1, AX_SERVO1);//okrene  
  
}