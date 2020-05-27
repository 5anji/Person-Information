#include "class_file_1.cpp"
#include "class_file_2.cpp"
#include "class_file_3.cpp"
#include "class_file_4.cpp"
#include <iostream>
#include <cstdlib>

int *checker, checkerb;
char checkerc;

std::string *FName, *LName, *Adr;
int *D, *M, *Y;
char *Sx;

std::string *Sch, *Cls;
float *Avg;

std::string *Cit, *Univ, *Fac, *Gr;
float *Avg2;

std::string *Job, *Comp, *Cit2;
int *Sal;
bool *Full;

void Mem_alloc(int n) {
  FName = new (std::nothrow) std::string[n];
  LName = new (std::nothrow) std::string[n];
  D = new (std::nothrow) int[n];
  M = new (std::nothrow) int[n];
  Y = new (std::nothrow) int[n];
  Adr = new (std::nothrow) std::string[n];
  Sx = new (std::nothrow) char[n];

  Sch = new (std::nothrow) std::string[n];
  Cls = new (std::nothrow) std::string[n];
  Avg = new (std::nothrow) float[n];

  Cit = new (std::nothrow) std::string[n];
  Univ = new (std::nothrow) std::string[n];
  Fac = new (std::nothrow) std::string[n];
  Avg2 = new (std::nothrow) float[n];
  Gr = new (std::nothrow) std::string[n];

  Job = new (std::nothrow) std::string[n];
  Comp = new (std::nothrow) std::string[n];
  Sal = new (std::nothrow) int[n];
  Cit2 = new (std::nothrow) std::string[n];
  Full = new (std::nothrow) bool[n];

  checker = new (std::nothrow) int[n];
}

void Input_Info(int i) {
  std::cout << "Input Person's FirstName: ";
  std::cin >> FName[i];
  std::cout << "Input Person's LastName: ";
  std::cin >> LName[i];
  std::cout << "Input Person's Birthday(DD MM YY): ";
  std::cin >> D[i] >> M[i] >> Y[i];
  std::cout << "Input Person's Adress: ";
  std::cin >> Adr[i];
  std::cout << "Input Person's Sex(m/f): ";
  std::cin >> Sx[i];

  LOOP:
  std::cout << "1 - Pupil" << std::endl;
  std::cout << "2 - Student" << std::endl;
  std::cout << "3 - Student-Employee" << std::endl;
  std::cout << "SELECT - ";
  std::cin >> checker[i];

  switch (checker[i]) {
  case 1: { 
    Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    std::cout << "Input Pupil's School: ";
    std::cin >> Sch[i];
    std::cout << "Input Pupil's Classform: ";
    std::cin >> Cls[i];
    std::cout << "Input Pupil's Average Mark: ";
    std::cin >> Avg[i];
  } break;

  case 2: 
  case 3: {
    Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    std::cout << "Input Student's City: ";
    std::cin >> Cit[i];
    std::cout << "Input Student's University: ";
    std::cin >> Univ[i];
    std::cout << "Input Student's Faculty: ";
    std::cin >> Fac[i];
    std::cout << "Input Student's Average Mark: ";
    std::cin >> Avg2[i];
    std::cout << "Input Student's Group: ";
    std::cin >> Gr[i];

    if (checker[i] == 3) {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
      std::cout << "Input Employee's Job Title: ";
      std::cin >> Job[i];
      std::cout << "Input Employee's Company: ";
      std::cin >> Comp[i];
      std::cout << "Input Employee's Salary: ";
      std::cin >> Sal[i];
      std::cout << "Input Employee's City: ";
      std::cin >> Cit2[i];
      std::cout << "Input Employee's FullTime(0/1): ";
      std::cin >> Full[i];
    } 
  } break;
    
  default:
    std::cout << "ERROR IN SELECTION. Select Again." << std::endl;
    goto LOOP;
    break;
  }

  std::cout << "************************************" << std::endl;
}

void Output_Info(int i) {
  Person pers(FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
  LOOP1:
  std::cout << "***************************" << std::endl;
  std::cout << "What do you want to show at person No." << i+1 << " ?" << std::endl << std::endl;
  std::cout << "1 - Tell Person Info" << std::endl;
  std::cout << "2 - Run 'Say Hello' command" << std::endl;

  switch (checker[i]) {
    case 1: {
      Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      std::cout << "3 - Tell Pupil's Info" << std::endl;
      std::cout << "4 - Tell All Info" << std::endl;
      std::cout << "Option -> ";
      std::cin >> checkerb;

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
        std::cout << "ERROR IN SELECTION. Select Again." << std::endl;
        goto LOOP1;
        break;
      }
      std::cout << "-----------------" << std::endl;
    } break;

    case 2: {
      Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      std::cout << "3 - Tell Student's Info" << std::endl;
      std::cout << "4 - Tell All Info" << std::endl;
      std::cout << "Option -> ";
      std::cin >> checkerb;

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
        std::cout << "ERROR IN SELECTION. Select Again." << std::endl;
        goto LOOP1;
        break;
      }
      std::cout << "-----------------" << std::endl;
    } break;

    case 3: {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
        
      std::cout << "3 - Tell Employee's Info" << std::endl;
      std::cout << "4 - Tell All Info" << std::endl;
      std::cout << "Option -> ";
      std::cin >> checkerb;

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
        std::cout << "ERROR IN SELECTION. Select Again." << std::endl;
        goto LOOP1;
        break;
      }
      std::cout << "-----------------" << std::endl;
    } break;
  }

  std::cout << "Do You want to analyse this person again? [Y/n]: ";
  std::cin >> checkerc;
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