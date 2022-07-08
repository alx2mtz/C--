//refresco//

#include<stdio.h>
int main ()
{
float D,C,d,A;
printf("Que esperas, crees que funciono con aire o que?Ya pon el dinero no tengo tu tiempo:");
scanf("%f",&D);
if(D>=8)
{
	A=D-8;
	printf("Kaigale Compa o lo filereo %f",A);
}
if(D<=8)
{
	while (D<8) 
	{
	printf("Te falta wey, o que te doy lo que me pagaste o que:");
	scanf("%f",&d);
	D=D+d;
	}
	C=D-8;
printf("kaigale Prro .l.: %f",C);
}
}

