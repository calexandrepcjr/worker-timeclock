#include "register_current_time.h"


void register_current_time() {
   FILE * file = fopen(current_date(), "a");

   fprintf(file, "%s\n", current_hours());
 
   fclose(file);
}