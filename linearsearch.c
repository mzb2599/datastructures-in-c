#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20];
	int n,i,s;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d",&s);
    for(i=0;i<n;i++)
	{
	 if(a[i]==s)
	 {
	 printf("Element %d found at index %d",s,i);	
	 break;
	 }
	}
	if(i==n)
	printf("Element not found");
	return 0;
}

