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
      cout << "FirstName: " << FirstName << endl;
      cout << "LastName: " << LastName << endl;
      cout << "Birthday: " << Birthday.Day << "." << Birthday.Month << "." << Birthday.Year << endl;
      cout << "Address: " << Address << endl;
      cout << "Sex: " << Sex << endl;
    }

    void sayHello() {
      cout << "My name is " + getFullname() << endl;
    }
};