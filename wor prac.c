 #include <stdio.h>    
 int main()   
{     int a = printf("Hello");    printf("%d", a);    return 0;}

/*int main()


{
	int i=-3,j=2,k=0,m;
	m=++i&&++j||++k;
	printf("i=%d,j=%d,k=%d,m=%d\n",i,j,k,m);
	return 0;
}
#include<stdio.h>
int main()
{
	int a=5,b,c;b=++a;
	c=a++;
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
}
#include<stdio.h>
int main()
{
	int i=3,j;j=i++ + ++i;
	printf("%d, %d",i,j);
	return 0;

#include<stdio.h>
int main()
{
	int i=5,K;
	K=++i + --i;
	printf("k=d,i=%d",K,i);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter their bids:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c||b>c)
	printf("Mark wins the auction");
    else if(b>c&&b>a||c>a)
	printf("Bob wins the auction");
    else if(c>a&&c>b||a>b)
    printf("Mark wins the auction");
    else
    printf("unk");
}
#include<stdio.h>
int main()
{
	int a,*p;
	char b,*q;
	float c,*r;
	double d,*s;
	printf("%d<__>%d\n",sizeof(a),sizeof(p));
	printf("%d<__>%d\n",sizeof(b),sizeof(q));
	printf("%d<__>%d\n",sizeof(c),sizeof(r));
	sizeof(s);
	return 0;	
}

{
	int *ptr;
	int x;
	ptr=&x;
	*ptr=0;
	printf("x=%dn",x);printf("*ptr=%dn",*ptr);
	*ptr+=5;
	printf("x=%dn",x);printf("*ptr=%dn",*ptr);
    (*ptr++);
	printf("x=%dn",x);printf("*ptr=%dn",*ptr);
	return 0;
}
{
	int N=4;
	int *ptr1,*ptr2;
	ptr1=&N;
	ptr2=&N;
	printf("Pointer ptr2 before addition:");
	printf("%p\n",ptr2);
	ptr2=ptr2+1;
	printf("Pointer ptr2 after addition:");
	printf("%p\n",ptr2);
	return 0;
}
{
	//char w,k;
	char number='w';
	char character='k';
	int sum;
	sum=number+character;
	printf("Value of sum:%d\n",sum);
}
{
	int i=17;
	char c='c';
	float sum;
	sum=i+c;
	printf("The value of sum:%f\n",sum);
}

{
	float a=1.2;
	int b=(int)a+1;
	printf("The value of sum:%f\n",a);
	printf("The value of sum:%f\n",b);
}
{
	int a=0;
    double d=10.21;
    printf("%lu",sizeof(a+d));
    return 0;
}
{
	typedef int a;
	a b=2,c=8,d;
	d=(b*2)/2+8;
	printf("%d",d);
}
{
	int arr[]={1,2,3,4,7,98,0,12,35,99,14};
	printf("Numebr of Elements:%d",sizeof(arr)/sizeof(arr[0]));
	return 0;
}
{
	float arr[]={12.5,10.0,13.5,90.5,0.5};
	float *ptr1=&arr[0];float *ptr2=ptr1+3; printf("%f",*ptr2);
	printf("%f",ptr2-ptr1);
	return 0;
}*/
/*
void f(){
	int a;
	a=20;
	d();
	printf("%d",a);
}
void d()
{
	int a;
	a=30;
	printf("%d",a);
}
int main(){
	int a;
	a=10;
	printf("%d",a);
	f();
	return 0;
}*/
/*
void main(){
	auto int num;
	num=20;{
	auto int num;
	num=60;
	printf("Num:%d\n",num);
	}
	printf("Num:%d\n",num);
}
*/
/*
void increment(void);
void main(){
	increment();
	increment();
	increment();
	increment();
}
void increment(void)
{
	auto int i=0;
	printf("%d",i);
	i=i+1;
}
void staticDemo(){
	static int i;
	{
	
	static int j;
	printf("%d",j);
	j=j+1;
}
printf("%d\n",i);
i=i+1;
}
int main(){
	staticDemo();
	staticDemo();
}
static int glnt=1;
void staticDemo(){
	static int i;
	printf("%d",i);
	i=i+1;
	printf("%d\n",glnt);
	glnt=glnt+1;
}
int main(){
	staticDemo();
	staticDemo();
}

int fun();
int num=5;
int main(){
	printf("\nglobalnum value=%d\n",num);fun();
	printf("\nglobalnum value=%d\n",num);fun();
	printf("\nglobalnum value=%d\n",num);return 0;
}
int fun(){
static int num=2;
printf("\nglobalnum value=%d\n",num);num=num+1;
return 0;}*/
