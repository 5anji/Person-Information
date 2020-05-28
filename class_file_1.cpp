#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
  int Day, Month, Year;
};

class Person {
  public:
    string FirstName, LastName, Address;
    Date Birthday;
    char Sex;

    Person (string a, string b, int c1, int c2, int c3, string d, char e) {
      FirstName = a;
      LastName = b;
      Birthday.Day = c1;
      Birthday.Month = c2;
      Birthday.Year = c3;
      Address = d;
      Sex = e;
      string getFullname();
    }

    string getFullname() {
      return FirstName + " " + LastName;
    }

    void tellPersonInfo() {
      cout << "\t\t\033[1;34mFirstName: \033[0m" << FirstName << endl;
      cout << "\t\t\033[1;34mLastName: \033[0m" << LastName << endl;
      cout << "\t\t\033[1;34mBirthday: \033[0m" << Birthday.Day << "." << Birthday.Month << "." << Birthday.Year << endl;
      cout << "\t\t\033[1;34mAddress: \033[0m" << Address << endl;
      cout << "\t\t\033[1;34mSex: \033[0m" << Sex << endl;
    }

    void sayHello() {
      cout << "\t\t\033[1;34mMy name is " + getFullname() + "\033[0m"<< endl;
    }
};