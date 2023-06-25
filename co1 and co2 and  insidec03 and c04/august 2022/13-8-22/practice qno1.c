/* practice qno1 */
/* Ram and Hanuman measure and find that their houses are 50 miles apart. If they agree to meet at 
the midpoint between their two houses, how far will each of them travel in kilometers?(1mile=1.6 km)*/

#include<stdio.h>
float midp(int n);
int main()
{
	float n,point;
	printf("Enter the distance:");
	scanf("%f",&n);
	point=midp(n);
}
float midp(int n)
{
	float dk,dm;
	dm=n/2;
	dk=n*1.6/2;
	printf("The mid point in miles between their house is %.2f miles",dm);
	printf("\nThe mid point in kilometer between their house is %.2f km",dk);


	printf("\n_______                             _______");
	printf("\n|     |                             |     |");
	printf("\n| ___ |                             | ___ |");
	printf("\n| | | |                             | | | |");
	printf("\n-------------------------------------------");
	printf("\n###########################################");
	printf("\n-------------------------------------------");
	printf("\n\n\n");
	
}


