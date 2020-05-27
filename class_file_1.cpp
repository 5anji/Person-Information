#include <iostream>
#include <iomanip>

struct Date {
  int Day, Month, Year;
};

class Person {
  public:
    std::string FirstName, LastName, Address;
    Date Birthday;
    char Sex;

    Person (std::string a, std::string b, int c1, int c2, int c3, std::string d, char e) {
      FirstName = a;
      LastName = b;
      Birthday.Day = c1;
      Birthday.Month = c2;
      Birthday.Year = c3;
      Address = d;
      Sex = e;
      std::string getFullname();
    }

    std::string getFullname() {
      return FirstName + " " + LastName;
    }

    void tellPersonInfo() {
      std::cout << "FirstName: " << FirstName << std::endl;
      std::cout << "LastName: " << LastName << std::endl;
      std::cout << "Birthday: " << Birthday.Day << "." << Birthday.Month << "." << Birthday.Year << std::endl;
      std::cout << "Address: " << Address << std::endl;
      std::cout << "Sex: " << Sex << std::endl;
    }

    void sayHello() {
      std::cout << "My name is " + getFullname() << std::endl;
    }
};