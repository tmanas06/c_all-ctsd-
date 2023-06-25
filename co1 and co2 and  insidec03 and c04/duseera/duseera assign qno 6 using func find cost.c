#include<stdio.h>
#include<math.h>
float calc(int x1,float x2,int y1,float y2,int p);
int main()
{
	int p,x1,y1;
	float x2,y2,cst;
	printf("Enter the money you have:");
	scanf("%d",&p);
	printf("Enter the number of pencils and chocolates:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the cost of pencil and chocolate:");
	scanf("%d%d",&x2,&y2);
	cst=calc( x1,y1,x2,y2,p);
}
float calc(int x1,float x2,int y1,float y2,int p)
{
	float t ,tc;
	t=(x1*x2)+(y1*y2);
	tc=p-t;
	printf("The cost of the shopping is %f \n",t);
	printf("The reamining money after the expenditure is %f",tc);
}
