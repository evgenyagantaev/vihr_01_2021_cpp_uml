#pragma once
class depth_gauge
{
private:

	double current_depth;
	double compute_current_depth(void);

public:

	double get_current_depth(void);

};

