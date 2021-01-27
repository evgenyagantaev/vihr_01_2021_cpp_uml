#include "scheduler.h"

void scheduler::main_loop(long int counter, depth_gauge depth_gauge_pointer)
{
	long int schedule_counter = counter;
	int do_job = 1;

	while (do_job)
	{
		depth_gauge_pointer.scheduled_task();

		if (counter > 0)
		{
			schedule_counter--;
			if (schedule_counter <= 0)
				do_job = 0;
		}
	}
}

scheduler::scheduler(depth_gauge &depth_gauge_pointer)
{

}

void scheduler::start_scheduler(long int counter, depth_gauge &depth_gauge_pointer)
{
	main_loop(counter, depth_gauge_pointer);
}
