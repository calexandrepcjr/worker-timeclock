#ifndef TIMELORD_DOT_H /* This is an "include guard" */
    #define TIMELORD_DOT_H /* prevents the file from being included twice. */
                        /* Including a header file twice causes all kinds */
                        /* of interesting problems.*/
    #include <stdio.h>
    #include <time.h>
    #include <stdint.h>
    #include <stdlib.h>

    // In the Y-m-d format
    char* current_date();

    // In the H:M:s format
    char* current_hours();
#endif /* TIMELORD_DOT_H */
