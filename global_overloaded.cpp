#include <iostream>
#include <stdlib.h>
using namespace std;
class complex
{
    float real, img;

public:
    complex(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    void getvalue(int a, int b)
    {
        real = a;
        img = b;
    }
    void display()
    {
        cout << real << "+" << img << endl;
    }
};
void *operator new(size_t size)
{
    void *ptr;
    ptr = malloc(size);
    cout << "Operator New Overloaded\n";
    cout << "The size allocated is " << size << " Bytes." << endl;
    return ptr;
}
void operator delete(void *ptr)
{
    cout << "Delete op overloaded\n";
    cout << "Free Memory\n";
    free(ptr);
}
int main()
{
    complex *p1;
    // p1 = new complex(5, 6); // New op overloaded function
    // p1->display();
    int* pi;
    pi = new int();
    delete (p1); // delete op function called
    return 0;
}