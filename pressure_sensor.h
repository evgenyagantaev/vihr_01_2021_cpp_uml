#pragma once
class pressure_sensor
{
private:

	double current_pressure;
	double measure_pressure(void);

public:

	double get_current_pressure(void);
};

