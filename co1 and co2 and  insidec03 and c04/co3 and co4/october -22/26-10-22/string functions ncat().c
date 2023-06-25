/* write a c program to accept 2 strings s1 and s2 add 50% of s2 at the end of s1*/
#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	int l;
	printf("Enter the first string:");
	scanf("%s",&s1);
	printf("Enter the second string:");
	scanf("%s",&s2);
	l=strlen(s2)/2;
	strncat(s1,s2,l);
	printf("%s",s1);
}
