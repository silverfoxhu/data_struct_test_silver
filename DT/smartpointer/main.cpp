#include <iostream>
#include "Exception.h"

using namespace std;
using namespace DTLib;

int main()
{
    try
    {
        THROW_EXCEPTION(ArithmeticException, "test");
    }
    catch(const ArithmeticException& e)
    {
        cout << "catch a ArithmeticException!" << endl;
        cout << e.message() << endl;
        cout << e.location() << endl;
    }
    
    return 0;
}