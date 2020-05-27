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
      std::cout << "Job Title: " << jobTitle << std::endl;
      std::cout << "Company: " << company << std::endl;
      std::cout << "Salary: " << salary << std::endl;
      std::cout << "City of work: " << city << std::endl;
      std::cout << "Fulltime: "; 
      fputs(fullTime ? "true" : "false", stdout); 
      std::cout << std::endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
      tellEmployeeInfo();
    }
};