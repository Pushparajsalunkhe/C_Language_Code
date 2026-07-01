#include<stdio.h>
int count(int num)
{
	int c=0,t;
	while(num!=0)
	{
		t=num%10;
		c=c+1;
		num/=10;
	}
	
	printf("Count of The Number is:-%d",c);
}
int main()
{
	count(123489076);
}
