#include<stdio.h>
 #include<stdlib.h>
 #define n 4
 int q[n],rear = -1,front = -1;
 void enque(int d)
 {
   if(rear == n-1)
   printf("queue is full");
    
   else if(rear == -1) // insert data into empty q
   {
     rear = front = 0;
     q[rear]= d;   
   }
   else // insert data into non empty q
   {
     rear = rear + 1;
     q[rear]= d;
   }
 }
 int deque()
 {
   int d;
   if(front == -1){
   printf("Queue is empty");}
   else if (front == rear)
   {
     d = q[front];
     front = rear = -1;
     return d;
   }
   else
   {
     d = q[front];
     front = front + 1;
     return d;
    }
 }
 
 void display()
 {
   int i;
   printf("\n queue content is");
   for(i=front;i<=rear;i++)
   {
     printf("\n%d",q[i]);
   }
 }
 int main()
 {
   int d,ch;
 
   do
   {
   printf("\n1.Enque\n2.Deque\n3.display\n4.exit");
   printf("\n enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:
       printf("Enter data to insert");
       scanf("%d",&d);
       enque(d);
       break;
     case 2:
       d = deque();
       printf("\ndeleted data is %d",d);
       break;
     case 3:
       display();
       break;
     case 4:
       printf("\n Bye Bye");
       exit(1);
       break;
         
     default:
       printf("\nInvalid choice");
   }
  }
  while(1);
 }
