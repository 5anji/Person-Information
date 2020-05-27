#include <iostream>

class Pupil : public Person {
  public:
    std::string School, ClassForm;
    float avgMark;

    Pupil (std::string a1, std::string b1, float c, std::string a, std::string b, int c1, int c2, int c3, std::string d, char e) : Person (a, b, c1, c2, c3, d, e) {
      School = a1;
      ClassForm = b1;
      avgMark = c;
    }

    void tellPupilsInfo() {
      std::cout << "School: " << School << std::endl;
      std::cout << "Class Form: " << ClassForm << std::endl;
      std::cout << "Average Mark: " << std::setprecision(2) << std::fixed << avgMark << std::endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellPupilsInfo();
    }
};