#include<stdio.h>
int sum(num)
{   int r=0;
    int c=0;
	while(num!=0)
	{
		r=num%10;
		c=c+r;
		num/=10;
	}
	
	return c;
}
int main()
{
	printf("%d",sum(1234));
}
