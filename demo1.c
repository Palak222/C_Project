#include<stdio.h>
#include<stdlib.h>
#include "search.h"

typedef struct{

	int num, denom;

}fraction;

int compareNum(void *p1, void *p2)
{
        int *a = (int*)p1;
        int *b = (int*)p2;

        if((*a) > (*b))
		return 1;
	else if((*a) < (*b))
		return -1;
	else
		return 0;
}

int compareFrac(void *a, void *b)
{
	fraction *f1 = (fraction*)a;
	fraction *f2 = (fraction*)b;

	float f1val = (float)f1 -> num / (float)f1 -> denom;
	float f2val = (float)f2 -> num / (float)f2 -> denom;

	return (f1val - f2val) * 100;

}



int main()
{
	fraction array[5] = { {1, 16}, {1, 8}, {3, 8}, {5, 6}, {31, 32} };
	fraction ele = {6, 16};

        int arr[7] = {10, 30, 50, 46, 60, 78, 90};
	int key = 90;

        int result1 = binarysearch(arr, sizeof(int), 7, &key, compareNum);
	int result2 = binarysearch(array, sizeof(fraction), 5, &ele, compareFrac);

	printf("%d ", result1);
	printf("%d ", result2);

        return 0;
}


