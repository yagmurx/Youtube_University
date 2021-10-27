#include <iostream>

using std::string;

class Employee {
//IF WE wANT TO USE VARIABLES OUTSIDE THE CLASS, THEY SHOULD BE PUBLIC.
public:
    string Name;
    string Company;
    int Age;

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
        std::cout << " I'm " << Age;
    }
};

int main()
{
    //IF WE DON'T BUILD A CONST, CLASSES USING LIKE THIS
    // Employee emp1;
    // emp1.Name = "Jack";
    // emp1.Company = "Ironman INC";
    // emp1.Age = 25;

    //emp1.IntroduceYourself();

    //USING CONSTRUCTURE
    Employee emp2 = Employee("Jack", "Ironman INC", 25); 
    emp2.IntroduceYourself();
}