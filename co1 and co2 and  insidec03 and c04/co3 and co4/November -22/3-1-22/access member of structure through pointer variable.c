#include<stdio.h>
struct sample
void display(struct sample *p);
{
	int x;
	float y;
	char z;
};
int main()
{
	struct sample s1,*p;
	s1.x=10;
	s1.y=3.14;
	s1.z='A';
	display(&s1);
}
void display(struct sample *p)
{
	printf("\n%d",p->x);
	printf("\n%d",p->y);
	printf("\n%d",p->z);
}
