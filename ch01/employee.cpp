#include <iostream>
#include <iomanip>  //used to format objects
#include "employee.h"

Employee::Employee( )
{
    name = EMPTY_STRING;
    grossPay = 0.00;
}// default Constructor

void Employee::readInto()
{
    const string NAME_AND_PAY_PROMPT = 
        "Please enter a name and gross pay. To quit, enter ";

    cout << NAME_AND_PAY_PROMPT << NAME_SENTINEL << " " << GROSS_PAY_SENTINEL;
    cin >> name >> grossPay;
} // readInto

bool Employee::isSentinel( ) const
{
    if (name == NAME_SENTINEL && grossPay == GROSS_PAY_SENTINEL)
    {
        return true;
    }
    return false;
}// isSentinel

void Employee::printOut( ) const
{
    cout << name<<": $" << setiosflags (ios::fixed) << setprecision (2)
        << grossPay << endl;
} // printOut
const string Employee::EMPTY_STRING = "";
const string Employee::NAME_SENTINEL = "*";
const double Employee::GROSS_PAY_SENTINEL = -1.0;
