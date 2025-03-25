#include <stdio.h>

#include <math.h>
#include "header.h"

int main() 
{
	
	int arr[]={1,2,3,4};
	int lastIndex=sizeof(arr)/sizeof(arr[0])-1;
	printContigousSubArray(arr, lastIndex);

	
	int arr2[]={7,5,1,2,3,4,5};
	int lastIndex2=sizeof(arr2)/sizeof(arr2[0])-1;
	printContigousSubArray(arr2, lastIndex2);
	
	printf("pres key to exit:");
	getchar();
	return(0);
}