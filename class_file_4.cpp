#include <iostream>
using namespace std;

class Employee : public Student {
  public:
    string jobTitle, company, city;
    int salary;
    bool fullTime;

    Employee (string job, string comp, int sal, string cit, bool full, string Cit, string Univ, string Fac, float Avg, string Gr, string a, string b, int c1, int c2, int c3, string d, char e) : Student(Cit, Univ, Fac, Avg, Gr, a, b, c1, c2, c3, d, e){
      jobTitle = job;
      company = comp;
      salary = sal;
      city = cit;
      fullTime = full;
    }

    void tellEmployeeInfo() {
      cout << "\t\t\033[0;34mJob Title: \033[0m" << jobTitle << endl;
      cout << "\t\t\033[0;34mCompany: \033[0m" << company << endl;
      cout << "\t\t\033[0;34mSalary: \033[0m" << salary << endl;
      cout << "\t\t\033[0;34mCity of work: \033[0m" << city << endl;
      cout << "\t\t\033[0;34mFulltime: \033[0m"; 
      fputs(fullTime ? "true" : "false", stdout); 
      cout << endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
      tellEmployeeInfo();
    }
};