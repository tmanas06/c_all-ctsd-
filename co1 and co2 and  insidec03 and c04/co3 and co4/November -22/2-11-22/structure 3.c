/* write a c program to define a structure marks having 4 members 1)student id 2) subject 1 3)subject 2
4) subject 3 and accept 3 students marks find average of each student marks,
then display the student who got least marks*/
#include<stdio.h>
struct student
{
	int stid;
	int sub1;
	int sub2;
	int sub3;	
};
int main()
{
	float a1,a2,a3;
	struct student s1,s2,s3;
	printf("Enter s1 information");
	scanf("%d%d%d%d",&s1.stid,&s1.sub1,&s1.sub2,&s1.sub3);
	printf("Enter s2 information");
	scanf("%d%d%d%d",&s2.stid,&s2.sub1,&s2.sub2,&s2.sub3);
	printf("Enter s3 information");
	scanf("%d%d%d%d",&s3.stid,&s3.sub1,&s3.sub2,&s3.sub3);
	a1=(float)(s1.sub1+s1.sub2+s1.sub3)/3;
	a2=(float)(s2.sub1+s2.sub2+s2.sub3)/3;
	a3=(float)(s3.sub1+s3.sub2+s3.sub3)/3;
	if(a1<a2&&a1<a3)
	printf("%d%d%d",s3.sub1,s3.sub2,s3.sub3);
	else if(a2<a1&&a2<a3)
	printf("%d%d%d",s2.sub1,s2.sub2,s2.sub3);
	else
	printf("%d%d%d",s3.sub1,s3.sub2,s3.sub3);
}
