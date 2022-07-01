#ifndef TIME_INFO_DOT_H /* This is an "include guard" */
    #define TIME_INFO_DOT_H /* prevents the file from being included twice. */
                        /* Including a header file twice causes all kinds */
                        /* of interesting problems.*/
    #include <stdio.h>
    #include <time.h>
    #include <stdint.h>
    #include <stdlib.h>
    #include "string.h"
    #include "timelord.h"

    typedef struct TimeInfo {
        char *raw_info;
        int hours;
        int minutes;
        int seconds;
        float total_hours;
        float total_minutes;
        int status;
    } TimeInfo;

    TimeInfo new_time_info(char *time);
#endif /* TIME_INFO_DOT_H */
