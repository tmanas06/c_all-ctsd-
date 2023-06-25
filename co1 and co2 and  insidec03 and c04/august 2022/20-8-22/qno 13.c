//question number 13
/* Google is recruiting software engineers to calculate distance between
the co-ordinates of two buildings in Google Maps. Some buildings do
not have coordinates but have distances to the nearest buildings. If the
co-ordinates of two buildings - A is (1,1), B is (2,3) and building C is 2kms
away from building B. Find the length of the path from A to C via B. */

#include<stdio.h>
#include<math.h>
float totaldis(int x1,int x2,int y1,int y2,int c)
{
	float ab,d,dt;
	//d=sqrt(pow(x2-x1,2)+pow(y2-y1,2))
	ab=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	d=pow(ab,0.5);
	dt=d+c;
	return dt;
}
int main()
{
	int x1,x2,y1,y2,c;
	float dist;
	printf("Enter the co-ords of building A:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the co-ords of building B:");
	scanf("%d%d",&x2,&y2);
	printf("Enter the distance between B and C:");
	scanf("%d",&c);
	
	dist=totaldis(x1,x2,y1,y2,c);
	printf("The length of path from A to C is %f",dist);
}


