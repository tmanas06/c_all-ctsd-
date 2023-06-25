/* to test whether the given character in lower case is vowel or not*/
#include<stdio.h>
int main()
{
	char c;
	printf("enter the character:");
	scanf("%c",&c);
	if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
	{
		printf("It is a vowel");
	}
	else
	{
		printf("It is a consonant");
	}
}
