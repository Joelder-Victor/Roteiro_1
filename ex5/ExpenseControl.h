#ifndef _EXPENSE_CONTROL_H
#define _EXPENSE_CONTROL_H
#include "Expense.h"
#define SIZE 100

class ExpenseControl
{
private:

   Expense expenses[SIZE];
   
public:
    ExpenseControl();
    void setExpense(Expense e,int pos);
    bool isThereKindExpense(std::string t);
    double calculateTotal();
    
    
};





#endif