#pragma once
#include "main.h"

class scheduler
{
private:

	void main_loop(long int counter, depth_gauge depth_gauge_pointer);

public:

	scheduler(depth_gauge &depth_gauge_pointer);
	void start_scheduler(long int counter, depth_gauge &depth_gauge_pointer);

};

