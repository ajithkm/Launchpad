#include<msp430.h>

delay()
{	
	int i = 0;
	while( i++ < 32000 )
	;
}

main()
{
	P1DIR = BIT0 | BIT1 | BIT2 | BIT3;
	while(1)
	{
		P1OUT = BIT0;
		delay();
		
		P1OUT = BIT1;
		delay();

		P1OUT = BIT2;
		delay();

		P1OUT = BIT3;
		delay();
	}
}
	
