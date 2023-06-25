/*write a c program to accept two string and display them in the alphabetical order*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int l;
	printf("First string:");
	scanf("%s",a);
	printf("Second string:");
	scanf("%s",b);
	l=strcmp(a,b);
	if(l==0)
	printf("equal");
	else if(l<0)
	printf("lesser");
	else
	printf("greater");
}

