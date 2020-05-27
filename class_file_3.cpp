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
      std::cout << "City: " << City << std::endl;
      std::cout << "University: " << University << std::endl;
      std::cout << "Faculty: " << Faculty << std::endl;
      std::cout << "Average Mark: " << std::setprecision(2) << std::fixed << AvgMark << std::endl;
      std::cout << "Group: " << Group << std::endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
    }
};
