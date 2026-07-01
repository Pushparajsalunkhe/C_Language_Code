#include<stdio.h>
int amt()
{
	int num=153;
	int r=0;
	int sum=0;
	while (num!=0)
	{
	r=num%10;
	sum=sum+(r*r*r);
	num/=10;
	}
	
	printf("%d",sum);
	
}
int main()
{
	amt();
}
