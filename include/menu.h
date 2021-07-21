#pragma once

#ifndef MENU_H_
#define MENU_H_

typedef enum { Error = -1, Exit, CreateUser } Action;

void print_menu();
Action read_menu_option();
#endif
