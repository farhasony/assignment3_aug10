#include<stdio.h>
#include<stdlib.h>

#define MAX 4
void Input(int *,int);
void Display(int *,int);
void selectionsort(int *,int);
 int main()
{
int arr[MAX];
Input(arr,MAX);
printf("elements before sorting\n");
Display(arr,MAX);
selectionsort(arr,MAX);
printf("elements After sorting\n");
Display(arr,MAX);
}

void selectionsort(int *a,int size)
{
int i,j,temp;
			for(i=0;i<size-1;i++)
			{
						for(j=i+1;j<size;j++)
						{
								if(a[i] > a[j]) // comparing current index element with rest of the indexes elements
											{		
											temp=a[i];
											a[i]=a[j];
											a[j]=temp;
											}		
						}
			}
}


void Display(int *p,int size)
{
int i;
for(i=0;i<size;i++)
		printf("%d ",p[i]); // printing the elements of an array
printf("\n\n");
}
void Input(int *p,int size)
{
int i=0;

for(i=0;i<size;i++)
	scanf("%d",&p[i]); 
}
