#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#define MAX 50
char st[MAX];
int top = -1;
void Infixtopostfix(char source[], char target[]);
char pop(char st[]);
void push(char st[], char val);
int getpriority(char);
void main()
{
 char infix[50], postfix[50] ;
 printf("Enter the expression");
 gets(infix);
 strcpy(postfix,"");
 Infixtopostfix(infix,postfix);
 printf("The corresponidng postfix expression is :");
 puts(postfix);
}  
void Infixtopostfix(char source[], char target[])
{
int i=0,j=0;
char temp;
strcpy(target,"");
while (source[i]!='\0')
{
 if (source[i]=='(')
 {
  push(st,source[i]);
  i++;
 }
 else if (source[i]==')')
 {
  while ((top!=-1) && (st[top]!='('))
  {
   target[j]=pop(st);
   j++;
  }
  if (top==-1)
  {
    printf("Incorrect expression");
    break;
  }
  temp = pop(st);
  i++;
 }
 else if (isalpha(source[i]) || isdigit(source[i]))
 {
  target[j]=source[i];
  i++;
  j++;
 }
 else if(source[i]=='+'||source[i]=='-'||source[i]=='*'||source[i]=='/')
 {
  while( (top!=-1) && (st[top]!='(') && (getpriority(st[top])>getpriority(source[i])))
  {
   target[j]=pop(st);
   j++;
  }
  push(st,source[i]);
  i++;         
 }
 else
 {
  printf("Incorrect expression");
 }   
}
while (top!=-1 && source[i]!='(')
{
 target[j] = pop(st);   
 j++;
}
}
char pop(char st[])
{
char val=' ';
if (top==-1)
printf("Stack underflow");
else
{
val = st[top];
top--;
}
return val;
}
void push(char st[], char val)
{
    if (top == MAX - 1)
    printf("Stack Overflow");
    else
    {
    top++;
    st[top] = val;
    }
}
int getpriority(char c)
{
if (c == '*' || c == '/' || c == '%')
return 1;
else if (c == '+' || c == '-')
{
return 0;
}
}
/* Output
Enter the expression((a+b)*(c-d))
The corresponidng postfix expression is :ab+cd-*
*/
