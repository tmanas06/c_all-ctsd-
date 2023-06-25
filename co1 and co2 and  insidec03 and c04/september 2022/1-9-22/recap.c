/* find volume of a cube for the given side usisng a funciton */
#include<stdio.h>
#include<math.h>
int main()
{
	int s,vol;
	printf("Enter the side:");
	scanf("%d",&s);
	
	vol=volume(s);
}
int volume(int s)
{
	int v;
	v=pow(s,3);
	printf("The volume of a cube is %d",v);
}
