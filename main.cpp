#include <iostream>
#include <cstdlib>
#include "commands.h"

int main() {
  int i, n;

  system("clear");
  std::cout << "\033[1;31mHow many Persons will be?\033[0m "; 
  std::cin >> n;

  Mem_alloc(n);

  for (i = 0; i < n; i++) {
    Input_Info(i);
  }

  system("clear");

  for (i = 0; i < n; i++) {
    Output_Info(i);
  }

  Mem_kill();

  std::cout << "\033[1;31mDo you want to clear the screen ;) ? [Y/n]: \033[0m";
  std::cin >> checkerc;
  checkerc = toupper(checkerc);
  if (checkerc == 'Y') system("clear");
  
  return 0;
}