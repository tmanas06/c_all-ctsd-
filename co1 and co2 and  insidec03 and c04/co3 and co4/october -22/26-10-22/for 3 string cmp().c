//for 3 strings
#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c[100];
	int s1,s2,s3;
	printf("First string:");
	scanf("%s",a);
	printf("Second string:");
	scanf("%s",b);
    printf("third string:");
	scanf("%s",c);
	s1=strcmp(a,b);
	s2=strcmp(b,c);
	s3=strcmp(a,c);
	if((s1<0)&&(s2<0)){
	if(s3<0)
	printf("%s%s%s",s1,s2,s3);
	else
	printf("%s%s%s",s1,s3,s2);}
	else if((s1>0)&&(s2>0)){
	if(s3>0)
	printf("%s%s%s",s2,s1,s3);
	else
	printf("%s%s%s",s2,s3,s1);}
	else{
	if(s2=s1)
	printf("%s%s%s",s3,s2,s1);
	else
	printf("%s%s%s",s3,s1,s2);}	
}














/*
printf("%s%s%s",s1,s2,s3);
	else
	printf("%s%s%s",s1,s3,s2);
	else if((s2>s1)&&(s2>s3))
	if(s1>s3)
	printf("%s%s%s",s2,s1,s3);
	else
	printf("%s%s%s",s2,s3,s1);
	else
	if(s2>s1)
	printf("%s%s%s",s3,s2,s1);
	else
	printf("%s%s%s",s3,s1,s2);
*/
