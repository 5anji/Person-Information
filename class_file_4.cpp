#include <iostream>

class Employee : public Student {
  public:
    std::string jobTitle, company, city;
    int salary;
    bool fullTime;

    Employee (std::string job, std::string comp, int sal, std::string cit, bool full, std::string Cit, std::string Univ, std::string Fac, float Avg, std::string Gr, std::string a, std::string b, int c1, int c2, int c3, std::string d, char e) : Student(Cit, Univ, Fac, Avg, Gr, a, b, c1, c2, c3, d, e){
      jobTitle = job;
      company = comp;
      salary = sal;
      city = cit;
      fullTime = full;
    }

    void tellEmployeeInfo() {
      std::cout << "\033[0;34mJob Title: \033[0m" << jobTitle << std::endl;
      std::cout << "\033[0;34mCompany: \033[0m" << company << std::endl;
      std::cout << "\033[0;34mSalary: \033[0m" << salary << std::endl;
      std::cout << "\033[0;34mCity of work: \033[0m" << city << std::endl;
      std::cout << "\033[0;34mFulltime: \033[0m"; 
      fputs(fullTime ? "true" : "false", stdout); 
      std::cout << std::endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
      tellEmployeeInfo();
    }
};