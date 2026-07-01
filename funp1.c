#include<stdio.h>
int fact(int num)
{
	int i=1;
	int f=1;
	for (i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
int main()
{
	fact(3);
}
