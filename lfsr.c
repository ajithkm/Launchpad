#include<msp430.h>
void delay()
{
	int i = 0;
	while( i++ < 22000 )
		;
}

main()
{
	unsigned int lfsr = 0xfac1;
	int bit;
	P1DIR = 1;
	while(1)
	{
		bit = ( (lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
		lfsr =( (lfsr >> 1) | (bit << 15) );
		P1OUT = (lfsr >> 6) & 1 ;
		delay();
	}
}
