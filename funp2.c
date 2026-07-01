#include<stdio.h>
int digit(num)
{
	int r,q,sum=0;
	
	r=num/10;
	q=num%10;
	
	sum=r+q;
	printf("Sum of Digit is:- %d",sum);
}
int main()
{
	digit(34);
}
