/*info on student using sturcture*/
#include<stdio.h>
struct student
{
	int stid;
	char stname[20];
	float fees;
};
int main()
{
	struct student s1;
	printf("Enter student information:");
	scanf("%d%s%f",&s1.stid,&s1.stname,&s1.fees);
	printf("student information is %d %s %f",s1.stid,s1.stname,s1.fees);
 } 
