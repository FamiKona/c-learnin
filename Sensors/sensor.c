#include "sensor.h"
#include <string.h>
#include <stdio.h>
#include "mock_temp_chip.h"

Sensor sensors[NUM_SENSORS];

void sensor_init(void) {
	int i;
	
	/*
	char *ptr;
	ptr = sensors[0].name;
	*ptr = 'S';
	ptr++;
	*ptr = 'U';
	ptr++;
	*ptr = 'C';
	ptr++;
	*ptr = 'C';
	ptr++;
	*ptr = 0;
	*/



	temp_chip_init();

	for (i = 0; i < NUM_SENSORS; i++)
	{
		sensors[i].type = TEMP;
		//strcpy(sensors[i].name, "SUCC");
		sprintf(sensors[i].name, "SUCC%d", i + 1);
	}
}

void print_sensor(const Sensor *sensor) {
	printf("Name: %s\n", sensor->name);
	printf("Type: %d\n", sensor->type);
	printf("Value: %d\n\n", sensor->filtered_val);
}

void sensors_read_all(void) {
	int i;
	for (i = 0; i < NUM_SENSORS; i++)
	{
		switch (sensors[i].type) {
		case TEMP:
			read_temp_chip(&sensors[i]);
			break;
		case VOLTAGE:
			break;
		}
	}
}