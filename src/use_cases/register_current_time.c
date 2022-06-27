#include "register_current_time.h"


void register_current_time() {
   FILE * file_pointer = fopen(current_date(), "a");

   fprintf(file_pointer, "%s\n", current_hours());
 
   fclose(file_pointer);
}