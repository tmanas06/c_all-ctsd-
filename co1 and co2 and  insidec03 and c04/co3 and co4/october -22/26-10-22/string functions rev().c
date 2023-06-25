/*string reverse strrev()*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("Enter string:");
	scanf("%[^\n]s",a);
	printf("%s",strrev(a));
}
