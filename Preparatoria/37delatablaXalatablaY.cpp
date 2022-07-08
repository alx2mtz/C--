//De la tabla X a la Tabla Y//
#include <stdio.h>
int main ()
{
		int c=1,m,N,ti,tf,tf1;
printf ("¿desde que tabla quieres ver?");
scanf("%d",&N);
printf("grax UuU, ¿asta que tabla quieres ver?");
scanf("%d",&tf);
tf1=tf+1;
	while(N<tf1)
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
