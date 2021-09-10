#include<stdio.h>
#include<stdlib.h>
#include "search.h"

typedef struct{

	int num, denom;

}fraction;

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
	
	int result = binarysearch(array, sizeof(fraction), 5, &ele, compareFrac);

	printf("%d ", result);

        return 0;
}


