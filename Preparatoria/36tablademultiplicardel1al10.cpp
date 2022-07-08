//tablas del 1 al 10//
#include <stdio.h>
int main ()
{
	int c=1,m,N=1;
	while(N<11)
    	{
	      while(c<11)
        	{
	          m=N*c;
	printf("%d",N);
	printf(" * ");
	printf("%d", c);
	printf(" = ");
	printf("%d\n", m);
	c=c+1;
	}
	N=N+1;
	c=1;
	printf("\n");
	printf("\n");
	
	}
}

