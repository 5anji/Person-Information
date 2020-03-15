#include <iostream>
using namespace std;

class Student : public Person {
  public:
    string City, University, Faculty, Group;
    float AvgMark;

    Student(string Cit, string Univ, string Fac, float Avg, string Gr, string a, string b, int c1, int c2, int c3, string d, char e) : Person (a, b, c1, c2, c3, d, e) {
      City = Cit;
      University = Univ;
      Faculty = Fac;
      AvgMark = Avg;
      Group = Gr;
    }

    void tellStudentInfo() {
      cout << "City: " << City << endl;
      cout << "University: " << University << endl;
      cout << "Faculty: " << Faculty << endl;
      cout << "Average Mark: " << setprecision(2) << fixed << AvgMark << endl;
      cout << "Group: " << Group << endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
    }
};
