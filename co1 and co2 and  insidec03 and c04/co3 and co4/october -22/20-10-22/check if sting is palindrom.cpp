/*write a c program to check whether the given string is palindrom or not */
#include<stdio.h>
int main()
{
	int i,j;
	char a[50];
	printf("Enter the srtring:");
	scanf("%s",a);
	printf("Given string is %s",a);
	j=0;
	while(a[j]!='\0')
	{
		j++;
	}
	j=j-1;
	i=0;
	while(i<=j)
	{
		if(a[i]==a[j])
		{
			i++;
			j--;
		}
		else
		break;
	}
	if(i<=j)
	printf("\n%s is Not a palindrom",a);
	else
	printf("\n%s is a palindrom",a);
}
