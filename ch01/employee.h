//guard
#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>

using namespace std;

class Employee
{
    public:
        // Empty constructor
        Employee();

        // asks for input
        void readInto();

        bool isSentinel() const;

        void printOut() const;

    protected:
        string name;
        double grossPay;

        const static string EMPTY_STRING;
        const static string NAME_SENTINEL;
        const static double GROSS_PAY_SENTINEL;
}; //END EMPLOYEE
#endif
