#include <stdio.h>
#include "header.h"
int calculateTravelTime(float kmDistance, float speed) {
	float travelTime = kmDistance/speed;
	int min = travelTime*60;
	return min;
}