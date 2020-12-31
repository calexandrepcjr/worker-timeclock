#ifndef ARRAY_DOT_H /* This is an "include guard" */
#define ARRAY_DOT_H /* prevents the file from being included twice. */
                    /* Including a header file twice causes all kinds */
                    /* of interesting problems.*/

#define ARR_SIZEOF(x) (int)(sizeof(x) / sizeof((x)[0]))

#include <stdio.h>

void arr_puts(const char *some_strings[], int arr_size);

#endif /* ARRAY_DOT_H */
