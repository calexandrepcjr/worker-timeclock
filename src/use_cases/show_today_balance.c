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
   TimeInfo time_infos[2];
   TimePeriod period;
   int reminder = 0;

   while (fgets(line, MAX_LINE_LENGTH, file))
   {
      reminder = line_count % 2;
      time_infos[reminder] = new_time_info(line);

      printf(
         "presence[%03d]: %s | hours: %02d | minutes: %02d | total hours: %.2f | total_minutes: %.2f\n",
         ++line_count,
         time_infos[reminder].raw_info,
         time_infos[reminder].hours,
         time_infos[reminder].minutes,
         time_infos[reminder].total_hours,
         time_infos[reminder].total_minutes
      );

      if (line_count == 0 || reminder != 1) {
         continue;
      }

      period = new_time_period(time_infos[0], time_infos[1]);

      printf(
         "balance: %s/%s | hours: %.2f | minutes: %.2f\n",
         period.begin.raw_info,
         period.end.raw_info,
         period.total_hours,
         period.total_minutes
      );
   }

   fclose(file);

   return EXIT_SUCCESS;
}