#include "MyClass.h"
#include <iostream>

using namespace std;

void func1(void)
{
    MyClass* obj = MyClass::GetInstance();

    obj->set_value(1);
    cout << "func1: Address of MyObject is " << obj << " and value is " <<
        obj->get_value() << '\n';
}
void func2(void)
{
    MyClass* obj = MyClass::GetInstance();

    cout << "func1: Address of MyObject is " << obj << " and value is " <<
        obj->get_value() << '\n';
}
int main()
{
    func1();
    func2();
}