#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include "ctype.h"

#include "Employee.h"

using namespace std;

int main(){

    Employee worker1=Employee();
    Employee worker2=Employee();

    cout<<fixed;
    cout<<setprecision(2)<<"The "<<worker1.getName()<<"'s salary is:"<<worker1.getSalary()<<endl;
    cout<<setprecision(2)<<"The "<<worker2.getName()<<"'s salary is:"<<worker2.getSalary()<<endl;

    worker1.increase();
    worker2.increase();
    putchar('\n');
    cout<<setprecision(2)<<"New "<<worker1.getName()<<"'s salary is:"<<worker1.getSalary()<<endl;
    cout<<setprecision(2)<<"New "<<worker2.getName()<<"'s salary is:"<<worker2.getSalary()<<endl;

    return 0;
}