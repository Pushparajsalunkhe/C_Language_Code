//Traffic Signal

#include<stdio.h>
char main()
{
	char input;
	printf("Enter The Input");
	scanf("%c",&input);
	
	switch(input)
	{
		case 'R' :
			printf("Stop");
			break;
			
		case 'Y':
			printf("Wait");
			break;
			
		case 'G' r:
			printf("Go");
			break;
		
		default:
			printf("Invalid Input");
	}
	
}
