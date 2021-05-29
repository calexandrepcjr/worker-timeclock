#ifndef STRING_DOT_H /* This is an "include guard" */
    #define STRING_DOT_H /* prevents the file from being included twice. */
                        /* Including a header file twice causes all kinds */
                        /* of interesting problems.*/
    #include <stdlib.h>
    #include <string.h>

    int str_is_equal(const char *a_string, const char *another_string);
#endif /* STRING_DOT_H */
