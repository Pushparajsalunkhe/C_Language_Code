#include <stdio.h>
int fun()
{
	int num;
	printf("Enter The Number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Even Number");
	}
	
	else
	{
		printf("Odd Number");
	}
}
int main()
{
	fun();
}
