//El sueldo de un trabajador //
#include<stdio.h>
int main()
{
	float H,S,h,s,I;
	printf("insertar el sueldo");
	scanf("%f",&H);
	printf("insertar las horas de trabajo");
	scanf("%f",&S);
	h=H*S;
	I=h*.11;
	s=I-h;
	printf("el suelo es de %f",s);
}
