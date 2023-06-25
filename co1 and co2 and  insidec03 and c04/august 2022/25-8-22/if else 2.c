/* display the given 3 numbers in ascending order*/
#include<stdio.h>
int main()
{
  int a,b,c;
  
  printf("Enter the 3 numbers");
  scanf("%d%d%d",&a,&b,&c);
  
  if((a>b)&&(a>c))
  {
    if (b>c)
    {
      printf("%d %d %d ",c,b,a);
    }
    else
    {
      printf("%d %d %d ",b,c,a);
    }
  }
  else if (b>c)
  {
    if(a>c)
    {
      printf(" %d %d %d ",c,a,b);
    }
    else
    {
      printf("%d %d %d",a,c,b);
    }
  }
  else 
  {
    if(a>b)
    {
      printf("%d %d %d",b,a,c);
    }
    else
    {
      printf("%d %d %d",a,b,c);
    }
  }
}




/*{
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	
	if((a>b)&&(a>c)&&(b>c))
	{
		//if(b>c)
		printf("a>b>c");
	}
	else if((b>c)&&(b>a)&&(a>c))
	{
		//if(a>c)
		printf("b>a>c");
	}
	else if((a>c)&&(a>c)&&(c>b))
	{
		//if(a>c)
		printf("a>c>b");
    }
    else if((c>a)&&(c>b)&&(a>b))
	{
		//if(a>c)
		printf("c>a>b");
    }
	else
	{
		//if(b>a)
		printf("c>b>a");
	}
}*/
