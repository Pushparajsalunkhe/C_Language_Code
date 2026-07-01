#include<stdio.h>
int sum(int num)
{
	if (num>=1)
	{
		return num+ sum(num-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a=5;
	printf("%d",sum(a));
}
