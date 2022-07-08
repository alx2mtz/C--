//SERIE FIBONACCI//
#include<stdio.h>
int main()
{
	int n,p=1,s=1,x,c;
	printf("escribe el numero de resultado en serie\n");
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		if(c<=1)
		x=c;
		else
		{
			x=p+s;
			p=s;
			s=x;
		}
		printf("%d\n",x);
	}
}

