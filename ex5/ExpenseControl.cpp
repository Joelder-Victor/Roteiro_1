#include "ExpenseControl.h"
using namespace std;
ExpenseControl::ExpenseControl(){

}
void ExpenseControl::setExpense(Expense e,int pos){
    this->expenses[pos] = e;

}
bool ExpenseControl::isThereKindExpense(string expense){
        for(Expense e: expenses)
            if(e.getExpensesType()== expense)
                return true;
       return false;
}
double ExpenseControl::calculateTotal(){
    
    double sum=0;
    /*for (int i = 0; i < SIZE; i++)
        sum += expenses[i].getValue();*/
    for(Expense e: expenses)
        sum += e.getValue();
    return sum;
}
