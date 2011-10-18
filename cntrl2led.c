#include<msp430.h>
void delay()
{
	int i;
	for( i = 0 ; i < 6000 ; i++)
	{}
} 

main()
{
	P1DIR =0x41;
	P1OUT = 1;
	while(1)
	{
		
		while( (P1IN >> 3 & 1) ==  1)
		{
			delay();
			while( (P1IN >> 3 & 1) == 0 )
			{
				P1OUT ^= 0x41;
				break;
			}
			
		}	
	}
}
	
