#include "depth_gauge.h"

void depth_gauge::scheduled_task(void)
{
	std::cout << "depth gage task\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
