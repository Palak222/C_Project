#include<stdio.h>
#include "quicksort.h"
#include<stdlib.h>
#include<time.h>

typedef struct{

	int num, denom;

}fraction;

int compareNum(void *p1, void *p2)
{
        int *a = (int*)p1;
        int *b = (int*)p2;

        if((a) > (b))
                return 1;
        else if((a) < (b))
                return -1;
        else
                return 0;
}

int compareFrac(void *a ,void *b)
{
	
 	fraction *f1 = (fraction*)a;
        fraction *f2 = (fraction*)b;

	if((f1 -> num / f1 -> denom) > (f2 -> num / f2 -> denom))

		return 1;

	else if((f1 -> num / f1 -> denom) < (f2 -> num / f2 -> denom))

                return -1;

	else

		return 0;
}

int main(void)
{

	fraction p[5] = { {1, 8}, {64, 4}, {16, 8}, {5, 6}, {31, 32} };
	fraction **array = malloc(5 * sizeof(fraction *));

	for(int i = 0; i < 5; i++)
	{
		array[i] = &p[i];
		arr[i] = &a[i];
	}
	
	QuickSort((void**)array, 0 , 4, compareFrac);
	QuickSort((void**)arr, 0, 4, compareNum);

	for (int i = 0; i < 5; i++)
	{
		printf("(%d, %d)  ", array[i]->num, array[i]->denom);
	}

	return 0;
}