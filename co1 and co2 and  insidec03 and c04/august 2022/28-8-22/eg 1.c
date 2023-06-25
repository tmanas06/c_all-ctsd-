/* write a c program to accept points in level 1 of a vedio game if the player is quaified in level 1 then
enter level 2 points, if player qualified in level 2 then display 1 gold medal , if he qualified in level 1 
but not in level 2 then display silver medal , if not qualified in level 1 then display triangle (minimum 
points is 100 points) */
#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter the points in level 1:");
	scanf("%d",&n);
	if(n>=100)
	{
		printf("\nQualified for level 2");
		printf("\nEnter the points in level 2:");
		scanf("%d",&p);
		if(p>=100)
		{
			printf("Gold medal");
		}
		else
		{
			printf("Silver medal");
		}
	}
	else
	{
		printf(" ^ ");
	}
}
