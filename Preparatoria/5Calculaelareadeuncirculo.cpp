//Calcula el area de un circulo//
#include<stdio.h>
int main ()
{
	float D,R,r,A;
	printf("Inserta el diametro");
	scanf("%f",&D);
	R=D/2;
	r=R*R;
	A=3.14*r;
	printf("El area del circulo es %f",A);
}
