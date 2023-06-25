 //question 18
/*Aruna went to buy a circular dining table to a showroom. She observed that the radius
of dining table is pasted on it by the shopkeeper. The dining room in Aruna’s house is
a square of side length, 4 meters. Find the maximum radius dining table that will fit in
Aruna’s dining room. (Give your answer in feet, 1 meter = 3.28 feet)*/
#include<stdio.h>
float radius(int l)
{
	float f;
	f=(float)(l/2)*3.28;
	return f;
}
int main()
{
	int l;
	float raadius;
	printf("Enter the length of the room:");
	scanf("%d",&l);
	raadius=radius(l);
	printf("the maximum radius is %.2f",raadius);
}

