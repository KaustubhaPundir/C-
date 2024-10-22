#include <iostream>
using namespace std;

class Base
{
public:
    virtual void disp()
    {
        cout << "Function of base class\n";
    }
};
class Derived : public Base
{
public:
    void disp()
    {
        cout << "Function of derived class\n";
    }
};
int main()
{
    Base b;
    Derived d;
    // Base *bptr = dynamic_cast<Base *>(&d);
    Derived *dptr = dynamic_cast<Derived *>(&b);
    if (dptr != NULL)
    {
        cout << "Successfull\n";
    }
    else
    {
        cout << "Unsuccessfull\n";
    }

    return 0;
}