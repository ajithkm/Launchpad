#include<msp430.h>
main()
{
	P1DIR = 0x41;
	P1OUT = 0x41;
	TACTL = 0x02F0;
	TACCR0 =65000;
	while(1)
	{
		P1OUT ^= 1;
		while ( TAR <  30000 )
			;
		P1OUT ^= 0x40;
		while ( TAR > 50000 )
			;
	}
	
}
