#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int l;
	printf("First string:");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	l=strcmp(a,b);
	if(l==0)
	printf("it is palindrom");
	else
	printf("it is not a palindrom");
}
