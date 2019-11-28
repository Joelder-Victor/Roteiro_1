#include "Expense.h"
#include <string>
#include <iostream>
using namespace std;
Expense::Expense(){
    value=0;
}
Expense::Expense(string t, double v){
    setExpenseType(t);
    setValue(v);
}
double Expense::getValue(){
    return value;
}
string Expense::getExpensesType(){
    return expenseType;
}
   
void Expense::setExpenseType(std::string t){
   if (t.size()>3)
        this->expenseType=t;
    else
        cout<<"Value Invalid"<<t<<endl;
    
}
void Expense::setValue(double v){
    if(v>0)
        this->value=v;
    else
        cout<<"Value Invalid"<<v<<endl;
    
}
