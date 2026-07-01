#include<stdio.h>
int count(num)
{   int r=0;
    int c=0;
	while(num!=0)
	{
		r=num%10;
		c=c+1;
		num/=10;
	}
	
	return c;
}
int main()
{
	printf("%d",count(1234));
}
