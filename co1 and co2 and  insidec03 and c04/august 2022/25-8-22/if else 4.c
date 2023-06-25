/* find the average of best 2 (highest 2) numbers from the given 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,s;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	
	if((a>b)&&(a>c))
  {
    if (b>c)
    {
    	s=(float)(c+b)/2;
        printf("the average of the two best numbers is %d",s);
      //c,b,a
      
    }
    else
    {
    	s=(float)(b+c)/2;
        printf("the average of the two best numbers is %d",s);  //b,c,a
    }
  }
  else if (b>c)
  {
    if(a>c)
    {
    	s=(float)(c+a)/2;
    	printf("the average of the two best numbers is %d",s);//c,a,b
    }
    else
    {
	   s=(float)(a+c)/2;
	   printf("the average of the two best numbers is %d",s);//a,c,b
    }
  }
  else 
  {
    if(a>b)
    {
	   s=(float)(b+a)/2;
	   printf("the average of the two best numbers is %d",s);//b,a,c
    }
    else
    {
       s=(float)(a+b)/2;
	   printf("the average of the two best numbers is %d",s);//a,b,c
    }
  }
}


