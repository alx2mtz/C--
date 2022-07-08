//mayor de 2 numeros//
#include<stdio.h>
int main ()
{
	int N1,N2;
	printf("captura el primero");
	scanf("%d",&N1);
	printf("captura el segundo");
	scanf("%d",&N2);
	if(N1==N2)
	printf("son iguales");
	else
	{
		if(N1>N2)
		printf("el mayor es % d", N1);
		else
		printf("el mayor es % d", N2);
		
	}
}
