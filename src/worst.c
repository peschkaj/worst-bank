#include <stdio.h>

#include "menu.h"

#define PROJECT_NAME "worst"

int main() {
    Action action;
  do {
    print_menu();
    action = read_menu_option();

    if (action == Unknown) {
      printf("I didn't get that, can you try again?\n\n");
    } else if (action == Error) {
      perror("Unable to parse command.");
      return -1;
    }
  } while (action != Exit);

  return 0;
}
