#include "sum.h"


	int power(int x,int y){

	int sum1=0;

	do{
	sum1 = sum1 + x;
	x++;
	}while(x!=y);

	sum1 = sum1 + y;
	return sum1;
	
}



