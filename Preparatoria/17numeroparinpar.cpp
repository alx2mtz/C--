//numero par inpar//
#include<stdio.h>
int main()
{
	int N,M;
	printf("inserta el numero");
	scanf("%i",&N);
	M=N%2;
	if(M==0)
	printf("el numero es par");
	else
	printf("el numero es inpar");
}
