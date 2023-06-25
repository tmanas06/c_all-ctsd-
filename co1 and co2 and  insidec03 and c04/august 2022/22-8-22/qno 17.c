//question 17
/*A University has 4,000 students. These students are divided in four
categories: (i) B. Tech (ii) M. Tech (iii)M.S. (iv) Ph.D. 3100 students
joined in B. Tech, 350 students in M. Tech and 150 students in M.S.
Find the number of students enrolled in PhD and find the
percentage of the students in each category */
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
