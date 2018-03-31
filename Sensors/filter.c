#include "filter.h"
#include <string.h>

int i;
int vals[WINDOW_SIZE];
int sum;

void filter(int raw, int *dest) {
	//int j;
	int temp_total = 0;
	if (i == WINDOW_SIZE) {
		i = 0;
	}
	/*for (j = 0; j < WINDOW_SIZE; j++)
	{
		temp_total += vals[j];
	}
	avg = temp_total / WINDOW_SIZE;*/
	sum -= vals[i];
	vals[i] = raw;
	sum += raw;
	i++;
	*dest = sum / WINDOW_SIZE;
}