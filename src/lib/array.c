#include "array.h"

void arr_puts(const char *some_strings[], int arr_size) {
  for (int i = 0; i < arr_size; ++i) {
    puts(some_strings[i]);
  }
}