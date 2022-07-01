#include "file.h"

off_t file_size(char* filename) {
  FILE * file = fopen(filename, "r");
  int size;

  if (file == NULL) {
    return -1;
  }

  fseek(file, 0, SEEK_END);

  size = ftell(file); 
  fclose(file);

  return size;
}

int is_file_empty(char* filename) {
  off_t size = file_size(filename);

  if (size > 0) {
    return 0;
  }

  return 1;
}