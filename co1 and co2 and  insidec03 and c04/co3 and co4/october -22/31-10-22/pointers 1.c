/* write a c program to create an integer array dynamically and store the data in the array andd check 
whether even index is having even data and odd integer having odd data if not then make it into even
and odd data*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,i,*l;
	printf("Enter size:");
	scanf("%d",&a);
	l=(int *)malloc(sizeof(int)*a);
	for(i=0;i<a;i++){
		scanf("%d",&l[i]);
		/*for
		if(l[i]==a)*/ 
	}
}

