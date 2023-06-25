//question 12
/*Meghana was filling application form for the job of Assistant professor in KLU. The application requires 
the age of Meghana as on 08/2021. If Meghana is born on 02/2005, what is the age she needs to fill in 
application form? */

#include<stdio.h>
int main()
{
	int cy,cm,by,bm,age;
	
	printf("Enter the current year:");
	scanf("%d",&cy);
	printf("Enter the current month:");
	scanf("%d",&cm);
	printf("Enter the Birth year:");
	scanf("%d",&by);
	printf("Enter the Birth month:");
	scanf("%d",&bm);
	
	age=calcage(cy,cm,by,bm);
	printf("the age of meghana is %d",age);
	
}
int calcage(int cy,int cm,int by,int bm)
{
	int a,b,d,age;
	a=cy-by;
	b=cm-bm;
	d=(a*12)+b;
	age=(float)d/12;
	return age;
	
}
