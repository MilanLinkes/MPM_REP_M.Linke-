//Milan Linkeš
#include <stdio.h>
#include <stdlib.h>
#define SHORT_INT_BITS 16	
 
short int swap_endianness(short int x){
	
	return (x >> 8)|(x << (SHORT_INT_BITS-8));
}

int main(void){
	short int cislo = 10;
	short int x;
	
	x = swap_endianness(cislo);
	printf("%d ", x);
}
