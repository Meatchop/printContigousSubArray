#include <stdio.h>
#include "header.h"

#include <math.h>
void printDepartureTime(int arrivalTime,float kmDistance, float speed) {
	int depatureTime = calculateDepartureTime(arrivalTime, kmDistance, speed);
	int hourDepatureTime = floor(depatureTime/60);
	int minuteDepatureTime = depatureTime % 60;
	char ampm[] = "am";
	if (hourDepatureTime > 12) {
		ampm[0]='p';
		ampm[1]='m';
		hourDepatureTime%=12;
	};
	printf("%02d:%02d%s\n",hourDepatureTime, minuteDepatureTime, ampm);
}

