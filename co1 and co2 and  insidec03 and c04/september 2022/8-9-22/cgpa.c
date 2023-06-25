#include<stdio.h>
int main()
{
	float ms1,mss1,ws1,ms2,mss2,ws2,ms3,mss3,ws3,ms4,mss4,ws4,gpas1,gpas2,gpas3,gpas4,cgpa;
	printf("enter the maximum marks scored in  subject 1:");
	scanf("%f",&ms1);
	printf("enter the marks scored in subject1:");
	scanf("%f",&mss1);
	printf("enter the weightage of subject1:");
	scanf("%f",&ws1);
	gpas1=((mss1/ms1)*ws1);
	printf("the gpa of subject 1 is %.2f",gpas1);
	printf("\nenter the  maximum marks scored in subject2:");
	scanf("%f",&ms2);
	printf("enter the marks scored in subject2:");
	scanf("%f",&mss2);
	printf("enter the weightage of subject2:");
	scanf("%f",&ws2);
	gpas2=((mss2/ms2)*ws2);
	printf("the gpa of subject 2 is %.2f",gpas2);
	printf("\nenter the maximum marks of subject3:");
	scanf("%f",&ms3);
	printf("enter the marks scored in subject3:");
	scanf("%f",&mss3);
	printf("enter the weightage of subject3:");
	scanf("%f",&ws3);
	gpas3=((mss3/ms3)*ws3);
	printf("the gpa of subject 3 is %.2f",gpas3);
	printf("\nenter the maximum marks in subject4:");
	scanf("%f",&ms4);
	printf("enter the marks scored in subject4:");
	scanf("%f",&mss4);
	printf("enter the weightage of subject4:");
	scanf("%f",&ws4);
	gpas4=((mss4/ms4)*ws4);
	printf("\nthe gpa of subject 4 is %.2f",gpas4);
	cgpa=(gpas1+gpas2+gpas3+gpas4);
	printf("\nthe cgpa of 4 subjects is %.2f",cgpa);	
}

