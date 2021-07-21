#include "menu.h"

#include <stdio.h>
#include <stdlib.h>

const char *NO_LOGIN_MENU =
    "Worst Bank v1.0                                      \n"
    "=====================================================\n"
    "1. Create Account                                    \n"
    "0. Exit                                              \n\n";

const char *PROMPT = "> ";
const int BUFFER_SIZE = 140;

void print_menu() {
  printf("%s", NO_LOGIN_MENU);
  printf("%s", PROMPT);
}

Action read_menu_option() {
  int input;
  Action action = Error;
  char *buffer = (char *)calloc(BUFFER_SIZE, sizeof(char));

  if (fgets(buffer, BUFFER_SIZE, stdin) != NULL) {
    // int result = scanf("%d", &input);
    int result = sscanf(buffer, "%d", &input);

    if (result == 1) {
      switch (input) {
        case 0:
          action = Exit;
          break;
        case 1:
          action = CreateUser;
          break;
        default:
          action = Unknown;
          break;
      }
    }
  }

  free(buffer);

  return action;
}
