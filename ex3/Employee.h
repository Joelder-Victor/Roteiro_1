#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>

class Employee
{
private:
    std::string name;
    std::string surname;
    float yearSalary,monthSalary;
public:
    Employee();
    void insertData();
    void setEmployee();
    std::string getName();
    std::string getSurname();
    float getSalary();
    void salary();
    void increase();
};

#endif
