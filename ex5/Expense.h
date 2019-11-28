#ifndef _EXPENSES_H
#define _EXPENSES_H
#include <string>
class Expense
{
private:
    double value;
    std::string expenseType;
    const static int maximum = 10;
public:    
    Expense();
    Expense(std::string t, double v);
    double getValue();
    std::string getExpensesType();
    void setExpenseType(std::string t);
    void setValue(double v);
    

};

#endif