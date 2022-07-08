//promedio de 40 alumnos//
#include<stdio.h>
int main()
{
	float s=0,cont=1,cal,p;
	while(cont<=40)
	{
	printf("captura la calificacion");
	scanf("%f",&cal);
	s=s+cal;
    cont=cont+1;
	}
	p=s/40;
	printf("el promedio es");
}

