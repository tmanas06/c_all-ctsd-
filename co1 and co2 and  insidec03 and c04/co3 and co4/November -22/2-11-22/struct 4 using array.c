/* for 10 students*/
#include<stdio.h>
struct marks
{
	int stid;
	int sub1;
	int sub2;
	int sub3;	
};
int main()
{
	//fo3r n students 
	int n;
	printf("enter number of students:");
	scanf("%d",&n);
	struct marks s[n];
	int i,max;
	for(i=0;i<n;i++)
	{
		printf("Enter s[%d] information",i);
		scanf("%d%d%d%d",&s[i].stid,&s[i].sub1,&s[i].sub2,&s[i].sub3);
	}
	printf("Stduent data are");
	for(i=0;i<n;i++)
	{
		printf("%d%d%d%d",&s[i].stid,&s[i].sub1,&s[i].sub2,&s[i].sub3);
	}
	max=s[0].sub1;
	for(i=1;i<n;i++)
	{
		max=s[i].sub1;
	}
}
	/*for 10 students
	struct student s[10];
	for(i=0;i<0;i++)
	{
		printf("Enter s[%d] information",i);
	    scanf("%d%d%d%d",&s1.stid,&s1.sub1,&s1.sub2,&s1.sub3);
	}*/
