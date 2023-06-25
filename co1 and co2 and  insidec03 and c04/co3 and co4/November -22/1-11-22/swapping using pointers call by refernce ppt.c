/*swapping of two numbers using pointers*/
#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y);
int main(){
	int a,b; printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swap a is %d and b is %d\n",a,b);
	swap(&a,&b);
	printf("after swap a is %d and b is %d",a,b);
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

