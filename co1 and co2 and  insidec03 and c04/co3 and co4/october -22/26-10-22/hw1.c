/*write a c program to accept a sentence and display each word of the given sentence in the reverse order
in the given sentence*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("Enter string:");
	scanf("%[^\n]s",a);
	printf("%s",strrev(a));
}

