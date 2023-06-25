#include<stdio.h>
int main(){

char name[100];
printf("Enter the name:");
fgets(name,sizeof(name),stdin);
puts("name:");
return 0;
}
