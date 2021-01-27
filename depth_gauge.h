#pragma once

#include "main.h"

class depth_gauge
{
private:

	double current_depth;
	double compute_current_depth(void);

public:

	double get_current_depth(void);
	void scheduled_task(void);

};

