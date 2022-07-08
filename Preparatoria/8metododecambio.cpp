//Metodo de cambio//
#include<stdio.h>
int main ()
{
	float D,C,P,p,d,presio1,presio2,presio3,presio4;
	printf("Incerta la cantidad de Chelines");
	scanf("%f",&C);
	printf("Incerta la cantidad de Dragmas Griegos");
	scanf("%f",&D);
	printf("Incerta la cantidad de Pesetas");
	scanf("%f",&p);
	P=956871/100;
	presio1=C*p;
	d=88607*D;
	presio2=22110/d;
	presio3=112499/P;
	presio4=9289/P;
	printf("De chelines a pesetas son %f",presio1);
	printf("De pesetas a francos son %f",presio2);
	printf("De pesetas a dolares %f",presio3);
	printf("De pesetas a liras %f",presio4);
}
