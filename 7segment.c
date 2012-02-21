#include<msp430.h>
void delay()
{
	int i=0;
	while( i++ < 32000 )
		;
}

main()
{
	P1DIR = 0xff;
	while(1)
	{
		
		P1OUT = BIT0 | BIT1 | BIT2 | BIT3 | BIT4 | BIT5 ;
		delay();
		delay();
		delay();
		
		P1OUT = BIT1 | BIT2;
		delay();
		delay();
		delay();
	
		P1OUT = BIT0 | BIT1 | BIT7 | BIT4 | BIT3;
		delay();
		delay();
		delay();
		
		P1OUT = BIT0 | BIT1 | BIT2 | BIT3 | BIT7;
		delay();
		delay();
		delay();
		
		P1OUT = BIT5 | BIT7 | BIT1 | BIT2;
		delay();
		delay();
		delay();

		P1OUT = BIT0 | BIT7 | BIT5 | BIT2 | BIT3;
		delay();
		delay();
		delay();
		
		P1OUT = BIT5 | BIT4 | BIT3 | BIT2 | BIT7 ;
		delay();
		delay();
		delay();
	
		P1OUT = BIT1 | BIT2 | BIT0;
		delay();
		delay();
		delay();
	
		P1OUT = BIT0 | BIT1 | BIT2 | BIT3 | BIT4 | BIT5 | BIT7;
		delay();
		delay();
		delay();
		
		P1OUT = BIT0 | BIT1 | BIT2 |  BIT5 | BIT7;
		delay();
		delay();
		delay();
	

	}
}

	
