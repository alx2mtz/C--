//tabla de multiplicar//
#include<stdio.h>
int main ()
{
	int N,c=1,m;
	printf("incerte el numero");
	scanf("%d",&N);
	while(c<11)
	{
	m=N*c;
	
	printf("%d",N);
	printf("X");
	printf("%d",c);
	printf("=");
	printf("%d\n",m);
	//printf("%d",N,"X","%d",c,"=","%d\n",m);
	c=c+1;
		}
}
