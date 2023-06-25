/*write a c program to count number of vowels in a given string*/
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:");
	fgets(name,19,stdin);
	int i,nv=0;
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		nv++;
	}
	printf("Number of vowels=%d",nv);
}
