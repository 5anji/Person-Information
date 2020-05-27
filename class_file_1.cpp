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
      std::cout << "\033[1;34mFirstName: \033[0m" << FirstName << std::endl;
      std::cout << "\033[1;34mLastName: \033[0m" << LastName << std::endl;
      std::cout << "\033[1;34mBirthday: \033[0m" << Birthday.Day << "." << Birthday.Month << "." << Birthday.Year << std::endl;
      std::cout << "\033[1;34mAddress: \033[0m" << Address << std::endl;
      std::cout << "\033[1;34mSex: \033[0m" << Sex << std::endl;
    }

    void sayHello() {
      std::cout << "\033[1;34mMy name is " + getFullname() + "\033[0m"<< std::endl;
    }
};