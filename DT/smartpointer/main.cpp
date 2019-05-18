#include <iostream>
#include "DynamicList.h"

using namespace std;
using namespace DTLib;


int main()
{
    
    DynamicList<int> l(5);

    for (int i = 0; i < l.capacity(); i ++) {
        l.insert(0, i);
    }

    for (int i = 0; i < l.capacity(); i ++) {
        cout << l[i] << endl;
    }

    l[0] *= l[0];
    l.resize(10);
    l.insert(5, 50);
    try {
        l[5] = 5;
    } catch(const Exception& e) {
        cout << e.message() << endl;
        cout << e.location() << endl;
    }

    return 0;
}