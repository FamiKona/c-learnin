#include "mock_temp_chip.h"
#include "sensor.h"
#include <time.h>
#include <stdlib.h>

void temp_chip_init(void) {
	srand(time(0));
}

void read_temp_chip(Sensor *sensor) {
	int val;
	val = rand();
	val = (val % 10000) + 95000;
	sensor->value = val;
}