//sumar 1000 numeros//
#include<stdio.h>
int main ()
{
	int cont=1,S=0;
	
	while(cont<=1000)
	{
		S=S+cont;
		cont=cont+1;
	}
	printf("la suma es ;%d",S);	
}
