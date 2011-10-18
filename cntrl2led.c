#include<msp430.h>
main()
{
	P1DIR =0x41;
	P1OUT = 1;
	while(1)
	{
		while( (P1IN >> 3 & 1) == 0 )
		{
			P1OUT ^= 0x41;
		}
	}
}
	
