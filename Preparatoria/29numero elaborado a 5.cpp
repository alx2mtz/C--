//numero elevado a 5//
#include<stdio.h>
int main ()
{
	float N,M=1,C=1;
	printf("inserte numero a elevar");
	scanf("%f",&N);
	while(C<=5)
	{
		M=M*N;
		C=C+1;
	}
	printf("el numero es %f",M);
}
