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
      cout << "\t\t\033[0;34mCity: \033[0m" << City << endl;
      cout << "\t\t\033[0;34mUniversity: \033[0m" << University << endl;
      cout << "\t\t\033[0;34mFaculty: \033[0m" << Faculty << endl;
      cout << "\t\t\033[0;34mAverage Mark: \033[0m" << setprecision(2) << fixed << AvgMark << endl;
      cout << "\t\t\033[0;34mGroup: \033[0m" << Group << endl;
    }

    void tellAllInfo() {
      tellPersonInfo();
      tellStudentInfo();
    }
};
