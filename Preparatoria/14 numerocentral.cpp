// numero central // 
#include<stdio.h>
int main ()
{
	int X,Y,Z;
	printf("inserta primer numero");
	scanf("%i",&X);
	printf("inserta segundo numero");
	scanf("%i",&Y);
	printf("inserta tercer numero");
	scanf("%i",&Z);
	if(Y==X)
	printf("no hay numero central"); 
	else
	{
		if(Z==X)
		printf("no hay numero cental");
		else
		{
			if(Z==Y)
			printf("no hay numero central");
			else
			{
				if(X>Z)
				{
					if(X>Y)
					printf("el numero central es % i",X);
					else
					{
						if(Z>Y)
						printf("el numero central es %i",Z);
						else
						{
							printf("el numero central es %i",Y);
						}
					}
				}
				else
				{
					if(Z>Y)
					{
						if(Y>X)
						printf("el numero central es %i",Y);
						else
						printf("el numero central es %i",X);
						
					}
					else
					printf("el numero central es %i",Y);
				}
			}
		}
	}
}
