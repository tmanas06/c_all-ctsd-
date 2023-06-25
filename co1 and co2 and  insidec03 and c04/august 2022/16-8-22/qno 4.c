//question number 4
/*From the top of a tower, an indian army soldier sees his enemy on the ground at an angle of depression
of 40 degree. If the tower is 45 feet in height, how far is the enemy from the base of the tower.*/

#include<stdio.h>
#include<math.h>
int main()
{
	int feet,angle,rn;
	
	printf("Enter height in feet: ");
	scanf("%d",&feet);
	printf("Enter angle of depression:");
	scanf("%d",&angle);
	rn=disti(feet,angle);
}
int disti(int feet,int angle)
{
    float x,rad,dis;
	rad=angle*(3.14/180);
	x=tan(rad);
	dis=feet/x;
	printf("Distance is %.2f",dis);
	
}
