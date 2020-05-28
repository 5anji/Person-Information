#include "class_file_1.cpp"
#include "class_file_2.cpp"
#include "class_file_3.cpp"
#include "class_file_4.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int *checker, checkerb;
string checkera;
char checkerc;

string *FName, *LName, *Adr;
int *D, *M, *Y;
char *Sx;

string *Sch, *Cls;
float *Avg;

string *Cit, *Univ, *Fac, *Gr;
float *Avg2;

string *Job, *Comp, *Cit2;
int *Sal;
bool *Full;

void Mem_alloc(int n) {
  FName = new (nothrow) string[n];
  LName = new (nothrow) string[n];
  D = new (nothrow) int[n];
  M = new (nothrow) int[n];
  Y = new (nothrow) int[n];
  Adr = new (nothrow) string[n];
  Sx = new (nothrow) char[n];

  Sch = new (nothrow) string[n];
  Cls = new (nothrow) string[n];
  Avg = new (nothrow) float[n];

  Cit = new (nothrow) string[n];
  Univ = new (nothrow) string[n];
  Fac = new (nothrow) string[n];
  Avg2 = new (nothrow) float[n];
  Gr = new (nothrow) string[n];

  Job = new (nothrow) string[n];
  Comp = new (nothrow) string[n];
  Sal = new (nothrow) int[n];
  Cit2 = new (nothrow) string[n];
  Full = new (nothrow) bool[n];

  checker = new (nothrow) int[n];
}

void Input_Info(int i) {
  cout << "\t\t\033[0;32mInput Person's FirstName: \033[0m";
  cin >> FName[i];
  cout << "\t\t\033[0;32mInput Person's LastName: \033[0m";
  cin >> LName[i];
  cout << "\t\t\033[0;32mInput Person's Birthday(DD MM YY): \033[0m";
  cin >> D[i] >> M[i] >> Y[i];
  cout << "\t\t\033[0;32mInput Person's Adress: \033[0m";
  cin >> Adr[i];
  cout << "\t\t\033[0;32mInput Person's Sex(m/f): \033[0m";
  cin >> Sx[i];

  LOOP:
  cout << "\t\033[1;36m1 - Pupil\033[0m" << endl; 
  cout << "\t\033[1;36m2 - Student\033[0m" << endl;
  cout << "\t\033[1;36m3 - Student-Employee\033[0m" << endl;
  cout << "\t\033[1;31mSELECT -->> \033[0m";
  cin >> checkera;

  if (isdigit(checkera[0])) {
    checker[i] = checkera[0] - 48;
  }
  else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  switch (checker[i]) {
  case 1: { 
    Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    cout << "\t\t\033[0;35mInput Pupil's School: \033[0m";
    cin >> Sch[i];
    cout << "\t\t\033[0;35mInput Pupil's Classform: \033[0m";
    cin >> Cls[i];
    cout << "\t\t\033[0;35mInput Pupil's Average Mark: \033[0m";
    cin >> Avg[i];
  } break;

  case 2: 
  case 3: {
    Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    cout << "\t\t\033[0;34mInput Student's City: \033[0m";
    cin >> Cit[i];
    cout << "\t\t\033[0;34mInput Student's University: \033[0m";
    cin >> Univ[i];
    cout << "\t\t\033[0;34mInput Student's Faculty: \033[0m";
    cin >> Fac[i];
    cout << "\t\t\033[0;34mInput Student's Average Mark: \033[0m";
    cin >> Avg2[i];
    cout << "\t\t\033[0;34mInput Student's Group: \033[0m";
    cin >> Gr[i];

    if (checker[i] == 3) {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
      cout << "\t\t\t\033[0;33mInput Employee's Job Title: \033[0m";
      cin >> Job[i];
      cout << "\t\t\t\033[0;33mInput Employee's Company: \033[0m";
      cin >> Comp[i];
      cout << "\t\t\t\033[0;33mInput Employee's Salary: \033[0m";
      cin >> Sal[i];
      cout << "\t\t\t\033[0;33mInput Employee's City: \033[0m";
      cin >> Cit2[i];
      cout << "\t\t\t\033[0;33mInput Employee's FullTime(0/1): \033[0m";
      cin >> Full[i];
    } 
  } break;
    
  default:
    cout << "\033[1;31mERROR IN SELECTION. Select Again.\033[0m" << endl;
    goto LOOP;
    break;
  }

  cout << "\033[0;36m************************************************************************\033[0m" << endl;
}

