#include <stdio.h>

#include "header.h"
int subarrays(int len) {
	int y = 0;
	int x=len;
	if (len >=3){
			y=(x*x-x)/2;
	}
	return y;
}