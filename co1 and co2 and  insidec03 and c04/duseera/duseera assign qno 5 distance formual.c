#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2,c;
	float d,t,tt;
	printf("Enter the two points in a:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the two points in b:");
	scanf("%d%d",&x2,&y2);
	printf("Enter the value of c:");
	scanf("%d",&c);
	d=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	t=d*d;
	tt=t+c;
	printf("The distance from point A to point C is %.2f",tt);
}
