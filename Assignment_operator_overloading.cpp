#include <iostream>
using namespace std;

class Demo
{
public:
    int x;
    Demo()
    {
        x = 0;
    }
    Demo(int x)
    {
        this->x = x;
    }
    void putvalue()
    {
        cout << "x:" << x << endl;
    }
    void operator=(Demo obj)
    {
        x = obj.x;
    }
};
int main()
{
    Demo d1(1);
    Demo d2(2);
    d2 = d1;
    // Demo d4(10,20,30);
    // d3=d1,d2,d4;
    // d3.putvalue();
    // return 0;
    d2.putvalue();
    return 0;
}
