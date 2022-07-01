#include "string.h"

int str_is_equal(const char *a_string, const char *another_string) {
  if (a_string == NULL || another_string == NULL) {
    return 0;
  }

  return strcmp(a_string, another_string) == 0;
}

int str_length_humanized(const char *a_string) {
  return strlen(a_string) - 1;
}

char* create_string(int expected_size) {
    return (char*)malloc(expected_size * sizeof(char));
}

char* substr(char *destination, const char *src, size_t start, size_t end) {
    memset(destination, 0, strlen(destination));

    return strncpy(destination, src + start, end);
}