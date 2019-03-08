#include <stdio.h>
#include "sum.h"

int main(){
	int a,b,sum;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	
	sum = power(a,b);

	printf("%d\n",sum);
	return 0;
}


