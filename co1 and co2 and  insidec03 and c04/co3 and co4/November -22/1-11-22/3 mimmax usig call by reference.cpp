/*write a c program to find maximum and minimum from the given 3 data by using a function maxmin*/
#include<stdio.h>
#include<stdlib.h>
void maxmin(int &x,int &y,int &z);
int main(){
	int a,b,c;
	printf("Enter the 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	maxmin(int &a,int &b,int &c);
	printf("%d is max and %d is min",)
}
void maxmin(int &x,int &y,int &z)
{
	if(x>y&&x>z)
	return x;
	else if(y>x&&y>z)
	return y;
	else
	return z;
	
}

