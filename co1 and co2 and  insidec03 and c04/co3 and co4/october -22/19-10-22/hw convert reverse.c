/* write a c progrsm to convert the given string into reverse case*/
#include<stdio.h>
int main(){
	char name[25];
	int i,j;
	printf("enter the name:");
	fgets(name,25,stdin);
	for(i=0;j=i;j>=0;name[i]!='\0';i++;j--);
	printf("%c",name[i]);
}
