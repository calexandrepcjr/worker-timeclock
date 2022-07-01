#include "show_today_balance.h"

#define MAX_LINE_LENGTH 80

int show_today_balance() {
   char* filename = current_date();

   if (is_file_empty(filename)) {
      printf("There is no balance to show today\n");

      return EXIT_FAILURE;
   }

   char line[MAX_LINE_LENGTH] = {0};

   FILE * file = fopen(filename, "r");
   unsigned int line_count = 0;
   TimeInfo time_info;

   while (fgets(line, MAX_LINE_LENGTH, file))
   {
      time_info = new_time_info(line);

      printf(
         "presence[%03d]: %s | hours: %02d | minutes: %02d | total hours: %.2f | total_minutes: %.2f",
         ++line_count,
         time_info.raw_info,
         time_info.hours,
         time_info.minutes,
         time_info.total_hours,
         time_info.total_minutes
      );
   }

   fclose(file);

   return EXIT_SUCCESS;
}