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
      cout << "Job Title: " << jobTitle << endl;
      cout << "Company: " << company << endl;
      cout << "Salary: " << salary << endl;
      cout << "City of work: " << city << endl;
      cout << "Fulltime: "; 
      fputs(fullTime ? "true" : "false", stdout); 
      cout << endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
      tellEmployeeInfo();
    }
};