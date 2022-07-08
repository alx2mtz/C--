//promedio de los primeros 1000 de numeros//
#include<stdio.h>
int main()
{
	int s=0,cont=0;
	while(cont<=1000)
	{
		s=s+cont;
		cont=cont+2;
	}
	printf("la suma es:%d");
}
