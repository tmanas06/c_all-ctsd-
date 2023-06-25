/*take input if it is even display beautiful else display smart*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l;
	printf("Enter your name:");
	scanf("%[^\n]s",a);
	l=strlen(a);
	if(l%2==0)
	printf("%s is beautiful",a);
	else
	printf("%s is smart",a);
}
