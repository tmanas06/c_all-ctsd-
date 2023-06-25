/* display multiplication table for the given table number and the given table size*/
#include<stdio.h>
int main()
{
	int i,a,b,s;
	printf("Enter the table number:");
	scanf("%d",&a);
	printf("Enter the tabel size:");
	scanf("%d",&b);
	i=1;
	while(i<=b)
	{
		s=i*a;
		printf("\n %d",s);
		i=i+1;
	
	}
	
}
