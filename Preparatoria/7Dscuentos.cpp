//DESCUENTOS//
#include<stdio.h>
int main ()
{
	float C,c,P,p,I;
	printf("Inserte el precio del producto");
	scanf("%f",&C);
	c=.25*C;
	P=C-c;
	I=P*.15;
	p=P+I;
	printf("El producto cuesta %f",p);
}
