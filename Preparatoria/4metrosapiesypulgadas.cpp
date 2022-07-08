//metros a pies y pulgadas//
#include<stdio.h>
int main()
{
	float M,P,p;
	printf("captura los metros");
	scanf("%f",&M);
	P=M*39.37;
	p=P/12;
	printf("En pies es %f",P);
	printf("En pulgadas es %f",p);
}
