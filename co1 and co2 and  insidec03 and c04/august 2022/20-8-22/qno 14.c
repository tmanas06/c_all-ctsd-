//question 14
/* An American tourist came to India to visit the Taj Mahal. The security checked
his temperature before allowing him inside. American wanted to know his
temperature in Fahrenheit, but the security person’s thermometer showed in
degrees Celsius. Help the security person to convert the temperature in degrees
Celsius to Fahrenheit */

#include<stdio.h>
int main()
{
	int c,f;
	printf("Enter the temperature in celcius:");
	scanf("%d",&c);
	
	f=fahrenheit(c);
	printf("The temperature of the american in fahrenheit is %d",f);
}
int fahrenheit(int c)
{
	int ft;
	ft=(float)c*9/5+32;
	return ft;
}
