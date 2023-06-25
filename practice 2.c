#include <stdio.h>

int main(){
  int X,Y,K,i;
  printf("Enter teh numa:");
  scanf("%d%d%d",&X,&Y,&K);
  for(i=1;i<=K;i++)
  {
    if(X%2!=0)
    X=X-1;
    X=X/2;
    Y=Y+X;
    K--;
    if(K>0)
    {
    if(Y%2!=0)
    Y=Y-1;
    Y=Y/2;
    X=X+Y;
    K--;
    }
    else
    break;
  }
  printf("%d %d",X,Y);
}
