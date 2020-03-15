#include "class_file_1.cpp"
#include "class_file_2.cpp"
#include "class_file_3.cpp"
#include "class_file_4.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int *checker, checkerb;
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
  cout << "Input Person's FirstName: ";
  cin >> FName[i];
  cout << "Input Person's LastName: ";
  cin >> LName[i];
  cout << "Input Person's Birthday(DD MM YY): ";
  cin >> D[i] >> M[i] >> Y[i];
  cout << "Input Person's Adress: ";
  cin >> Adr[i];
  cout << "Input Person's Sex(m/f): ";
  cin >> Sx[i];

  LOOP:
  cout << "1 - Pupil" << endl;
  cout << "2 - Student" << endl;
  cout << "3 - Student-Employee" << endl;
  cout << "SELECT - ";
  cin >> checker[i];

  switch (checker[i]) {
  case 1: { 
    Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    cout << "Input Pupil's School: ";
    cin >> Sch[i];
    cout << "Input Pupil's Classform: ";
    cin >> Cls[i];
    cout << "Input Pupil's Average Mark: ";
    cin >> Avg[i];
  } break;

  case 2: 
  case 3: {
    Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    cout << "Input Student's City: ";
    cin >> Cit[i];
    cout << "Input Student's University: ";
    cin >> Univ[i];
    cout << "Input Student's Faculty: ";
    cin >> Fac[i];
    cout << "Input Student's Average Mark: ";
    cin >> Avg2[i];
    cout << "Input Student's Group: ";
    cin >> Gr[i];

    if (checker[i] == 3) {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
      cout << "Input Employee's Job Title: ";
      cin >> Job[i];
      cout << "Input Employee's Company: ";
      cin >> Comp[i];
      cout << "Input Employee's Salary: ";
      cin >> Sal[i];
      cout << "Input Employee's City: ";
      cin >> Cit2[i];
      cout << "Input Employee's FullTime(0/1): ";
      cin >> Full[i];
    } 
  } break;
    
  default:
    cout << "ERROR IN SELECTION. Select Again." << endl;
    goto LOOP;
    break;
  }

  cout << "************************************" << endl;
}

void Output_Info(int i) {
  Person pers(FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
  LOOP1:
  cout << "***************************" << endl;
  cout << "What do you want to show at person No." << i+1 << " ?" << endl << endl;
  cout << "1 - Tell Person Info" << endl;
  cout << "2 - Run 'Say Hello' command" << endl;

  switch (checker[i]) {
    case 1: {
      Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      cout << "3 - Tell Pupil's Info" << endl;
      cout << "4 - Tell All Info" << endl;
      cout << "Option -> ";
      cin >> checkerb;

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
        cout << "ERROR IN SELECTION. Select Again." << endl;
        goto LOOP1;
        break;
      }
      cout << "-----------------" << endl;
    } break;

    case 2: {
      Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      cout << "3 - Tell Student's Info" << endl;
      cout << "4 - Tell All Info" << endl;
      cout << "Option -> ";
      cin >> checkerb;

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
        cout << "ERROR IN SELECTION. Select Again." << endl;
        goto LOOP1;
        break;
      }
      cout << "-----------------" << endl;
    } break;

    case 3: {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
        
      cout << "3 - Tell Employee's Info" << endl;
      cout << "4 - Tell All Info" << endl;
      cout << "Option -> ";
      cin >> checkerb;

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
        cout << "ERROR IN SELECTION. Select Again." << endl;
        goto LOOP1;
        break;
      }
      cout << "-----------------" << endl;
    } break;
  }

  cout << "Do You want to analyse this person again? [Y/n]: ";
  cin >> checkerc;
  if (checkerc == 'y' || checkerc == 'Y') goto LOOP1;
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