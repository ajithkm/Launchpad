#include<msp430.h>
main()
{
	P1DIR = 0x41;
	int i;
	while(1)
	{
		P1OUT = 0x1;
		for(i = 0 ;i<30000 ; i++)
		{}
		P1OUT = 0x0;
		P1OUT = 0x40;
		for(i = 0 ;i<22000 ; i++)
		{}
		P1OUT = 0x0;
		for(i = 0 ;i<22000 ; i++)
		{}
	}
}
