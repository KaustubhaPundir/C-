#include <iostream>
using namespace std;

class Base
{
protected:
    int x;

public:
    virtual void fun() = 0;
    Base(int i)
    {
        x = i;
        cout << "Base Class Constructor\n";
    }
};
class Derived : public Base
{
    int y;

public:
    Derived(int i, int j) : Base(i)
    {
        y = j;
        cout << "Derived Constructor\n";
    }
    void fun()
    {
        cout << "x = " << x << ",y = " << y<<endl;
    }
};
int main()
{
    Derived d(4, 5);
    d.fun();
    Base *bptr = new Derived(6, 7);
    bptr->fun();
}