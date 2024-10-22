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
    void disp()
    {
        cout << "Function of derived class\n";
    }
};
int main()
{
    Base *bptr;
    Derived obj;
    bptr = & obj;
    bptr -> disp();
    return 0;
}