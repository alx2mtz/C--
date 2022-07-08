//cuenta de taqueria//
#include<stdio.h>
 int main ()
{
	float TB,TP,P1,P2,P,NT,D,D1,D2,D3;
	printf("inserte numero de tacos de pastor");
	scanf("%f",&TP);
	printf("inserte numero de tacos de bisteck");
	scanf("%f",&TB);
	P1=TB*9;
	P2=TP*8;
	P=P1+P2;
	NT=TB+TP;
	if(NT>=20)
 {
	if(NT>30)
	{
		D=P*.08;
		D1=P-D;
		printf("la cuenta es1 %f",D1);
	} 
	  if(30>=NT)
	  {
		D2=P*.03;
		D3=P-D2;
		printf("la cuenta2 es %f",D3); 
	  }
 }
    else
	printf("la cuenta es3 %f",P);	
		
}

