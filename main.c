/* Author: C2C Ryan Turner
 * Date: 14 Oct 2013
 * Description: Implements a subset of the pong game
 */

#include <msp430.h> 
#include "moving_average.h"

#define N_AVG_SAMPLES 2

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    int array[N_AVG_SAMPLES] = {0};
    int output = 0;
	int input[] = {45, 42, 41, 40, 43, 45, 46, 47, 49, 45};

	while (output < sizeof(input) / sizeof(int))
	{
	     addSample(input[output], array, N_AVG_SAMPLES);
	     printf("%d\n", getAverage(array, N_AVG_SAMPLES));
	     output++;
	     sleep(1);
	}

    return 0;
}
