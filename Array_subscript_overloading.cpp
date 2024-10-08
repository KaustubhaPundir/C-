#include <iostream>
using namespace std;

class Demo
{
    int a[3];
public:
    Demo()
    {
        a[0] = 0;
        a[1] = 0;
        a[2] = 0;
    }
    Demo(int x,int y,int z)
    {
        a[0] = x;
        a[1] = y;
        a[2] = z;
    }
    void putvalue()
    {
        cout << "a[0]:" << a[0] << endl;
        cout << "a[1]:" << a[1] << endl;
        cout << "a[2]:" << a[2] << endl;
    }
    int operator [](int loc){
        return a[loc];
    }
};
int main()
{
    Demo d1(4,5,6);
    // Demo d4(10,20,30);
    // d3=d1,d2,d4;
    // d3.putvalue();
    // return 0;
    d1.putvalue();
    cout<<d1[0]<<endl;
    cout<<d1[1]<<endl;
    cout<<d1[2];

    return 0;
}
