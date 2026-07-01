#include<stdio.h>
char main(){
	char ch;
	printf("Enter The charecter");
	scanf("%c",&ch);
	
	switch(ch){
		
		case 'a':
			printf("%c is Vowel",ch);
			break;
			
		case 'e':
			printf("%c is Vowel",ch);
			break;
			
		case 'i':
			printf("%c is Vowel",ch);
			break;
			
		case 'o':
			printf("%c is Vowel",ch);
			
		default:
			printf("Not Vowel");
		
	}
}
