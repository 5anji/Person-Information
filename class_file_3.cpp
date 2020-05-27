#include <iostream>

class Student : public Person {
  public:
    std::string City, University, Faculty, Group;
    float AvgMark;

    Student(std::string Cit, std::string Univ, std::string Fac, float Avg, std::string Gr, std::string a, std::string b, int c1, int c2, int c3, std::string d, char e) : Person (a, b, c1, c2, c3, d, e) {
      City = Cit;
      University = Univ;
      Faculty = Fac;
      AvgMark = Avg;
      Group = Gr;
    }

    void tellStudentInfo() {
      std::cout << "\033[0;34mCity: \033[0m" << City << std::endl;
      std::cout << "\033[0;34mUniversity: \033[0m" << University << std::endl;
      std::cout << "\033[0;34mFaculty: \033[0m" << Faculty << std::endl;
      std::cout << "\033[0;34mAverage Mark: \033[0m" << std::setprecision(2) << std::fixed << AvgMark << std::endl;
      std::cout << "\033[0;34mGroup: \033[0m" << Group << std::endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
    }
};
