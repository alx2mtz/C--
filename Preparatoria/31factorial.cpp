//factorial//
#include<stdio.h>
int main ()
{
int r=1,c=1,n;
printf("captura el nuemro...");
scanf("%d",&n);
while(c<=n)
{
	r=r*c;
	c=c+1;
}
printf("el resultado es ... %d",r);
}
