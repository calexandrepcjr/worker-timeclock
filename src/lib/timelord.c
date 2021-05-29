#include "timelord.h"

char* current_date() {
    time_t current_time = time(NULL);

    if (current_time != (time_t)(-1)) {
        static int expected_size = 12;
        struct tm tm = *localtime(&current_time);
        char *current_date = (char*)malloc(expected_size * sizeof(char));
        
        snprintf(current_date, expected_size, "%04d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

        return current_date;
    }

    return "0000-00-00";
}

char* current_hours() {
    time_t current_time = time(NULL);

    if (current_time != (time_t)(-1)) {
        static int expected_size = 9;
        struct tm tm = *localtime(&current_time);
        char *current_hours = (char*)malloc(expected_size * sizeof(char));
        
        snprintf(current_hours, expected_size, "%02d:%02d:%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);

        return current_hours;
    }

    return "99:99:99";
}