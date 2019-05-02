/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-04-27 23:39:01
 * @LastEditTime: 2019-05-01 15:11:48
 */

#include "Exception.h"
#include <cstdlib>
#include <cstring>
#include <stdio.h>

using namespace std;

namespace DTLib {
void Exception::init(const char* message, const char* file, int line)
{
    m_message = strdup(message);

    if (file != NULL) {
        char sl[16] = { 0 };
        snprintf(sl, sizeof(sl), "%d", line);
        m_location = static_cast<char*>(malloc(strlen(file) + strlen(sl) + 2));
        strcpy(m_location, file);
        m_location = strcat(m_location, ":");
        m_location = strcat(m_location, sl);
    } else {
        m_location = NULL;
    }
}

Exception::Exception(const char* message)
{
    init(message, NULL, 0);
}

Exception::Exception(const char* file, int line)
{
    init(NULL, file, line);
}

Exception::Exception(const char* message, const char* file, int line)
{
    init(message, file, line);
}

Exception::Exception(const Exception& e)
{
    m_message = strdup(e.m_message);
    m_location = strdup(e.m_location);
}

Exception& Exception::operator=(const Exception& e)
{
    if (this != &e) {
        free(m_location);
        free(m_message);

        m_message = strdup(e.m_message);
        m_location = strdup(e.m_location);
    }

    return *this;
}

const char* Exception::message() const
{
    return m_message;
}

const char* Exception::location() const
{
    return m_location;
}

Exception::~Exception()
{
    free(m_message);
    free(m_location);
}
}