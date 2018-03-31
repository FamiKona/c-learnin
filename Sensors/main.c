// main.c : Defines the entry point for the console application.
//
#include "sensor.h"
#include <Windows.h>
#include "filter.h"

int main()
{
	int i;
	sensor_init();
	while (1)
	{
		sensors_read_all();
		filter(sensors[0].value, &sensors[0].filtered_val);
		print_sensor(sensors);
		Sleep(50);
	}
    return 0;
}

