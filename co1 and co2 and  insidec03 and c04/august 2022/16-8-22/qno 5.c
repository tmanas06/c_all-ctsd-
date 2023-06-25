//question number 5
/*A utophian tree sapling with a height of 1 inch is planted on day 1. The tree grows 2 inches every day.
Find the height of the tree in centimeters on nth day. (1inch=2.54 centi) */

#include<stdio.h>
int main()
{
	int n,he;
	
	printf("Enter the number of days:");
	scanf("%d",&n);
    he=calc(n);
}
int calc(int n)
{
    float ht;
	ht=(2*n-1)*2.54;
	printf("Height of tree = %.2f",ht);
}
