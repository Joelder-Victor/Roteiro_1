#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include "ctype.h"
#include "Expense.h"
#include "ExpenseControl.h"

using namespace std;
void searchType(string *type);
void displayMessage(string *type, double *value);
int main (void){
    string type;
    double value;

    
    ExpenseControl ec;
    Expense e[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        
        displayMessage(&type,&value);
        if(value==0)
            break;
        e[i]=Expense(type,value);
        ec.setExpense(e[i],i);
    }
    /*Expense e1 = Expense("food",5.00);
    Expense *e2;
    e2 = new Expense;
    Expense e3=Expense("phone",50.00);

    ec.setExpense(e1,0);
    ec.setExpense(*e2,1);
    ec.setExpense(e3,2);*/

    cout << "Total Expenses = "<<ec.calculateTotal()<<endl;

    searchType(&type);
    cout<<(ec.isThereKindExpense(type)?"true":"false")<<endl;

    cout<<"End"<<endl;

}
void displayMessage(string *type, double *value){

    cout<<"Enter expense type:";
    cin>>*type;

    cout<<"Enter value:";
    cin>>*value;
}
void searchType(string *type){
    cout << "Search Expense: ";
    cin>>*type;
}