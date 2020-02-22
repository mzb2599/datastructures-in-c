#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create_ll(struct node *start)
{
    int num;
    struct node *newnode, *ptr;
    printf("Enter -1 to exit\n");
    printf("Enter the data\n");
    scanf("%d", &num);
    while (num != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the number");
        scanf("%d", &num);
        newnode->data = num;
        if (start == NULL)
        {
            newnode->next = NULL;
            newnode->prev = NULL;
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->next = NULL;
        }
        printf("Enter the data");
        scanf("%d", &num);
    }
    return start;
}
struct node *insert_begin(struct node *start)
{
    struct node *ptr, *newnode;
    ptr = start;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    printf("Enter the number");
    scanf("%d", &num);
    newnode->prev = NULL;
    newnode->next = start;
    start->prev = newnode;
    start = newnode;
}
struct node insert_end(struct node *start)
{
    struct node *ptr, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number");
    scanf("%d", &num);
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    newnode->next = NULL;
    return start;
}
struct node insert_before(struct node *start)
{
    int val, num;
    struct node *newnode, *ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    printf("Enter the number");
    scanf("%d", &num);
    newnode->data = num;
    printf("Enter the value after which the node is to be entered");
    scanf("%d", &val);
    while (ptr->data != val)
    {
        ptr = ptr->next
    }
    newnode->next = ptr;
    newnode->prev = ptr->prev;
    ptr->prev->next = newnode;
    ptr->prev = newnode;
    return start;
}
struct node insert_after(struct node *start)
{
    struct node *ptr, *newnode;
    int val, num;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number");
    scanf("%d", &num);
    newnode->data = num;
    printf("Enter the value after which the node is to be entered");
    scanf("%d", &val);
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    newnode->next = NULL;
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        printf("\t%d"; ptr->data);
        ptr = ptr->next;
    }
    return start;
}
int main()
{
    int option;
    do
    {
        printf("\n*****MAIN MENU*****\n");
        printf("1-To create a list\n");
        printf("2-Display list\n");
        printf("3-Add a node in the beginning\n");
        printf("4-Add a node in the end\n");
        printf("5-Add a node before a given node\n");
        printf("6-Add a node after a given node\n");
        printf("7-Delete a node from the beginning\n");
        printf("8-Delete a node from the end\n");
        printf("9-Delete given node\n");
        printf("10-Delete a node after a given node\n");
        printf("11-Delete the entire list\n");
        printf("12-EXIT\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("link list created");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_begin(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = insert_before(start);
            break;
        case 6:
            start = insert_after(start);
            break;
        case 7:
            start = delete_before(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        case 9:
            start = delete_node(start);
            break;
        case 10:
            start = delete_after(start);
            break;
        case 11:
            start = delete_list(start);
            break;
        }
    } while (option != 12);
    return 0;
}
