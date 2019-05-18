/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-04-27 23:38:45
 * @LastEditTime: 2019-05-03 16:13:48
 */

#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "Object.h"
#include <iostream>

namespace DTLib {

#define THROW_EXCEPTION(e, m) (throw e(m, __FILE__, __LINE__))

class Exception : public Object {
protected:
    char* m_message;
    char* m_location;

    void init(const char* message, const char* file, int line);

public:
    Exception(const char* message);
    Exception(const char* file, int line);
    Exception(const char* message, const char* file, int line);

    Exception(const Exception& e);
    Exception& operator=(const Exception& e);

    virtual const char* message() const;
    virtual const char* location() const;

    virtual ~Exception() = 0;
};

class ArithmeticException : public Exception {
public:
    ArithmeticException()
        : Exception(NULL)
    {
    }
    ArithmeticException(const char* message)
        : Exception(message)
    {
    }
    ArithmeticException(const char* file, int line)
        : Exception(file, line)
    {
    }
    ArithmeticException(const char* message, const char* file, int line)
        : Exception(message, file, line)
    {
    }

    ArithmeticException(const ArithmeticException& e)
        : Exception(e)
    {
    }
    ArithmeticException& operator=(const ArithmeticException& e)
    {
        Exception::operator=(e);
        return *this;
    }
};

class IndexOutofBoundsException : public Exception {
public:
    IndexOutofBoundsException()
        : Exception(NULL)
    {
    }
    IndexOutofBoundsException(const char* message)
        : Exception(message)
    {
    }
    IndexOutofBoundsException(const char* file, int line)
        : Exception(file, line)
    {
    }
    IndexOutofBoundsException(const char* message, const char* file, int line)
        : Exception(message, file, line)
    {
    }

    IndexOutofBoundsException(const IndexOutofBoundsException& e)
        : Exception(e)
    {
    }
    IndexOutofBoundsException& operator=(const IndexOutofBoundsException& e)
    {
        Exception::operator=(e);
        return *this;
    }
};

class NoEnoughMemoryException : public Exception {
public:
    NoEnoughMemoryException()
        : Exception(NULL)
    {
    }
    NoEnoughMemoryException(const char* message)
        : Exception(message)
    {
    }
    NoEnoughMemoryException(const char* file, int line)
        : Exception(file, line)
    {
    }
    NoEnoughMemoryException(const char* message, const char* file, int line)
        : Exception(message, file, line)
    {
    }

    NoEnoughMemoryException(const NoEnoughMemoryException& e)
        : Exception(e)
    {
    }
    NoEnoughMemoryException& operator=(const NoEnoughMemoryException& e)
    {
        Exception::operator=(e);
        return *this;
    }
};

class InvalidParameterException : public Exception {
public:
    InvalidParameterException()
        : Exception(NULL)
    {
    }
    InvalidParameterException(const char* message)
        : Exception(message)
    {
    }
    InvalidParameterException(const char* file, int line)
        : Exception(file, line)
    {
    }
    InvalidParameterException(const char* message, const char* file, int line)
        : Exception(message, file, line)
    {
    }

    InvalidParameterException(const InvalidParameterException& e)
        : Exception(e)
    {
    }
    InvalidParameterException& operator=(const NoEnoughMemoryException& e)
    {
        Exception::operator=(e);
        return *this;
    }
};

class NullPointerException : public Exception {
public:
    NullPointerException()
        : Exception(NULL)
    {
    }
    NullPointerException(const char* message)
        : Exception(message)
    {
    }
    NullPointerException(const char* file, int line)
        : Exception(file, line)
    {
    }
    NullPointerException(const char* message, const char* file, int line)
        : Exception(message, file, line)
    {
    }

    NullPointerException(const NullPointerException& e)
        : Exception(e)
    {
    }
    NullPointerException& operator=(const NoEnoughMemoryException& e)
    {
        Exception::operator=(e);
        return *this;
    }
};
}
#endif // !EXCEPTION_H
