/* print greetings when press 1 to display in engish,2 to display in telugu,3 to display in hindi, 4 to 
display in tamil*/
#include<stdio.h>
int main()
{
	int ch;
	printf("1.English\n2.Telugu\n3.Hindi\n4.Tamil");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Hello");
			break;
		case 2:
			printf("Namaskaram");
			break;
		case 3:
			printf("Namasteh");
			break;
		case 4:
			printf("Vadakam");
			break;
		default:
			printf("Invalid");
	}
}
