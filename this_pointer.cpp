#include <iostream>

// Program to use this for pointer to objects
using namespace std;
class Demo
{
    int d;

public:
    void input(int d)
    {
        this->d = d;
    }
    void show()
    {
        cout << "Value of d - " << d;
    }
};
int main()
{
    Demo obj;
    obj.input(100);
    obj.show();
    return 0;
};