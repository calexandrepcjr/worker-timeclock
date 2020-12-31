#ifndef ARRAY_DOT_H /* This is an "include guard" */
#define ARRAY_DOT_H /* prevents the file from being included twice. */
                    /* Including a header file twice causes all kinds */
                    /* of interesting problems.*/

#define NELEMS(x) (int)(sizeof(x) / sizeof((x)[0]))
#endif /* ARRAY_DOT_H */
