#include <iostream>
using namespace std;

class Pupil : public Person {
  public:
    string School, ClassForm;
    float avgMark;

    Pupil (string a1, string b1, float c, string a, string b, int c1, int c2, int c3, string d, char e) : Person (a, b, c1, c2, c3, d, e) {
      School = a1;
      ClassForm = b1;
      avgMark = c;
    }

    void tellPupilsInfo() {
      cout << "\t\t\033[0;34mSchool: \033[0m" << School << endl;
      cout << "\t\t\033[0;34mClass Form: \033[0m" << ClassForm << endl;
      cout << "\t\t\033[0;34mAverage Mark: \033[0m" << setprecision(2) << fixed << avgMark << endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellPupilsInfo();
    }
};