#ifndef TIME_PERIOD_DOT_H /* This is an "include guard" */
    #define TIME_PERIOD_DOT_H /* prevents the file from being included twice. */
                        /* Including a header file twice causes all kinds */
                        /* of interesting problems.*/
    #include <stdio.h>
    #include <time.h>
    #include <stdint.h>
    #include <stdlib.h>
    #include "time_info.h"

    typedef struct TimePeriod {
        TimeInfo begin;
        TimeInfo end;
        float total_hours;
        float total_minutes;
        int status;
    } TimePeriod;

    TimePeriod new_time_period(TimeInfo begin, TimeInfo end);
#endif /* TIME_PERIOD_DOT_H */
