/*find sum and average for the array of n given float elements */
#include<stdio.h>
void display(float x[],int n);
float sum_array(float b[],int n);
int main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
    float b[n],s,avg;
    int i;
    printf("Enter float elements in the array:");
    for(i=0;i<n;i++)
    scanf("%f",&b[i]);
	display(b,n); //function call (actual parameters)
	s=sum_array(b,n);
	avg=s/n;
	printf("\n sum is %.2f and average is %.2f",s,avg);
}
void display(float x[],int n)    //formal parameters
{
	int i;
	printf("Array elements are ");
	for(i=0;i<n;i++)
	printf("\n%.2f",x[i]);
}
float sum_array(float b[],int n)
{
	float s=0.0;
	int i;
	for(i=0;i<n;i++)
	s=s+b[i];
	return s;
}
