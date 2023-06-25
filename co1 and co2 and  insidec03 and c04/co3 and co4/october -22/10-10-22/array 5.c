/*find sum and average of all elements stored in the array */
#include<stdio.h>
int main(){
	int i,n,sum=0,avg=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++){
    scanf("%d",&a[i]);
    }
	for(i=0;i<=n-1;i++){
		sum+=a[i];
		avg=sum/n;
	}
	printf("%d is the sum of the array",sum);
	printf("\n%d is the average of the array",avg);
}
