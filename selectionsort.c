#include<stdio.h>
int smallest(int arr[],int k,int n)
{
	int pos=k;
	int small=arr[k];
	int i;
}
for(i=k+1;i<n;i++)
{
	if(arr[i]<small){
		small=arr[i];
		pos=i;
	}
	return pos;
}
int selection_sort(int arr[],int n)
{
	int temp,k,pos;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;		
	}
}
void main()
