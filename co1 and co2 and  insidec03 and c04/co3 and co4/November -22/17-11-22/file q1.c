/*write a c program to store student id, student name and fees in a file student.dat*/
#include<stdio.h>
int main()
{
	FILE *fpw;
	int sid;
	char sname[20];
	float fees;
	fpw=fopen("d:/student.dat","w");//using "a" in place of "w" will save the memory and write
	printf("Enter the student id,name ,fees:");
    scanf("%d%s%f",&sid,sname,&fees);
    fprintf(fpw,"%d  %s  %.2f",sid,sname,fees);
    fclose(fpw);
}
