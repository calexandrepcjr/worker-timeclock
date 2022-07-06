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

char* new_string(int expected_size) {
    return (char*)malloc((expected_size + 1) * sizeof(char));
}

char* substr(char *destination, const char *src, size_t start, size_t end) {
    memset(destination, 0, strlen(destination));

    return strncpy(destination, src + start, end);
}

char* new_string_from_format(const char *format_string, ...) {
  char *a_new_string;

  va_list args;
  va_start(args, format_string);

  const int final_string_size = vsnprintf(NULL, 0, format_string, args);

  va_end(args);

  a_new_string = new_string(final_string_size);

  if (a_new_string == NULL) {
    return "";
  }

  va_start(args, format_string);

  vsnprintf(a_new_string, final_string_size, format_string, args);

  va_end(args);

  return a_new_string;
}