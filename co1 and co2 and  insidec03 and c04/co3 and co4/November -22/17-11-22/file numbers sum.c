/* write a c program to read 2 numbers from a file and find their sum*/
#include<stdio.h>
int main()
/*for just using the number from file and add it in the current 
{
	FILE *fpr;
	int n1,n2;
	fpr=fopen("d:/sum.txt","r");
	fscanf(fpr,"%d %d",&n1,&n2);
	printf("\n sum=%d",n1+n2);
}
*/
//for storing the result in file
{
	FILE *fpr;
	int n1,n2,s;
	fpr=fopen("d:/sum.txt","r");
	fscanf(fpr,"%d %d",&n1,&n2);
	s=n1+n2;
	printf("\n sum=%d",s);
	fprintf(fpr,"%d",s);
	fclose(fpr);
}
















