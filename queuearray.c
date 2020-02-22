#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
//TO INSERT AN ELEMENT IN A QUEUE//
void insert()
{
	int num;
	printf("Enter the number to insert : ");
	scanf("%d",&num);
    if(rear==MAX-1)//QUEUE IS FULL//
	printf("Queue Overflow");
	else if((rear==-1) && (front==-1))//
	{
	 front=rear=0;
	 queue[rear]=num;
	}
	else {
	rear++;
	queue[rear]=num;
	}
}
int delete()
{
	int num;
	if(front==-1 || front>rear)
	{
		printf("Queue Underflow");
		return -1;
	}
	else
	{
		num=queue[front++];
	if(front>rear)
	{
		front=-1;
		rear=-1;
	}
	return num;
	}
}
void display()
{
	int i;
	if((front==-1) || (front>rear))
	printf("Queue Underflow");
	else
	{
		for(i=front;i<=rear;i++)
		{
		printf("%d\n",queue[i]);
	}
	}
}
int peek()
{
	if(front==-1 || front>rear)
	printf("Queue empty");
	else
	{
		return(queue[front]);
	}
}
void main()
{
	int c,val;
		do
	{
	printf("\n***MENU***\n1-Insert\n2-Delete\n3-Dispaly\n4-Peek\n5-Exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:insert();
				break;
				
		case 2:val=delete();
				if(val!=-1)
				{
					printf("The element deleted is %d\n",val);
				}
				break;
		case 3:display();
				break;
		case 4:val=peek();
				if(val!=-1)
				printf("Value of element at the top of queue is %d\n",val);
				break;
	}
	}while(c!=5);
}
/*Output

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
1
Enter the number to insert : 5

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
1
Enter the number to insert : 1

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
1
Enter the number to insert : 7

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
2
The element deleted is 5

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
3
1
7

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
4
Value of element at the top of queue is 1

***MENU***
1-Insert
2-Delete
3-Dispaly
4-Peek
5-Exit
5
*/
