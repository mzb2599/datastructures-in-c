#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *start)
{
	int num;
	struct node *newnode,*ptr;
	ptr=start;
	printf("Enter -1 to exit\n");
	printf("Enter the data\n");
	scanf("%d",&num);
	while(num!=-1)
	{
	 newnode = (struct node*)malloc(sizeof(struct node));
	 newnode->data=num;
	 if(start==NULL)
	 {
		newnode -> next = NULL;
		start = newnode;
     }
	 else
	 {
		ptr=start;
		while(ptr->next!=NULL)
		ptr=ptr->next;
	    ptr->next = newnode;
	    newnode->next = NULL;
     }
	 printf("Enter the data");
     scanf("%d",&num);
	}
	return start;
}
int main()
{
	int choice,call;
	printf("Enter 1 to create linked list or any other key to exit");
	scanf("%d",&choice);
	call = create_ll(start);
}
