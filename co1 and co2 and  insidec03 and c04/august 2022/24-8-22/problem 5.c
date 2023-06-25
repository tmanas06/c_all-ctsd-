//problem 5
/* SaiRaj got a job offer in Kashmir and he is estimating the climate there when packing his luggage. Based 
on the climate he needs to pack the specific clothing accordingly for the conditions given below. Read 
temperature in centigrade and display a suitable message according to temperature state below:
• Temp < 0 then Freezing weather
• Temp 0-10 then Very Cold weather
• Temp 10-20 then Cold weather
• Temp 20-30 then Normal in Temp
• Temp 30-40 then Its Hot
• Temp >=40 then Its Very Hot
Help him to identify the climatic conditions. Now your task is to read the temperature and give him the  
climatic conditions */
#include<stdio.h>
void calctemp(int t);
int main()
{
	int t;
	printf("Enter the temperature:");
	scanf("%d",&t);
	
	calctemp(t);
}
void calctemp(int t)
{
	
	if(t<=0)
	{
		printf("Freezing weather");
	}
	else if(t<=10)
	{
		printf("Very cold weather");
	}
	else if(t<=20)
	{
		printf("Cold weather");
	}
	else if(t<=30)
	{
		printf("Normal weather");
	}
	else if(t<=40)
	{
		printf("Hot weather");
	}
	else
	{
		printf("Very hot weather");
	}
	
}
