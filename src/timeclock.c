#include "lib/array.h"
#include "lib/string.h"
#include <stdio.h>

const char more_info[] = "Add -h/--help argument to see what I can do";
const static char *available_commands[] = {
    "-r/--register - registers the current time",
    "-b/--balance - shows the total of worked hours"};

static void list_commands(int argc, char *argv[]) {
  const int is_help =
      str_is_equal(argv[1], "-h") || str_is_equal(argv[1], "--help");

  if (argc == 1) {
    puts(more_info);
  }

  if (is_help) {
    for (int i = 0; i < NELEMS(available_commands); ++i) {
      puts(available_commands[i]);
    }
  }
}

int main(int argc, char *argv[]) {
  list_commands(argc, argv);
  return 0;
}
