#include <stdio.h>
#include <conio.h>
#define size 10
int s;
int binary_search(int a[], int begin, int end);
//int partition(int a[], int begin, int end);
void main()
{
    int i, index, a[size], n;
    //Input array size
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d", &s);
    if ((n == 1)&&(a[0]==s))
    {
        printf("Element %d found at index position 0", a[0]);
    }
    else if(n==2)
    {
        if (s==a[0])
        {
            printf("Element %d found at index position 0", a[0]);
        }
        else
        {
            printf("Element %d found at index position 1", a[1]);
        }
    }
    else
    {
        //Function call and storing returned value in a variable
        index = binary_search(a, 0, n - 1);
        printf("The element %d found at index position %d", s, index);
    }
}
//Function to search element recursively
int binary_search(int a[], int begin, int end)
{
    int mid;
    mid = (begin + end) / 2;
    if (a[mid] == s)
    {
        return mid;
    }
    else if (a[mid] < s)
    {
        return binary_search(a, mid + 1, end);
    }
    else if (a[mid] > s)
    {
        return binary_search(a, begin, mid - 1);
    }
    else
    {
        return -1;
    }
}