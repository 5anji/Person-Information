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
  std::cout << "\033[0;32mInput Person's FirstName: \033[0m";
  std::cin >> FName[i];
  std::cout << "\033[0;32mInput Person's LastName: \033[0m";
  std::cin >> LName[i];
  std::cout << "\033[0;32mInput Person's Birthday(DD MM YY): \033[0m";
  std::cin >> D[i] >> M[i] >> Y[i];
  std::cout << "\033[0;32mInput Person's Adress: \033[0m";
  std::cin >> Adr[i];
  std::cout << "\033[0;32mInput Person's Sex(m/f): \033[0m";
  std::cin >> Sx[i];

  LOOP:
  std::cout << "\033[1;36m1 - Pupil\033[0m" << std::endl; 
  std::cout << "\033[1;36m2 - Student\033[0m" << std::endl;
  std::cout << "\033[1;36m3 - Student-Employee\033[0m" << std::endl;
  std::cout << "\033[1;31mSELECT -->> \033[0m";
  std::cin >> checker[i];

  switch (checker[i]) {
  case 1: { 
    Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    std::cout << "\033[0;35mInput Pupil's School: \033[0m";
    std::cin >> Sch[i];
    std::cout << "\033[0;35mInput Pupil's Classform: \033[0m";
    std::cin >> Cls[i];
    std::cout << "\033[0;35mInput Pupil's Average Mark: \033[0m";
    std::cin >> Avg[i];
  } break;

  case 2: 
  case 3: {
    Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
    std::cout << "\033[0;34mInput Student's City: \033[0m";
    std::cin >> Cit[i];
    std::cout << "\033[0;34mInput Student's University: \033[0m";
    std::cin >> Univ[i];
    std::cout << "\033[0;34mInput Student's Faculty: \033[0m";
    std::cin >> Fac[i];
    std::cout << "\033[0;34mInput Student's Average Mark: \033[0m";
    std::cin >> Avg2[i];
    std::cout << "\033[0;34mInput Student's Group: \033[0m";
    std::cin >> Gr[i];

    if (checker[i] == 3) {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
      std::cout << "\033[0;33mInput Employee's Job Title: \033[0m";
      std::cin >> Job[i];
      std::cout << "\033[0;33mInput Employee's Company: \033[0m";
      std::cin >> Comp[i];
      std::cout << "\033[0;33mInput Employee's Salary: \033[0m";
      std::cin >> Sal[i];
      std::cout << "\033[0;33mInput Employee's City: \033[0m";
      std::cin >> Cit2[i];
      std::cout << "\033[0;33mInput Employee's FullTime(0/1): \033[0m";
      std::cin >> Full[i];
    } 
  } break;
    
  default:
    std::cout << "\033[1;31mERROR IN SELECTION. Select Again.\033[0m" << std::endl;
    goto LOOP;
    break;
  }

  std::cout << "\033[0;36m************************************\033[0m" << std::endl;
}

void Output_Info(int i) {
  Person pers(FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
  LOOP1:
  std::cout << "\033[1;33m***************************\033[0m" << std::endl;
  std::cout << "\033[1;33mWhat do you want to show at person No." << i+1 << " ?\033[0m" << std::endl << std::endl;
  std::cout << "\033[1;33m1 - Tell Person Info\033[0m" << std::endl;
  std::cout << "\033[1;33m2 - Run 'Say Hello' command\033[0m" << std::endl;

  switch (checker[i]) {
    case 1: {
      Pupil pupil(Sch[i], Cls[i], Avg[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      std::cout << "\033[1;33m3 - Tell Pupil's Info\033[0m" << std::endl;
      std::cout << "\033[1;33m4 - Tell All Info\033[0m" << std::endl;
      std::cout << "\033[1;33mOption -> \033[0m";
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
        std::cout << "\033[0;31mERROR IN SELECTION. Select Again.\033[0m" << std::endl;
        goto LOOP1;
        break;
      }
      std::cout << "-----------------" << std::endl;
    } break;

    case 2: {
      Student student(Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);

      std::cout << "\033[1;33m3 - Tell Student's Info\033[0m" << std::endl;
      std::cout << "\033[1;33m4 - Tell All Info\033[0m" << std::endl;
      std::cout << "\033[1;33mOption -> \033[0m";
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
        std::cout << "\033[0;31mERROR IN SELECTION. Select Again.\033[0m" << std::endl;
        goto LOOP1;
        break;
      }
      std::cout << "-----------------" << std::endl;
    } break;

    case 3: {
      Employee employee(Job[i], Comp[i], Sal[i], Cit2[i], Full[i], Cit[i], Univ[i], Fac[i], Avg2[i], Gr[i], FName[i], LName[i], D[i], M[i], Y[i], Adr[i], Sx[i]);
        
      std::cout << "\033[1;33m3 - Tell Employee's Info\033[0m" << std::endl;
      std::cout << "\033[1;33m4 - Tell All Info\033[0m" << std::endl;
      std::cout << "\033[1;33mOption -> \033[0m";
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
        std::cout << "\033[0;31mERROR IN SELECTION. Select Again.\033[0m" << std::endl;
        goto LOOP1;
        break;
      }
      std::cout << "-----------------" << std::endl;
    } break;
  }

  std::cout << "\033[1;32mDo You want to analyse this person again? [Y/n]: \033[0m";
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