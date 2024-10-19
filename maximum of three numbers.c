#include<stdio.h>
int main ()
{
	int a,b,c,m;
	printf("enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		m=a;
	}
	else
	{
		m=b;
	}
	if(m>c)
	{
		printf("%d",m);
	}
	else
	{
		printf("%d",c);
	}
}

