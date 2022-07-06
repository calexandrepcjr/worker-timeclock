#ifndef STRING_DOT_H /* This is an "include guard" */
    #define STRING_DOT_H /* prevents the file from being included twice. */
                        /* Including a header file twice causes all kinds */
                        /* of interesting problems.*/
    #include <stdlib.h>
    #include <string.h>
    #include <stdarg.h>
    #include <stdio.h>

    int str_is_equal(const char *a_string, const char *another_string);

    // Do not consider the \0 slot
    int str_length_humanized(const char *a_string);

    char* new_string(int expected_size);

    char* substr(char *destination, const char *src, size_t start, size_t end);

    char* new_string_from_format(const char *format_string, ...);
#endif /* STRING_DOT_H */
