#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
struct node *head = NULL;
void create()
{
  struct node *t,*temp;
  int choice,x;
  do
  {
    t = (struct node *)malloc(sizeof(struct node));
    t->link = NULL;
    printf("Enter data part");
    scanf("%d",&x);
    t->data = x;
    if(head == NULL)
    {
      head = t;
      temp = head;
    }
    else
    {
      temp->link = t;
      temp = temp->link;
    }
    printf("Do you want to continue. Press 0 to stop");
    scanf("%d",&choice);
  }
  while(choice != 0);
}
void display()
{
  struct node *temp;
  temp = head;
  while(temp != NULL)
     {
     printf("%d    ",temp->data);
     temp = temp->link;
  }
}
int main()
{
  create();
  display();
}
