#include <iostream>
using namespace std;

class Demo
{
    int x, y, z;

public:
    Demo()
    {
        x = y = z = 0;
    }
    Demo(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Demo operator,(Demo obj)
    {
        Demo temp;
        temp.x = obj.x;
        temp.y = obj.y;
        temp.z = obj.z;
        return temp;
    }
    void display()
    {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
        cout << "z:" << z << endl;
    }
};
int main()
{
    Demo d1(1, 3, 5);
    Demo d2(2, 4, 6);
    Demo d3;
    d3 = d1, d2;
    d3.display();
    Demo d4(10, 20, 30);
    d3 = d1, d2, d4;
    return 0;
};