#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person
{
private:
    std::string name;
    int age,phone;
    public:
    Person(std::string n);
    Person(std::string n,int a,int p);
    std::string getName();
    int getAge();
    int getPhone();
    void setName();
    void setAge();
    void setPhone();
    void editPerson();
    void printP();

};

#endif