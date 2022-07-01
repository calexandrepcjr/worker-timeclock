#include "time_info.h"

TimeInfo new_time_info(char *time) {
    TimeInfo time_info;
    int time_length = str_length_humanized(time);
    char *buffer = create_string(3);

    time_info.raw_info = create_string(9);
    strcpy(time_info.raw_info, time);

    if (time_length != 8) {
        time_info.status = EXIT_FAILURE;

        return time_info;
    }

    time_info.hours = atoi(substr(buffer, time, 0, 2));
    time_info.minutes = atoi(substr(buffer, time, 3, 2));
    time_info.seconds = atoi(substr(buffer, time, 6, 2));
    time_info.total_minutes = (time_info.hours * 60) + time_info.minutes + (time_info.seconds / 60);
    time_info.total_hours = time_info.total_minutes / 60;
    time_info.status = EXIT_SUCCESS;

    free(buffer);

    return time_info;
}

