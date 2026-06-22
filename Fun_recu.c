#include<stdio.h>
int num(n)
{
	if (n>=1)
	{
		return n+num(n-1);
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int n;
	printf("Ente The Number");
	scanf("%d",&n);
	printf("Addition is :-%d",num(n));
}
