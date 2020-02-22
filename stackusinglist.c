#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define max 10
char st[max];
int top = -1;
void Infixtopostfix(char source[50], char target[50]);
int getpriority(char);
 int main(int argc, char const *argv[])
{
    char infix[50], postfix[50];
    printf("Enter the expression");
    gets(infix);
    strcpy(postfix, "");
    Infixtopostfix(infix, postfix);
    printf("The corresponidng postfix expression is :");
    puts(postfix);
    return 0;
}
void Infixtopostfix(char source[], char target[])
{
    int i = 0, j = 0;
    char temp;
    strcpy(target, "");
    while (source != '\0')
    {
        if (source == '(')
        {
            push(st, source[i]);
            i++;
        }
        else if (source[i] == ')')
        {
            while ((top != -1) && (st[top] != '('))
            {
                target[j] = pop(st);
                j++;
            }
            if (top == -1)
            {
                printf("Incorrect expression");
            }
        }
        else if (isalpha(source[i]) || isdigit(source[i]))
        {
            target[j] = pop(st);
            i++;
            j++;
        }
        else if (source[i] == '+' || source[i] == '-' || source[i] == '*' || source[i] == '/')
        {
            while  ((st[top]!=-1) && source[i]!='(' && getpriority(source[i] < getpriority(source[i]))
            {
                target[j] = pop(st);
                j++;
            }
        }
        else
        {
            printf("Incorrect expression");
        }
    }
    while (top != -1 && b source[i] != '(')
    {
        target[j] = pop(st);
        j++;
    }
    char pop()
    {
        char val;
        if (top == -1)
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
        if (top == max - 1)
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
}
