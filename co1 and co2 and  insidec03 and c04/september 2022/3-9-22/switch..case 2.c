/* ask the user to enter 1 digit positive number and display it in word form using switch 
case*/
#include<stdio.h>
int main()
{
	int p;
	printf("Enter the number:");
	scanf("%d",&p);
	switch(p)
	{
		case 0:
			printf("Zero");
			break;
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		default:
			printf("It is not a single digit number");
			break;
	}
}
