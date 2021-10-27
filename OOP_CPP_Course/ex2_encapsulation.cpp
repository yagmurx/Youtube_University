/*
Encapsulation arranges the permissions of accesing a class member.
*/

#include <iostream>

using std::string;

class Employee {
//IF WE WANT TO DISAPPEAR VARIABLES, THEY SHOULD BE PRIVATE.
private:
    string Name;
    string Company;
    int Age;

//IF WE wANT TO USE VARIABLES OUTSIDE THE CLASS, THEY SHOULD BE PUBLIC.
public:
    void setName(string name) //setter Name
    {
        Name = name;
    }
    string getName()  //getter Name
    {
        return Name;
    }
     void setCompany(string company) //setter Company
    {
        Company = company;
    }
    string getCompany()  //getter Company
    {
        return Company;
    }
    void setAge(int age) //setter Age
    {
        Age = age;
    }
    int getAge()  //getter Age
    {
        return Age;
    }
    
    Employee (string name, string company, int age) 
    {
        Name = name;
        Company = company;
        Age = age;
    }
    
    void IntroduceYourself() //PRINTING FUNCTION
    {
        std::cout << "Hi!";
        std::cout << " My name is " << Name;
        std::cout << " My company is " << Company;
        std::cout << " I'm " << Age << std::endl;
    }
};

int main()
{
    Employee emp1 = Employee("Jack", "Ironman INC", 25); 
    emp1.IntroduceYourself();
    emp1.setAge(28);
    
    std::cout <<emp1.getName() << " is " << emp1.getAge() << " years old." << std::endl;
}