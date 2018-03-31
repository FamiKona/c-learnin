#ifndef SENSOR_H
#define SENSOR_H

#define NUM_SENSORS 4

typedef enum
{
	TEMP, 
	VOLTAGE,
	RATE,
	VOLUME,
	PRESSURE
}SensorType;

typedef struct Sensor {
	int value;
	SensorType type;
	char name[5];
	int filtered_val;
}Sensor;

extern Sensor sensors[];
void sensor_init(void);
void print_sensor(const Sensor *sensor);
void sensors_read_all(void);

#endif // !SENSOR_H
