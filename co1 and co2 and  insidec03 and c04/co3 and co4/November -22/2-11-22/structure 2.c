/*find from 2 student which one has maximum fees*/
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
	struct student s2;
	printf("Enter the student id,name,fees");
	scanf("%d%s%f\n",&s1.stid,&s1.stname,&s1.fees);
	scanf("%d%s%f\n",&s2.stid,&s2.stname,&s2.fees);
	if(s1.fees<s2.fees)
	printf("%d%s%f",s2.stid,s2.stname,s2.fees);
	else
	printf("%d%s%f\n",s1.stid,s1.stname,s1.fees);
}
