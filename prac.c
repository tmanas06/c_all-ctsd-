
/*Linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node* link;
};
struct node* start=NULL;

void traverse()
{
    struct node* temp;
    if(start==NULL)
    printf("Empty list");
    else
    {
    	temp=start;
    	while(temp!=NULL)
    	{
    		printf("The data is %d",temp->info);
	}
}
    		temp=temp->link;
		}

void insertatfront()
{
	int data;
	struct node* temp;
	temp=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&data);
	temp->info=data;
	temp->link=start;
	start=temp;
}

void insertatend()
{
	int data;
	struct node *temp,*head;
	temp=malloc(sizeof(struct node));
    printf("Enter the data:");
	scanf("%d",&data);
	temp->link=0;
	temp->info=data;
	head=start;
	while(head->link!=NULL){
		head=head->link;
	}
	head->link=temp;	
}

void insertatposition()
{
	int pos,i=1,data;
	struct node *temp,*newnode;
	newnode=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&data);
	temp=start;
	newnode->info=data;
	newnode->link=0;
	while(i<pos-1)
	{
		temp=temp->link;
		i++;
	}
	newnode->link=temp->link;
	temp->link=newnode;
}

void deleteatfront()
{
	struct node* temp;
	if(start==NULL)
	printf("Empty list");
	else
	{
		temp=start;
		start=start->link;
		free(temp);
	}
}

void deleteatend()
{
	struct node *temp,*prenode;
	if(start==NULL)
	printf("Empty list");
	else
	{
		temp=start;
		while(temp->link!=0)
		{
			prenode=temp;
			temp=temp->link;
		}
		free(temp);
		prenode->link=0;
	}
}

void deleteatposition()
{
	struct node *temp,*position;
	int pos,i=1;
	if(start==NULL)
	printf("Empty list");
	else
	{
		printf("Enter the position:");
		scanf("%d",&pos);
		position=malloc(sizeof(struct node));
		temp=start;
		while(i<pos-1)
		{
			temp=temp->link;
			i++;
		}
		position=temp->link;
		temp->link=position->link;
		free(position);
	}
}

void maximum()
{
	struct node *temp;
	int i;
	if(start==NULL)
	printf("Empty list");
	else
	{
		temp=start;
		int max=temp->info;
		while(temp!=NULL)
		{
			if(max<temp->info)
			max=temp->info;
			temp=temp->link;
		}
		printf("Maximum=%d",max);
	}
}

void average()
{
	struct node *temp;
	int i;
	if(start==NULL)
	printf("Empty list");
	else
	{
		temp=start;
		int sum=0,count=0;
		float m;
		while(temp!=NULL)
		{
			sum=sum+temp->info;
			temp=temp->link;
			count++;
		}
		m=sum/count;
		printf("Average=%f",m);
	}
}

void sort()
{
	struct node *current=start;
	struct node *index=NULL;
	int temp;
	if(start==NULL)
	return;
	else
	{
		while(current!=NULL)
		{
			index=current->link;
			while(index!=NULL)
			{
				if(current->info>index->info)
				{
					temp=current->info;
					current->info=index->info;
					index->info=temp;
				}
				index=index->link;
				current=current->link;
			}
		}
	}
}

void reversel()
{
	struct node *temp,*t1,*t2;
	t1=t2=NULL;
    if(start==NULL)
	printf("Empty list");
	else
	{
		while(start!=NULL)
		{
			t2=start->link;
			start->link=t1;
			t1=start;
			start=t2;
		}
		start=t1;
		temp=start;
		while(temp!=NULL)
		{
			printf("Reverse list is %d",temp->info);
			temp=temp->link;
		}
	}	
}

int main()
{
	int ch;
	while(1){
	printf("1 is display ,2 is insert front,3 is insert end, 4 is insrt at any position");
	printf("\n5 is delete front,6 is delete end, 7 is delete any position");
	printf("\n8 is maximum,9 is average,10 is sort,11 is reversal");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			traverse()
			break;
		case 2:
			insertatfront()
			break;
		case 3:
			insertatend()
			break;
		case 4:
			insertatposition()
			break;
		case 5:
			deleteatfront()
			break;
		case 6:
			deleteatend()
			break;
		case 7:
			deleteatposition()
			break;
		case 8:
			maximum()
			break;
		case 9:
			average()
			break;
		case 10:
			sort()
			break;
		case 11:
			reversel()
			break
		case 12:
			exit(1);
			break;
		default:
			printf("Invalid option");
	    }
	    return 0;
	}
}
*/ ///////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* stacks

#include<stdio.h>
#include<stdlib.h>
#define n 4
int s[n];
int top=-1;

void push(int d)
{
	if(top==n-1)
	printf("Stack is full");
	else
	{
		s[top+=1]=d;
	}
}


int pop()
{
	int d;
	if(top==-1){
		printf("Empty stack");
		return -1;
	}
	else
	{
		d=s[top];
		top=top-1;	
		return d;
	}
}


int peep()
{
	if(top==-1){
	printf("Empty stack");
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
	printf("The stack contained is:");
	for(i=top;i>=0;i--)
	{
		printf("\n%d",s[i]);
	}
}

int main()
{
	int d,ch;
	do{
		printf("1.push , 2.pop, 3.peep, 4.display, 5.exit");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data to push:")
				scanf("%d",&d);
				push(d);
				break;
			case 2:
				pop();
				printf("the popped data is %d",d);
			    break;
			case 3:
				d=peep();
				printf("%d is the top most data of the stack",d);
				break;
			case 4:
				display();
				break;
			case 5:
				printf("BYE BYE");
				exit(1);
			default:
				printf("Invaid choice");
		}
	}
	while(1);
}
*/ ///////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*Queues

#include<stdio.h>
#include<stdlib.h>
#define n 4
int q[n],front=-1,rear=-1;
void enqueue(int d)
{
	if(rear==n-1)
	printf("Queue is full");
	else if(rear=-1)
	{
		rear=front=0;
		q[rear]=d;
	}
	else
	{
		q[rear+=1]=d;
	}
}
int dequeue()
{
	int d;
	if(front==-1)
	printf("Empty queue");
	else if(front=rear)
	{
		d=q[front];
		front=rear=1;
        return d;
	}
	else
	{
		d=q[front];
		front+=1;
		return d;
	}
}
void display()
{
	int i;
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
		printf("1.enqueue,2.dequeue,3.display,4.exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the data to insert:");
				scanf("%d",&d);
				enqueue(d);
				break;
			case 2:
				d=dequeue();
				printf("The deleted element is %d",d);
				break;
			case 3:
				display();
				break;
			case 4:
				printf("BYe ByE");
				exit(1);
				break;
			default:
				printf("iNVALID OPTION");
		}
	}
	while(1);
}

#include <stdio.h>

int main(void) {
	int i,j,n;
	printf("gduccb");
	scanf("%d",&n);
	
	for(i=1;i>=n;i++)
	{
	    for(j=n;j>i;j++)
	    {
	        printf("#\n");
	    }
	    printf(" ");
	}
	return 0;
}
*/

#include<stdio.h>
void sum(int n);
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	sum(n);
	printf("the answer is %d",sum);
}
void sum(int n)
{
	int s,i;
	for(s=0,i=n;i>0;n=n/2)
	{
		s=s+i;
		return s;
	}
}
