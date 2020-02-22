#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct queue
{
	struct node *front;
	struct node *rear;
};
struct queue *q;
int create_queue(struct queue *);
struct queue *insert(struct queue *,int);
struct queue *delete_element(struct queue *);
int peek(struct queue *);
struct queue *display(struct queue *);

int main()
{
	int c,val;
	create_queue(q);
	do
	{
	printf("\n***MENU***\n1-Insert\n2-Delete\n3-Dispaly\n4-Peek\n5-Exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("Enter the number to insert");
			   scanf("%d",&val);
		 	   q=insert(q,val);
		       break;
				
		case 2: q=delete_element(q);
				if(val!=-1)
				{
					printf("The element deleted is %d\n",val);
				}
				break;
		case 3: q=display(q);
				break;
		case 4: val=peek(q);
				if(val!=-1)
				printf("Value of element at the top of queue is %d\n",val);
				break;
	}
	}while(c!=5);
return 0;
}
//Creating a linked Queue
int create_queue(struct queue *q)
{
	q->rear=NULL;
	q->front=NULL;
	return 0;
}
//Inserting an element in a  linked Queue//
struct queue *insert(struct queue *q,int val)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=val;
	if(q->front==NULL)
	{
		q->front=ptr;
		q->rear=ptr;
		q->front->next=q->rear->next=NULL;		
	}
	else
	{
		q->rear->next=ptr;
		q->rear=ptr;
		q->rear->next=NULL;
	}
	return q;
}
//Deleting an element from a Linked Queue
struct queue *delete_element(struct queue *q)
{
	struct node *ptr;
	ptr=q->front;
	if(ptr==NULL)	
	{
		printf("Queue is empty");
	}
	else
	printf("\n");
	while(ptr!=q->rear)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;		
	}
	return q;
}
//Displaying elements of a Linked Queue
struct queue *display(struct queue *q)
{
	struct node *ptr;
	ptr=q->front;
	if(ptr==NULL)
	{
		printf("Empty Queue");	
	}	
	else
	{
		q->front=q->front->next;
		printf("Value deleted is %d",ptr->data);
		free(ptr);
	}
	return q;
}
//Element at top of Queue
int peek(struct queue *q)
{
	struct node *ptr;
	ptr=q->front;
	if(ptr==NULL)
	{
		printf("Empty Queue");	
	return -1;
	}
	else	
	{
		printf("Value at top of Queue is %d",ptr->data);
		return 0;
	}
}

