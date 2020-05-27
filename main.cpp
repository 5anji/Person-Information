#include <iostream>
#include <cstdlib>
#include "commands.h"

int main() {
  int i, n;

  system("clear");
  std::cout << "How many Persons will be? "; 
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

  std::cout << "Do you want to clear the screen ;) ? [Y/n]: ";
  std::cin >> checkerc;
  checkerc = toupper(checkerc);
  if (checkerc == 'Y') system("clear");
  
  return 0;
}