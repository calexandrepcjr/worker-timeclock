#ifndef FILE_DOT_H /* This is an "include guard" */
    #define FILE_DOT_H /* prevents the file from being included twice. */
                        /* Including a header file twice causes all kinds */
                        /* of interesting problems.*/

    #include <stdio.h>
    #include <sys/types.h>

    int is_file_empty(char* filename);
    off_t file_size(char* filename);
#endif /* FILE_DOT_H */
