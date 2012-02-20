#include <msp430.h>
//#define TOGGLE_LED ( P1OUT ^= BIT6 ) 

void init_adc()
{
	ADC10CTL0 = ADC10ON | SREF_0 | ADC10SHT_2 ;
	ADC10CTL1 = INCH_0 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0 ;
	ADC10AE0 = BIT0;
	ADC10CTL0 |= ENC;
}

void start_conversion()
{
	ADC10CTL0 |= ADC10SC;
}

unsigned int converting()
{
	return ADC10CTL1 & ADC10BUSY;
}

void delay()
{
	int i=0;
	while( i++ < 32000)
	;
}


main()
{
	P1DIR = BIT6;
	P1OUT = BIT6;
	init_adc();
	
	while(1)
	{
		start_conversion();
		
		while( converting() )
			;
			
		if( ADC10MEM > 380 )
			P1OUT = 0;
		else
			P1OUT = BIT6;
		delay();
		
	}
}
					
