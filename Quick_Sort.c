

/* void swap(void* a, void* b)
{
	void* temp = a;
	a = b;
	b = temp;
}


int partition(void** arr, int lo, int hi, int(*compare)(void* , void*))
{

	int leftIndex = lo + 1;
	int rightIndex = hi;

	while (1) 
	{
		while (compare(arr[leftIndex], arr[lo]) == -1) 
		{

			leftIndex++; 			
			if (leftIndex >= hi)				
				break;		
		}

		while (compare(arr[rightIndex], arr[lo]) >= 0) 
		{			
			rightIndex--; 			
			if (rightIndex == lo)				
				break;		
		} 		
		if (leftIndex >= rightIndex)			
			break; 		
		swap(arr[leftIndex], arr[rightIndex]);
	}

	swap(arr[lo], arr[rightIndex]);
	
	return rightIndex;
}


void QuickSort(void** arr, int low, int high,int(*compare)(void* , void*))
{

	if(low >= high)
		return;

	int p = partition(arr, low, high, compare);

	QuickSort(arr, low, p - 1, compare);
	QuickSort(arr, p + 1, high, compare);

} */

#include <stdio.h>

int partition(void **arr, int lo, int hi, int (*compare)(void *, void *)) {
	int leftIndex = lo + 1;	//this is a problem! don't use <= 0 at line 9
	int rightIndex = hi;

	while (1) {
		while (compare(arr[leftIndex], arr[lo]) == -1) {
			leftIndex++;

			if (leftIndex >= hi)
				break;
		}

		while (compare(arr[rightIndex], arr[lo]) >= 0) {
			rightIndex--;

			if (rightIndex == lo)
				break;
		}

		if (leftIndex >= rightIndex)
			break;

		void *temp = arr[leftIndex];
		arr[leftIndex] = arr[rightIndex];
		arr[rightIndex] = temp;
	}

	void *temp = arr[lo];
	arr[lo] = arr[rightIndex];
	arr[rightIndex] = temp;

	return rightIndex;
}

void QuickSort(void **arr, int lo, int hi, int (*compare)(void *, void*)) {
	//termination condition
	if (lo >= hi)
		return;

	//placing pivot element and storing its position
	int p = partition(arr, lo, hi, compare);

	//recursively doing it for the both the halves on
	//either side of the lo element
	QuickSort(arr, lo, p - 1, compare);
	QuickSort(arr, p + 1, hi, compare);
}



