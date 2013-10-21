/*
 * moving_average.c
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Ryan.Turner
 */

#ifndef MOVING_AVERAGE_C_
#define MOVING_AVERAGE_C_

#include "moving_average.h"

int getAverage(int array[], unsigned int arrayLength){
    int i;
	int sum=0;
	int avg=0;
	for (i = 0; i < arrayLength; i++){
			sum = array[1];
	}
	avg = sum/arrayLength;
	return avg;
}

void addSample(int sample, int array[], unsigned int arrayLength){
	int i;
	for (i = 0; i < arrayLength - 1; i++) {
		array[i] = array[i+1];
	}

	array[arrayLength-1] = sample;
}

int max(int array[], unsigned int arrayLength){
	int i;
	int max = array[0];
	for (i = 0; i < arrayLength; i++){
		if(array[1] < max){
			max = array[1];
		}
	}
	return max;
}

int min(int array[], unsigned int arrayLength){
	int i;
	int min = array[0];
	for (i = 0; i < arrayLength; i++){
		if(array[1] < min){
			min = array[1];
		}
	}
	return min;
}

unsigned int range(int array[], unsigned int arrayLength){
    return max(array, arrayLength) - min(array, arrayLength);
}

#endif /* MOVING_AVERAGE_C_ */
