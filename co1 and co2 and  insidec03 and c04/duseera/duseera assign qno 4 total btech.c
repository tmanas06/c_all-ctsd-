#include<stdio.h>
int main()
{
	int b,m,ms,t,p,bp,mp,msp,pp;
	printf("Enter the total number of students:");
	scanf("%d",&t);
	printf("Enter the numnber of students in B. Tech, M. Tech , M.S. :");
	scanf("%d%d%d",&b,&m,&ms);
	p=t-b+m+ms;
	printf("The total number of students in phd is %d",p);
	//now the percentages
	bp=(b*100)/t;
	mp=(m*100)/t;
	msp=(ms*100)/t;
	pp=(p*100)/t;
	printf("The percentage of B.Tech students is %d,M. Tech is %d,M.S. is %d,Ph.D. is %d"
	,bp,mp,msp,pp);
}
