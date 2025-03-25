#include <stdio.h>
#include "header.h"

#include <math.h>
int calculateDepartureTime(int arrivalTime,float kmDistance, float speed) {
	int travelTime = calculateTravelTime(kmDistance, speed);
	int arrivalMinutes = floor(arrivalTime / 100) * 60 + (arrivalTime%100);
	int depatureTime = arrivalMinutes - travelTime;
	return depatureTime;
}
