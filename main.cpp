#include <iostream>
#include <cstdlib>
#include "commands.h"
using namespace std;


int main() {
  int i, n;

  system("clear");
  cout << "How many Persons will be? "; 
  cin >> n;

  Mem_alloc(n);

  for (i = 0; i < n; i++) {
    Input_Info(i);
  }

  system("clear");

  for (i = 0; i < n; i++) {
    Output_Info(i);
  }

  Mem_kill();

  cout << "Do you want to clear the screen ;) ? [Y/n]: ";
  cin >> checkerc;
  if (checkerc == 'y' || checkerc == 'Y') system("clear");
  
  return 0;
}