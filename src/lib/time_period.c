#include "time_period.h"

TimePeriod new_time_period(TimeInfo begin, TimeInfo end) {
    TimePeriod period;

    period.begin = begin;
    period.end = end;
    period.total_minutes = end.total_minutes - begin.total_minutes;
    period.total_hours = period.total_minutes / 60;
    period.status = EXIT_SUCCESS;

    return period;
}

