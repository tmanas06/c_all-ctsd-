/*accept name of the student,university,course then display student name is doing cours in
 university */
#include<stdio.h>
int main()
{
	char stname[25],course[20],univ[30];
	printf("Enter the name of the student:");
	scanf("%s",stname);
	printf("Enter course:");
	scanf("%s",course);
	printf("Enter the name of the university:");
	scanf("%s",univ);
	printf("\n%s is doing %s in %s",stname,course,univ);
}
