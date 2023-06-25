/*Generate first n fibnocci series*/
#include<stdio.h>
int main()
{
	int n,n1,n2,i,n3;
	printf("Enter n value:");
	scanf("%d",&n);
	n1=0;
	n2=1;
	printf("The fibnocci series are");
	printf("\n%d\n%d",n1,n2);
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;
	}
}
