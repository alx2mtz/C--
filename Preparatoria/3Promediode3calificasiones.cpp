//promedio de 3 calificasiones//
#include<stdio.h>
int main()
{
	float c1,c2,c3,s,p;
	printf("inserte primera calificasion");
	scanf("%f",&c1);
	printf("inserte segunda calificasion");
	scanf("%f",&c2);
	printf("inserte tersera calificasion");
	scanf("%f",&c3);
	s=c1+c2+c3;
	p=s/3;
	printf("El promedio es %f",p);
}
