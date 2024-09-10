#include<iostream>
using namespace std;

class number {
int a;
public :
number()
{
    a=0;

}
number(int num)
{
    a=num;
}
number(number& obj)
{
    a=obj.a;
    cout<<"copy const called"<<endl;

}
void display()
{
    cout<< " the value of object is :"<<a<<endl;

}
};

int main()
{
    number x,y,z(50);
    number z1(x);
    z1.display();
    number z2=y;
    z2.display();
    z1=z;
    z1.display();
    return 0;
}