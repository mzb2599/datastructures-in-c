#include <stdio.h>
#include <conio.h>
#define size 10
void quick_sort(int a[], int beg, int end);
int partition(int a[], int beg, int end);
void main()
{
    int i, a[size], n;
    //Input array size
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //Function call
    quick_sort(a, 0, n - 1);
    //Print the sorted array
    printf("Sorted array:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void quick_sort(int a[], int begin, int end)
{
    int loc;
    if (begin < end)
    {
        //Dividing the array into two sub-arrays
        loc = partition(a, begin, end);
        //Recursively sorting the left sub-array
        quick_sort(a, begin, loc - 1);
        //Recursively sorting the right sub-array
        quick_sort(a, loc + 1, end);
    }
}
//Function to divide the array into two sub-arrays
int partition(int a[], int begin, int end)
{
    int left, right, loc, flag, t, i;
    loc = left = begin;
    right = end;
    flag = 0;
    while (flag != 1)
    {
        while ((a[loc] <= a[right]) && (loc != right))
            right--;
        if (loc == right)
        {
            flag = 1;
        }
        else if (a[loc] > a[right])
        {
            t = a[loc];
            a[loc] = a[right];
            a[right] = t;
            loc = right;
        }
        if (flag != 1)
        {
            while ((a[loc] > a[left]) && (loc != left))
                left++;
            if (loc == left)
            {
                flag = 1;
            }
            else if (a[loc] < a[left])
            {
                t = a[loc];
                a[loc] = a[left];
                a[left] = t;
                loc = left;
            }
        }
    }
    return loc;
}