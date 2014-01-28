#include <stdio.h>
//functions goes over main, or you should make a prototype first so it
//will stlil be able to resolve
void swap(int *P1, int *P2){
	int C;
	C = *P1;
	*P1 = *P2;
	*P2 = C;
}

void main(void){
	int P1 = 10;
	int P2 = 20;
	printf("P1 is: %d and P2 is: %d \n", P1, P2);
	// use ampersand to assign pointer register value
	swap( &P1, &P2);
	printf("P1 is now: %d and P2 is now: %d \n", P1, P2);
}


