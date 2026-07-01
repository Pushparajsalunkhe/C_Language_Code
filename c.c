#include <stdio.h>
int main()
{
	int a;
	printf("Enter The Number 1:-");
	scanf("%d",&a);
	
	int b;
	printf("Enter The Number 2:-");
	scanf("%d",&b);
	
	int c;
	
	c=a;
	a=b;
	b=c;
	printf("a=%d and b=%d",a,b);
}
