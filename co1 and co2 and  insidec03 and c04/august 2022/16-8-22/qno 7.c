//Problem 7
/*A painter wants to paint the outer surface of an oil rectangular can. The dimensions
of the can are 20cm x 15cm x 12cm(l,b,h). If 5 paisa is charged to paint per square
centimeter, Find the cost of painting in rupees.*/
#include<stdio.h>
int main()
{
	int l,b,h,calc;
	printf("Enter the 3 dimensions:");
	scanf("%d%d%d",&l,&b,&h);
	calc=ar(l,b,h);

}
int ar(int l,int b,int h)
{
	
	float tsa,rs;
	tsa=2*(l*b+b*h+h*l);
	rs=5*tsa/100;
	printf("The cost of painting the can is %.2f Rupees",rs);
}
