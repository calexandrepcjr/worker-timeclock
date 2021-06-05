#include "string.h"

int str_is_equal(const char *a_string, const char *another_string) {
  if (a_string == NULL || another_string == NULL) {
    return 0;
  }

  return strcmp(a_string, another_string) == 0;
}

char* create_string(int expected_size) {
    return (char*)malloc(expected_size * sizeof(char));
}