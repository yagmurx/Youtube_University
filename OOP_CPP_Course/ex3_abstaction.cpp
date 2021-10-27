/*
    Abstraction hides complex things behind the prosedure that makes look simple.
*/

#include <iostream>

using std::string;

class AbstractEmployee{
    virtual void AskForPromotion () = 0;
};

class Employee:AbstractEmployee {
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
    
    void AskForPromotion ()
    {
        if(Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry NO promotion for you!" << std::endl;
    }
};

int main()
{    
    Employee emp1 = Employee("Jack", "Ironman INC", 25);
    Employee emp2 = Employee("Jenn", "Ironman INC", 35);

    emp1.AskForPromotion();
    emp2.AskForPromotion(); 
}