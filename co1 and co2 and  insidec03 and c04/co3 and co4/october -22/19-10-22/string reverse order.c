/* write a c program to display the given sting in reverse order */
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:");
	fgets(name,19,stdin);
	int i,j,nv=0;
	i=0;                 //line 8,9,10 is this for(i=0;name[i]!='\0';i++);
	while(name[i]!='\0') 
	i++;
	printf("Name in reverse\n");
	for(j=i-1;j>=0;j--)
	printf("%c",name[j]);
	
}
