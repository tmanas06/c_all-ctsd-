/*stacks*/
#include<stdio.h>
 #include<stdlib.h>
 #define n 4
 int s[n];
 int top = -1;
 void push(int d)
 {
   if(top == n-1)
   printf("Stack is full");
   else
   s[top+=1]=d;     
 }
 int pop()
 {
   int d;
   if(top == -1)
   {
     printf("Stack is empty");
     return -1;
   }
   else
   {
     d = s[top];
     top = top - 1;
     return d;
   }
 }
 int peep()
 {
   
   if(top == -1)
   {
     printf("Stack is empty");
     return -1;
   }
   else
   {
    return s[top];
   }
 }
 void display()
 {
   int i;
   printf("\n stack content is");
   for(i=top;i>=0;i--)
   {
     printf("\n%d",s[i]);
   }
 }
 int main()
 {
   int d,ch;
 
   do
   {
   printf("\n1.push\n2.pop\n3.peep\n4.display\n5.exit");
   printf("\n enter your choice");
   scanf("%d",&ch);
  
   switch(ch)
   {
     case 1:
       printf("Enter data to push");
       scanf("%d",&d);
       push(d);
       break;
     case 2:
       d = pop();
       printf("\npopped data is %d",d);
       break;
     case 3:
       d = peep();
       printf("\ntop most data in the stack is %d",d);
       break;
     case 4:
       display();
       break;
     case 5:
       printf("\n Bye Bye");
       exit(1);
       break;
     default:
       printf("\nInvalid choice");
   }
  }
  while(1);
 }
