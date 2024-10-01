#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
    }
    complex(int c, int d)
    {
        a = c;
        b = d;
    }
    void putvalue()
    {
        cout << "complex No " << a << " + " << b << "i" << "\n";
    }
    // complex operator + (complex c)
    // {
    //     complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return temp;
    // }
    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    // complex temp;
    // temp.a = c1.a + c2.a;
    // temp.b = c1.b + c2.b;
    return complex(c1.a + c2.a, c1.b + c2.b);
}
int main()
{
    complex c1, c2, c3;
    c1 = complex(2, 4);
    c2 = complex(4, 4);
    c3 = c1 + c2;
    c3.putvalue();

    return 0;
}
