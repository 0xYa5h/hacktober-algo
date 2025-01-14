
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;
	
	for (i = 0; i < n-1; i++)
  {
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;
		swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{
  int i;
	int arr[] = {3, 5, 7, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
  selectionSort(arr, n);
  
	printf("Sorted array: \n");
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
