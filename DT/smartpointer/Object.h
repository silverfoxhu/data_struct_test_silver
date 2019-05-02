/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-02 12:09:17
 * @LastEditTime: 2019-05-02 12:13:50
 */

#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

namespace DTLib {
class Object {
public:
    void* operator new(size_t size) throw();
    void operator delete(void* p);
    void* operator new[](size_t size) throw();
    void operator delete[](void* p);
    virtual ~Object() = 0;
};
}

#endif // !OBJECT_H