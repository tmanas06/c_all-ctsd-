/*concatination strcat()*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	printf("Enter the first string:");
	scanf("%s",a);
	printf("Enter the second string:");
	scanf("%s",b);
	strcat(a,b);
	printf("After concatination it is %s",a);
	//copy strcpy() 
	/*printf("Enter the first string:");
	scanf("%s",a);
	strcat(a,b);
	printf("After copy it is %s",b);*/
}


