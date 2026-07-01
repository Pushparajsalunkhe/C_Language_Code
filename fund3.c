#include <stdio.h>
int swap()
{
	int a=10;
	int b=20;
	int temp;
	
	printf("Before Sawp a=%d , b=%d \n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After Sawp a=%d , b=%d",a,b);
}
int main()
{
	swap();
}