void Output_Info(int i) {
  Person pers(FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
  LOOP1:
  cout << "\t\033[1;33m***************************************************************\033[0m" << endl;
  cout << "\t\033[1;33mWhat do you want to show at person No." << i+1 << " ?\033[0m" << endl << endl;
  cout << "\t\033[1;33m1 - Tell Person Info\033[0m" << endl;
  cout << "\t\033[1;33m2 - Run 'Say Hello' command\033[0m" << endl;

  switch (checker[i]) {
    case 1: {
      Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      cout << "\t\033[1;33m3 - Tell Pupil's Info\033[0m" << endl;
      cout << "\t\033[1;33m4 - Tell All Info\033[0m" << endl;
      cout << "\t\033[1;33mOption -> \033[0m";
      cin >> checkera;

      if (isdigit(checkera[0])) {
        checkerb = checkera[0] - 48;
      }
      else {
        cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
        goto LOOP1;
      }

      switch (checkerb) {
      case 1:
        pers.tellPersonInfo();
        break;
      case 2:
        pers.sayHello();
        break;
      case 3:
        pupil.tellPupilsInfo();
        break;
      case 4:
        pupil.tellAllInfo();
        break;
      default:
        cout << "\033[0;31mERROR IN SELECTION. Select Again.\033[0m" << endl;
        goto LOOP1;
        break;
      }
      cout << "-------------------------------------------------------------------------------------" << endl;
    } break;

    case 2: {
      Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      cout << "\t\033[1;33m3 - Tell Student's Info\033[0m" << endl;
      cout << "\t\033[1;33m4 - Tell All Info\033[0m" << endl;
      cout << "\t\033[1;33mOption -> \033[0m";
      cin >> checkera;

      if (isdigit(checkera[0])) {
        checkerb = checkera[0] - 48;
      }
      else {
        cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
        goto LOOP1;
      }

      switch (checkerb) {
      case 1:
        pers.tellPersonInfo();
        break;
      case 2:
        pers.sayHello();
        break;
      case 3:
        student.tellStudentInfo();
        break;
      case 4:
        student.tellAllInfo();
        break;
      default:
        cout << "\033[0;31mERROR IN SELECTION. Select Again.\033[0m" << endl;
        goto LOOP1;
        break;
      }
      cout << "-----------------" << endl;
    } break;

    case 3: {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
        
      cout << "\t\033[1;33m3 - Tell Employee's Info\033[0m" << endl;
      cout << "\t\033[1;33m4 - Tell All Info\033[0m" << endl;
      cout << "\t\033[1;33mOption -> \033[0m";
      cin >> checkera;

      if (isdigit(checkera[0])) {
        checkerb = checkera[0] - 48;
      }
      else {
        cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
        goto LOOP1;
      }

      switch (checkerb) {
      case 1:
        pers.tellPersonInfo();
        break;
      case 2:
        pers.sayHello();
        break;
      case 3:
        employee.tellEmployeeInfo();
        break;
      case 4:
        employee.tellAllInfo();
        break;
      default:
        cout << "\033[0;31mERROR IN SELECTION. Select Again.\033[0m" << endl;
        goto LOOP1;
        break;
      }
      cout << "-----------------" << endl;
    } break;
  }

  cout << "\033[1;32mDo You want to analyse this person again? [Y/n]: \033[0m";
  cin >> checkerc;
  checkerc = toupper(checkerc);
  if (checkerc == 'Y') goto LOOP1;
}

void Mem_kill() {
  delete[] FName;
  delete[] LName;
  delete[] D;
  delete[] M;
  delete[] Y;
  delete[] Adr;
  delete[] Sx;
  delete[] Sch;
  delete[] Cls;
  delete[] Avg;
  delete[] Cit;
  delete[] Univ;
  delete[] Fac;
  delete[] Avg2;
  delete[] Gr;
  delete[] Job;
  delete[] Comp;
  delete[] Sal;
  delete[] Cit2;
  delete[] Full;
  delete[] checker;
}