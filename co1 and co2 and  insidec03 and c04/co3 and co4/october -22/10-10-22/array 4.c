/* count number of even elemnts and number of odd elements in the given array*/
/*display all elements from even indices(index numbers) */

#include<stdio.h>
int main()
{
  int n;
  printf("Enter number elements in the array");
  scanf("%d",&n);
  int a[n],i,ectr,octr;
  printf("Enter elements");
  for(i=0;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
  }
ectr=0;
octr=0;
for(i=0;i<=n-1;i++)
{
  if(a[i]%2==0)
  ectr+=1;
  else
  octr+=1;
}
printf("Number of even elements = %d",ectr);
printf("\n Number of odd elements = %d",octr);
}
