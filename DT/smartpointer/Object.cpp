/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-02 12:22:27
 * @LastEditTime: 2019-05-02 12:32:48
 */

#include "Object.h"
#include <cstdlib>
#include <iostream>

using namespace std;

namespace DTLib {
void* Object::operator new(size_t size) throw()
{
    cout << "Object::operator new" << endl;
    return malloc(size);
}

void Object::operator delete(void* p)
{
    cout << "Object::operator delete" << endl;
    free(p);
}

void* Object::operator new[](size_t size) throw()
{
    cout << "Object::operator new[]" << endl;
    return malloc(size);
}

void Object::operator delete[](void* p)
{
    cout << "Object::operator delete[]" << endl;
    free(p);
}

Object::~Object()
{
}
}
