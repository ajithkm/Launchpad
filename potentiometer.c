#include<msp430.h>

void init_adc()
{
	ADC10CTL0 = ADC10ON | ADC10SHT_2 | SREF_0;
	ADC10CTL1 = INCH_4 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0 ;
	ADC10AE0 = BIT4;
	ADC10CTL0 |= ENC;
}

void start_converting()
{
	ADC10CTL0 |= ADC10SC;
}

unsigned int is_converting()
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
	P1DIR = BIT0 | BIT6;
	init_adc();
	while(1)
	{
		start_converting();
		while( is_converting() );
		
		if( ADC10MEM > 768 )
			P1OUT = BIT0 | BIT6;
		else if( ADC10MEM > 512 )
			P1OUT = BIT6;
		else if( ADC10MEM > 256 )
			P1OUT = BIT0;
		else
			P1OUT = 0;
		delay();
	}
}
