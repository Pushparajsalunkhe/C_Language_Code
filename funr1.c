#include<stdio.h>
int fact(num)
{
	int i=1;
	int f=1;
	for (i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	printf("%d",fact(5));
}
