#include<stdio.h>
int login_count(){
	static int a=0;
	a++;
	printf("Attempts: %d \n",a);
}
int main()
{
	login_count();
	login_count();
	login_count();
	login_count();
}
