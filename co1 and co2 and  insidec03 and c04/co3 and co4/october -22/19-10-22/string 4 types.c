/* //single word
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:");
	scanf("%s",name);
	printf("Welcome %s",name);
}*/
/*//many words or sentence
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:");
	scanf("%[^\n]s",name);
	printf("Welcome %s",name);
}*/
//many words or sentence 
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:");
	fgets(name,19,stdin);
	printf("Welcome %s",name);
}

