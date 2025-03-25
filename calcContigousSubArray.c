#include <stdio.h>

#include <stdlib.h>
#include "header.h"
int calcContigousSubArray(int arr[],int lastIndex) {
	int i;
	int len=2;
	int result=0;
	int diff=abs(arr[0]-arr[1]);
	for (i = 2; i <= lastIndex; i++) {
		int currDif=abs(arr[i-1]-arr[i]);
		if (diff==currDif){
			len++;
			if (i==lastIndex) {
				result+=subarrays(len);
			}
		}
		else {
			result+=subarrays(len);
			len=2;
			diff=currDif;
		}
	}
	return result;	
}
