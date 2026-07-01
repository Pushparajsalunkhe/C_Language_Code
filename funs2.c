#include<stdio.h>
void score()
{
	static int s=0;
	s+=10;
	printf("Score: %d \n",s);
}
int main()
{
	score();
	score();
	score();
	score();
}
