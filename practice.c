/*#include<stdio.h>
int main()
{
	float r,a;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	a=2*3.14*r;
	printf("The area of circle is %f",a);
}*/




//to find simple interst
/*#include<stdio.h>
int main()
{
	int p,n;
	float si,r;
	printf("Enter the principal amount:");
	scanf("%d",&p);
	printf("Enter the time:");
	scanf("%d",&n);
	printf("Enter the rate of interst:");
	scanf("%f",&r);
	si=p*r*n/100;
	printf("The simple interest is %f",si);
	
}*/

//to find the cost of the given area of cuboid
/*#include<stdio.h>
int main()
{
	int l=20,b=15,h=12;
	float tsa;
	tsa=(5*2*(l*b+b*h+h*l))/100;
	printf("The cost of painting the can is %f Rupees",tsa);
	
}*/

/*
#include<stdio.h>
int main()
{
	int A,B,S;
	printf("Enter A:");
	scanf("%d",&A);
	printf("Enter B:");
	scanf("%d",&B);
	S=A+B;
	printf("%d",S);
}
*/
 
/*
#include<stdio.h>
int main()       //calling function
{
	int a,b,s;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	s=sum(a,b);           //actual parameter,function call
	printf("sum=%d",s);
}
int sum(int x, int y) //called function,function prototype
{
	int z;
	z=x+y;
	return z;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    
	printf("Hello, World! \nWelcome to C programming.");
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //return 0;
//}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	//char ch,s,sen;
	char ch[300];
	scanf("%[^\n]%*c",&ch);
	char s[100];
	scanf("%[^\n]%*c",&s);
	char sen[100];
	scanf("%[^\n]%*c",&sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //return 0;
//}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    int s,sen;
    printf("\nLanguage");
    scanf("%d",s);
    printf("\nWelcome To C!!");
    scanf("%d",sen);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //return 0;
//}

/*
#include<stdio.h>
void calcphdpercentage(int t, int bt, int mt, int mst);

int main()
{
  int t,bt,mt,mst,pt;
  printf("enter the number of students in university");
  scanf("%d",&t);
  printf("enter the number of students in btech");
  scanf("%d",&bt);
  printf("enter the number of students in mtech");
  scanf("%d",&mt);
  printf("enter the number of students in ms");
  scanf("%d",&mst);
  calcphdpercentage(t,bt,mt,mst);
}

void calcphdpercentage(int t, int bt, int mt, int mst)
{
  int pt;
  float btp,mtp,mstp,ptp;
  pt=t-(bt+mt+mst);
  printf("%d is the number of students in phd",pt);

  btp=((bt*100)/t);
  printf("\n %.2f is the percentage of btech students",btp);
  mtp=((mt*100)/t);
  printf("\n %.2f is the percentage of mtech students",mtp);
  mstp=((mst*100)/t);
  printf("\n %.2f is the percentage of ms students",mstp);
  ptp=((pt*100)/t);
  printf("\n %.2f is the percentage of phd students",ptp);
  
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[100] ;
    
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c", s);
   printf("%s",s);
    return 0;
    
}
*/
/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int angle;
    float x,rad,dis;
    printf("Enter the angle: ");
    scanf("%d",&angle);
    rad=angle*(3.14/180);
    x=tan(rad);
    printf("value is %.2f",x);
    
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int p=145,g=10;
	float h,m=12.786,k;
    k=m*0.454;
    h=p/(k*g);
    printf("The height is %f",h);
}*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2,c;
	float ab,d,dt;
	printf("Enter the co-ords of building A:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the co-ords of building B:");
	scanf("%d%d",&x2,&y2);
	printf("Enter the distance between B and C:");
	scanf("%d",&c);
	ab=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	d=pow(ab,0.5);
	dt=d+c;
	printf("The length of path from A to C is %f",dt);
}
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	
	{
	   printf("\n the number is even");    
		if(n/4)
		{
			printf("\n The number is divisible by 4");
			
	    }
		else
		{
		
			printf("\nThe number is not divisible by 4");
		}
	}
	else 
	{
	    printf("The number is odd");
		if(n/3)
		{
			
			printf("\nThe number is divisible by 3");
		}
		else
		{
			printf("\nThe number is not divisible by 3");
		}
	}
}*/
/*
 #include<stdio.h>
 int main()
 {
 	int w,f,i,h;
 	float BMI;
 	printf("Enter your weight in ponds:");
 	scanf("%d",&w);
 	printf("Enter your height in feet and inches:");
 	scanf("%d%d",&f,&i);
 	h=f*12+i;
 	BMI=w*703/h*h;
 	printf("%f",BMI);

	if(BMI>30)
	{
		printf("%d is obesity",BMI);
	}
	else if(BMI>0)
	{
		printf("%d is over weight",BMI);
	}
	else if(BMI>25)
	{
		printf("%d is normal weight",BMI);
	}
	else 
	{
		printf("%d is under weight",BMI);
	}
}*/
/*
#include<stdio.h>
int main()
{
	int x,calc;
	printf("Enter total cost:");
	scanf("%d",&x);
	calc=find(x);
}
int find(int x)
{
	if(x<=100)
	printf("No discount");
	else if(x<=1000)
	printf("25 rupee discount");
	else if(x<=5000)
	printf("100 rupee discount");
	else
    printf("500 rupee discount");
}*/
/*
#include<stdio.h>
int main()
{
	int x,y,c;
	printf("Enter number of students:");
	scanf("%d",&x);
	printf("Enter number of chairs:");
	scanf("%d",&y);
	if(x>y)
	{
		c=x-y;
		printf("The number of chairs chef must buy is %d",c);
	}
	else if(x<y)
	printf("There are more than enough chairs");
	else 
	printf(" Chef need not buy any chairs");
}*/
/*
#include<stdio.h>
int main()
{
	int n,c,b,sum;
	printf("Enter:");
	scanf("%d%d%d",&n,&b,&c);
	sum=n+b+c;
	if(n>=0&&b>=0&&c>=0)
	{
		if(sum>=100)
		printf("pass");
		else
		printf("fail");
	}
	else
	{
		printf("fail");
	}
	
}*/
/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d,,%d",a,b);
}*/
/*
#include<stdio.h>
int main()
{
	int p,q;
	printf("Enter:");
	scanf("%d%d",&p,&q);
	if(p==q)
	printf("0");
	else 
	printf("1");
	
}
*/
/*
#include<stdio.h>
int main()
{
	int a=11,c;
	c=a;
	int b=20;
	a=b;
	b=c;
	
	printf("\n%d",a);
	printf("\n%d",b);
}*/
/*
#include <stdio.h>    
int main()    
{        
int a = 10, b = 5, c = 5;        
int d;        
d = b + c == a;        
printf("%d", d);    
}*/
/*
#include<stdio.h> 
int main(){
 char c; 
 int n, m; 
 switch(c)
 {
 	case(c=='t'):
 		n++;
 	default:
 		m += 2;
 }
 
}*/
/*
#include <stdio.h>  
int main(){
int i,j=1;
i=1;
j++;
while(i+j<12)
{
	i-- ;
	j *= 2; 
	i+= j++;
}
printf("%d %d \n", i , j);

}*/
/*
#include<stdio.h>
int main()
{
	int x=10,y=15,a,b;
	a=x++;
	b=++y;
	printf("%d,%d",a,b);
	return 0;
}
*//*
#include<stdio.h>
int main()
{
	int x=5;
	printf("%d,%d,%d",++x,x,x++);
	return 0;
}
#include<stdio.h>
int main()
{
	int i=;
	a=x++;
	b=++y;
	printf("%d,%d",a,b);
	return 0;
}*//*
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of the students:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter marks:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Marks in normal order");
	for(i=0;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
}*/
#include<stdio.h>
int palindrome(int n)
{
  int t,r = 0;
  t=n;
  while(t!=0)
  {
    r=r*10;
    r=r+(t%10);
    t=t/10;
  }
  if(r==n)
    return 1;
  else
    return 0;
}

int main()
{
  int k,d=0,i;
  scanf("%d",&k);
  i = k + 1;
  while(1)
  {
    d=palindrome(i);
    //printf("%d ", i);
    if(d==1)
      break;
    i++;
  }
  printf("%d",i);
  return 0;
}

