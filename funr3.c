#include <stdio.h>
int arm(int num)
{
	int r=0;
	int q=0;
	int n=num;
	while(num!=0)
	{   q=num%10;
		r=r+(q*q*q);
		num/=10;
	}
	
		return r;
	
}
int main()

{
	printf("%d",arm(137));
}
