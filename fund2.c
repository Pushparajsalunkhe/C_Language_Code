#include<stdio.h>
int table()
{   int num;
    printf("Enter The Number:-");
    scanf("%d",&num);
	int i=1;
	for (i=1;i<=10;i++)
	{
		printf("%d \n",i*num);
	}
}
int main()
{
	table();
}
