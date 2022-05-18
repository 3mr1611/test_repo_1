/*
 * main.c

 *
 *  Created on: May 18, 2022
 *      Author: 3mr darwish
 */
#include <avr/io.h>
#include<util/delay.h>
int main(void){
DDRB=0b00001111; //PORTA0 output

while(1)//super loop
{
	//PORTA=0b00000001; //PA0 HIGH(5v)
	//_delay_ms(1000);
	//PORTA=0; //PA0 low
	//_delay_ms(1000);
	PORTB=0b00000001;
	for(int i=0;i<4;i++){

		_delay_ms(250);
		PORTB <<=2;
	}
}
}


