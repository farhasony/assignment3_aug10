#include<stdio.h>
#include<stdlib.h>

#define MAX 4
void Input(int *,int);
void Display(int *,int);
void Quicksort(int *,int,int);
int Partition(int *,int,int);
 int main()
{
int arr[MAX];
Input(arr,MAX);
printf("elements before sorting\n");
Display(arr,MAX);
Quicksort(arr,0,MAX-1);
printf("elements After sorting\n");
Display(arr,MAX);
}
/************************ Quick Sort*******************/

void Quicksort(int *ptr,int low,int high)
{
	int pivotpos;
	if(low < high)
	{
		pivotpos=Partition(ptr,low,high);
		Quicksort(ptr,low,pivotpos-1);  // left array
		Quicksort(ptr,pivotpos+1,high); // right array
	}
}

int Partition(int *ptr,int low,int high)
{
	int l,h,temp,pivotval;
	l=low;
	h=high;
	pivotval=ptr[low];
	while(l<h)
	{	// aim l to identify the value which is greater than pivotval
		while(l<=high && ptr[l]<=pivotval) 
			l++;
		// aim of h is to identify the value which is smaller than pivot val
		while(h>=low && ptr[h] > pivotval)
			h--;
		if(l<h)  // if l is lessthan h swap between the values in l index and h index
		{
			temp=ptr[l];
			ptr[l]=ptr[h];
			ptr[h]=temp;
		}
		else
		{ // else swap between the pivotval and h index value
			ptr[low]=ptr[h];
			ptr[h]=pivotval;
		}
	}
	return h;  // returning the pivot value index to Quick sort function
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
