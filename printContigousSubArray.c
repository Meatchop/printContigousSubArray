#include <stdio.h>

#include <stdlib.h>
#include "header.h"

void printContigousSubArray(int arr[], int lastIndex){
	int i;
	int y = calcContigousSubArray(arr, lastIndex);
	printf("{");
	for (i = 0; i <= lastIndex; i++) {
		if (i < lastIndex)
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[lastIndex]);
	}
	printf("}:%d\n", y);
}