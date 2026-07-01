#include<stdio.h>
int main()
{
	int a;
	printf("Enter The Number 1:-");
	scanf("%d",&a);
	
	int b;
	printf("Enter The Number 2:-");
	scanf("%d",&b);
	
	int c;
	printf("Enter The Number 3:-");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("A is Large");
	}
	
	else if(b>c)
	{
		printf("b is Large");
	}
	
	else
	{
		printf("C is Large");
	}
}
