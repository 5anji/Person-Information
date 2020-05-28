#include <iostream>
#include <cstdlib>
#include "commands.h"
using namespace std;

int main() {
  int i, n;
  string numb;

  system("clear");

  LOOP:
  cout << "\t\033[1;31mHow many Persons will be?\033[0m "; 
  cin >> numb;

  if (isdigit(numb[0])) {
    n = numb[0] - 48;
  }
  else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  Mem_alloc(n);

  for (i = 0; i < n; i++) {
    Input_Info(i);
  }

  system("clear");

  for (i = 0; i < n; i++) {
    Output_Info(i);
  }

  Mem_kill();

  cout << "\t\033[1;31mDo you want to clear the screen ;) ? [Y/n]: \033[0m";
  cin >> checkerc;
  checkerc = toupper(checkerc);
  if (checkerc == 'Y') system("clear");
  
  return 0;
}