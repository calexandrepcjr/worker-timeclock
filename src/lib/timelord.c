#include "timelord.h"

static struct tm *get_time() {
    time_t current_time = time(NULL);

    if (current_time != (time_t)(-1)) {
        return localtime(&current_time);
    }

    return NULL;
}

char* current_date() {
    struct tm *time = get_time();
    int expected_size = 11;
    char *current_time_structure = create_string(expected_size);

    if (time != NULL) {
        snprintf(
                current_time_structure,
                expected_size,
                "%04d-%02d-%02d",
                time->tm_year + 1900,
                time->tm_mon + 1,
                time->tm_mday
            );

        return current_time_structure;
    }

    return "-1";
}

char* current_hours() {
    struct tm *time = get_time();
    int expected_size = 9;
    char *current_time_structure = create_string(expected_size);

    if (time != NULL) {
        snprintf(
                current_time_structure,
                expected_size,
                "%02d:%02d:%02d",
                time->tm_hour,
                time->tm_min,
                time->tm_sec
        );

        return current_time_structure;
    }

    return "-1";
}

