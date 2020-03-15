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
      cout << "School: " << School << endl;
      cout << "Class Form: " << ClassForm << endl;
      cout << "Average Mark: " << setprecision(2) << fixed << avgMark << endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellPupilsInfo();
    }
};