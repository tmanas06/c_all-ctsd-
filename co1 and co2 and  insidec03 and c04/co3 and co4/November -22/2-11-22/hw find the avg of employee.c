/* write a c program to define a structure employee having employee id, name ,salary as members accept
n employees information and find total salary paid by the company to all the employees*/
#include<stdio.h>
struct employee
{
	int empid;
	char name[20];
	float salary;
};
int main()
{
	int n;
	printf("enter number of employees:");
	scanf("%d",&n);
	struct employee s[n];
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		printf("Enter s[%d] information",i);
		scanf("%d%s%f",&s[i].empid,&s[i].name,&s[i].salary);
	}
	printf("employee data are\n");
	for(i=0;i<n;i++)
	{
		printf("%d  %s  %.1f\n",s[i].empid,s[i].name,s[i].salary);
	}
	for(i=0;i<n;i++)
	{
		sum=s[i].salary+sum;
	}
	printf("\n%.1f",sum);
}
