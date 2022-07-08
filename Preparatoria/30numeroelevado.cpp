//Numero elevado//
#include<stdio.h>
int main ()
{
	float N,n,C=1,M=1;
	printf("inserte el numero a elevar");
	scanf("%f",&N);	
printf("inserte cuanto se elevara");
	scanf("%f",&n);

	while(C<=n)
	{
	    M=M*N;
		C=C+1;
		
	}
	printf("el numero es %f",M);
}
