#include <iostream>
using namespace std;

class Base
{
public:
    void disp()
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
    Base obj;
    Derived *dptr;
    dptr = (Derived *)&obj;
    dptr->disp();
    return 0;
}