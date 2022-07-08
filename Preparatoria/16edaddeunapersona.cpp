//edad de una persona//
#include<stdio.h>
int main()
{
	int D,M,A,AA,MA,DA,a,a1;
	printf("inserta el año de nacimiento-");
	scanf("%i",&A);
	printf("inserta el mes de nacimiento-");
	scanf("%i",&M);
	printf("inserta el dia de nacimiento-");	
	scanf("%i",&D);
	printf("inserta el año actual-");
	scanf("%i",&AA);
	printf("inserta el mes actual-");
	scanf("%i",&MA);
	printf("inserta el dia actual-");
	scanf("%i",&DA);
	if(M==MA) 
     	{
		if(D==DA)
		a=AA-A;
		printf("la edad es de  %d",a);
        }  
		if(D<DA)
	  	{
		  a1=AA-A;
		  a1=a-1;
		printf("la edad es de  %d",a1);
	    }
		if(M<MA)
		{
		a=AA-A;
		printf("tu edad es de  %d",a);
	    }  
	if(M>MA)
		{
		a=AA-A;
		a1=a-1;
		printf("tu edad es de  %d",a1);
	    }
	}
