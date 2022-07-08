//descuento//
#include<stdio.h>
int main ()
{
	float I,D,M,T,T1;
	printf("inserta la cantidad a pagar");
	scanf("%f",&M);
	if(M>2000)
	D=M*.15;
	T=M-D;
	I=T*.15;
	T1=T+I;
	
	
}
