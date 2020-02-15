#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 10
void insertion_sort_asc(int a[], int n);
void insertion_sort_desc(int a[], int n);
void main()
{
    int n, i,order;
    int a[size];
    //size of array 
    printf("Enter the number of elements :");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        printf("\n a[%d]=", i);
        scanf("%d", &a[i]);
    }
    //Taking input order of sort
    printf("Enter 1 to sort in ascending order and 2 to sort in descending order: ");
    scanf("%d", &order);
    //Function call as per user requirement of order
    if(order==1)
    {
        insertion_sort_asc(a, n);
    }
    else if(order == 2)
    {
        insertion_sort_desc(a, n);
    }
    else
    {
        printf("Invalid input");
        exit(0);
    }
    printf("Sorted array:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

//To sort in Ascending order
void insertion_sort_asc(int a[],int n)
{
    int temp,i,j;
    for ( i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp<a[j]&&j>=0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
//To sort in Descending order
void insertion_sort_desc(int a[], int n)
{
    int temp, i, j;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp > a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}