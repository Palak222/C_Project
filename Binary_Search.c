#include<stddef.h>

int binarysearch(void *array, size_t elemSize, int length, void *key, int(*compare)(void*, void*))
{
	int low = 0, high = length - 1, currentIndex;

	while(low <= high)
	{
		currentIndex = (high + low)/2;
		void *currentElem = array + (currentIndex * elemSize);

		if(compare(key, currentElem) == 0)
		{
			return currentIndex;
		}
		else if(compare(key, currentElem) < 0)
		{
			high = currentIndex - 1;
		}
		else
		{
			low = currentIndex + 1;
		}
	}

	return -1;
}
