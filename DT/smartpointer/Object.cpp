/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-02 12:22:27
 * @LastEditTime: 2019-05-02 12:50:10
 */

#include "Object.h"
#include <cstdlib>
#include <iostream>

using namespace std;

namespace DTLib {
void* Object::operator new(size_t size) throw()
{
    return malloc(size);
}

void Object::operator delete(void* p)
{
    free(p);
}

void* Object::operator new[](size_t size) throw()
{
    return malloc(size);
}

void Object::operator delete[](void* p)
{
    free(p);
}

Object::~Object()
{
}
}
