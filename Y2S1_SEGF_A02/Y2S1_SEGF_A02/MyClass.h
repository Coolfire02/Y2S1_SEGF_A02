#pragma once
#include "SingletonTemplate.h"

class MyClass : public SingletonTemplate<MyClass>
{
    friend SingletonTemplate<MyClass>; 
private:
    int m_value;
protected:
    MyClass() : m_value(0) {};
    ~MyClass() {};
public:
    bool Init(void) { return true; }
    bool Init(int value) {
        m_value = value;
        return true;
    }

    int get_value() { return m_value; }
    void set_value(int value) { m_value = value; }
};

