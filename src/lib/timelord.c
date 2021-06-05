#include "timelord.h"

static char* get_time(char* format, int expected_size) {
    time_t current_time = time(NULL);

    if (current_time != (time_t)(-1)) {
        struct tm tm = *localtime(&current_time);
        char *current_time_structure = create_string(expected_size);

        switch (expected_size) {
            case 11:
                // It's a year
                snprintf(current_time_structure, expected_size, format, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
            break;

            default:
                snprintf(current_time_structure, expected_size, format, tm.tm_hour, tm.tm_min, tm.tm_sec);
            break;
        }

        return current_time_structure;
    }

    return "-1";
}

char* current_date() {
    return get_time("%04d-%02d-%02d", 11);
}

char* current_hours() {
    return get_time("%02d:%02d:%02d", 9);
}

