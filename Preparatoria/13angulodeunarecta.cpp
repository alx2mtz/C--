//angulo de una recta//
#include<stdio.h>
int main ()
{
	int A;
	printf("inserta los grados");
	scanf("%I",&A);
	if(A<89)
	printf("es agudo");
	else
	{
		if(A=90)
		printf("es recto");
		else
		{
			if(A<180)
			printf("es obtuso");
		
		}
	}
	
}
