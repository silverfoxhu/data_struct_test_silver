/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-04-27 23:38:45
 * @LastEditTime: 2019-04-28 00:04:19
 */

#ifndef EXCEPTION_H
#define EXCEPTION_H

namespace DTLib {
class Exception {
protected:
    char* m_message;
    char* m_location;
    void init();

public:
    Exception(const char* message);
    Exception(const char* file, int line);
    Exception(const char* message, const char* file, int line);
    
};
}
#endif // !EXCEPTION_H
