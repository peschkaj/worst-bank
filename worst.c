#include <stdio.h>

#include "include/menu.h"

#define PROJECT_NAME "worst"

int main() {
    Action action;
  do {
    print_menu();
    action = read_menu_option();

    if (action == Error) {
      perror("Unable to parse command.");
      return -1;
    }
  } while (action != Exit);

  return 0;
}
