#include <msp430g2553.h>

unsigned int i;
unsigned int h;

void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;

	P1DIR |= 0x01;

	for(;;) {

	for(h=0;h<92;h++){
		__delay_cycles(900);
		P1OUT=0x01;
		__delay_cycles(900);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<84;h++){
		__delay_cycles(1072);
		P1OUT=0x01;
		__delay_cycles(1072);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<66;h++){
		__delay_cycles(1351);
		P1OUT=0x01;
		__delay_cycles(1351);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<66;h++){
		__delay_cycles(1351);
		P1OUT=0x01;
		__delay_cycles(1351);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<66;h++){
		__delay_cycles(1351);
		P1OUT=0x01;
		__delay_cycles(1351);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<76;h++){
		__delay_cycles(1204);
		P1OUT=0x01;
		__delay_cycles(1204);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<84;h++){
		__delay_cycles(1072);
		P1OUT=0x01;
		__delay_cycles(1072);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<90;h++){
		__delay_cycles(1012);
		P1OUT=0x01;
		__delay_cycles(1012);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<100;h++){
		__delay_cycles(902);
		P1OUT=0x01;
		__delay_cycles(902);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<100;h++){
		__delay_cycles(902);
		P1OUT=0x01;
		__delay_cycles(902);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<100;h++){
		__delay_cycles(902);
		P1OUT=0x01;
		__delay_cycles(902);
		P1OUT=0x00;
	};
	P1OUT=0x00;
	__delay_cycles(10000);

	for(h=0;h<84;h++){
		__delay_cycles(1072);
		P1OUT=0x01;
		__delay_cycles(1072);
		P1OUT=0x00;
	};
	P1OUT=0x00;

	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	__delay_cycles(100000);
	
}
}
