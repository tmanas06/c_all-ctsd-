/*Given an input positive integer print the output by checking divisibility of a number. Your program should 
return one of the following output.
If your input is divisible only by 2 print "Divisible by 2"
If your input is divisible only by 3 print "Divisible by 3"
If your input is divisible only by 5 print "Divisible by 5"
If your input is divisible only by 6 print "Divisible by 6"
If it does not come under in any of the above cases print Other.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	
	if(a%2==0)
	printf("Divisible by 2");
	else if(a%3==0)
	printf("Divisible by 3");
	else if(a%5==0)
	printf("Divisible by 5");
	else if(a%6==0)
	printf("Divisible by 6");
	else
	printf("Other");
}
