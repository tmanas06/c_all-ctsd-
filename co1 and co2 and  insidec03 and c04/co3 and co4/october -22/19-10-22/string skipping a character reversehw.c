/*display alternatively from last character*/
/*display a sting by skipping alternate characters */
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:");
	fgets(name,19,stdin);
	int i,j,a=0,nv=0;
	for(i=0;name[i]!='\0';i++){
		a++;
	}
	for(j=a-1;j>=0;j--){
		if(j%2!=0){
			printf("%c",name[j]);
		}
	
	}
}
