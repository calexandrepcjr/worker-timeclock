#include "lib/array.h"
#include "lib/string.h"
#include "use_cases/register_current_time.h"
#include "use_cases/show_today_balance.h"
#include <stdio.h>

const static char more_info[] = "Add -h/--help argument to see what I can do";
const static char *available_commands[] = {
    "-r/--register - registers the current time",
    "-tb/--today-balance - shows the total of today's worked hours"
    "-b/--balance - shows the total of worked hours"
    };

static int is_command(char *arg, char *simplified_command, char *complete_command) {
    return str_is_equal(arg, simplified_command) || str_is_equal(arg, complete_command);
}

static void list_commands(int argc, char *argv[]) {
  if (argc == 1) {
    puts(more_info);

    return;
  }

  if (is_command(argv[1], "-h", "--help")) {
    arr_puts(available_commands, ARR_SIZEOF(available_commands));

    return;
  }

  if (is_command(argv[1], "-r", "--register")) {
    register_current_time();
  }

  if (is_command(argv[1], "-tb", "--today-balance")) {
    show_today_balance();
  }
}

int main(int argc, char *argv[]) {
  list_commands(argc, argv);

  return EXIT_SUCCESS;
}
