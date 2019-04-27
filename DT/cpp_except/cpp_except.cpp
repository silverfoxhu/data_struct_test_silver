/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-04-27 22:33:01
 * @LastEditTime: 2019-04-27 23:18:30
 */

#include <iostream>

using namespace std;

double divide(double a, double b)
{
    const double delta = 0.00000001;
    double ret = 0;

    if (!((-delta < b) && (b < delta))) {
        ret = a / b;
    } else {
        throw 0;
    }

    return ret;
}

void Demo1()
{
    try
    {
        throw 'c';
    }
    catch(int i)
    {
        cout << "catch int " << endl;
    }
    catch(char c) 
    {
        cout << "catch char" << endl;
    }
}

int main()
{
    cout << "main() " << endl;
    try {
        divide(1, 0);
    } catch (...){
        cout << "in catch" << endl;
    }

    Demo1();

    

    return 0;
}