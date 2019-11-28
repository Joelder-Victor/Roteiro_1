#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee(){
    setEmployee();
}

void Employee::setEmployee(){
    while(1){
    insertData();
    if((monthSalary)>0)
        break;
    }
    salary();
}
string Employee::getName(){
    return name;
}
string Employee::getSurname(){
    return surname;
}
float Employee::getSalary(){
    return yearSalary;
}
void Employee::insertData(){
    
    cout<<"Enter name:";
    cin>>name;

    cout<<"Enter surname:";
    cin>>surname;

    cout<<"Enter salary:"<<endl;
    cin>>monthSalary;
    
}
void Employee::salary(){
    yearSalary = monthSalary*12;
}
void Employee::increase(){
    yearSalary = (yearSalary*0.1)+yearSalary;
}