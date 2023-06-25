/* check whether the given character is vowel or not using switch case */
#include<stdio.h>
int main()
{
	char v;
	printf("Enter the alphabet:");
	scanf("%c",&v);
	switch(v)
	{
		case 'a':
			printf("Its a vowel");
			break;
		case 'e':
			printf("Its a vowel");
			break;
		case 'i':
			printf("Its a vowel");
			break;
		case 'o':
			printf("Its a vowel");
			break;	
		case 'u':
			printf("Its a vowel");
			break;
		default:
			printf("It is not a vowel");  //consonant
			break;
	}
	
	
}
