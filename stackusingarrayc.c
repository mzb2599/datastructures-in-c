#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 100
int st[max],i,top=-1;
void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int val,option;
int main()
{
	do
	{
	printf("\nEnter your choice\n");
	printf("1-PUSH\n2-POP\n3-PEEK\n4-DISPLAY\n5-EXIT\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:printf("\nEnter the value to be pushed");
			   scanf("%d",&val);
			   push(st,val);
			   break;
		
		case 2:val=pop(st);
			   if(val!=-1)
			   printf("The element deleted from the stack is %d",val);
			   else
			   printf("stack is empty");
			   break;

		case 3:val=peek(st);
				if(val!=-1)
				{
				 printf("The value stored at the top of the stack is %d",val);
				}
				break;
		
		case 4:display(st);
			   break;
	}
	}while(option!=5);		
	return 0;
}
void push(int st[],int val)
{
	if(top==max-1)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		st[top]=val;
	}
}
int pop(int st[])
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		val=st[top];
		top--;
		return val;
	}
}
int peek(int st[])
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		return st[top];
	}
}
void display(int st[])
{
	if(top==-1)
	printf("stack is empty");
	else
	{
		for(i=top;i>=0;i--)
		printf("\n%d",st[i]);
		printf("\n");
	}
}

