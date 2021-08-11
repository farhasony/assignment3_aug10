#include<stdio.h>
#include<stdlib.h>

#define MAX 4
void Input(int *,int);
void Display(int *,int);
void insertionsort(int *,int);
 int main()
{
int arr[MAX];
Input(arr,MAX);
printf("elements before sorting\n");
Display(arr,MAX);
insertionsort(arr,MAX);
printf("elements After sorting\n");
Display(arr,MAX);
}
void insertionsort(int *a,int n)
{
int i,j,temp;
				for(i=1;i<n;i++) // Index of unsorted array part.
				{
				temp=a[i];
						for(j=i-1; j>=0 && temp<a[j];j--)
 													// j-1 highest index of sorted array part
 												// if j is valid index and unsorted element is smaller than sorted element
						{
						a[j+1]=a[j];//move the sorted element to next index
				}
				a[j+1]=temp;
				}
}


void Display(int *p,int size)
{
int i;
for(i=0;i<size;i++)
	printf("%d\n",p[i]); // printing the elements of an array
printf("\n\n");
}
void Input(int *p,int size)
{
int i;
for(i=0;i<size;i++)
	scanf("%d",&p[i]); 
}
