///copy and shallow constructor
#include <iostream>
using namespace std;
class Demo
{
public: 
int a;
int *p;
Demo() 
{
a = 0;
p = new int(10);
cout << "Default constructor called !!!" << endl;
}
Demo(Demo &obj){
cout << "Copy Constructor called !!!" << endl;
a = obj.a;
p = new int; 
*p = *(obj.p); 
}
};
int main()
{
Demo d1;
Demo d2(d1);

cout << "d1.a = " << d1.a << endl;
cout << "d1.p = " << *(d1.p) << endl;
cout << "d2.a = " << d2.a << endl;
cout << "d2.p = " << *(d2.p) << endl;
d1.a = 50;
*(d1.p) = 50;
cout << "after change !!" << endl;
cout << "d1.a = " << d1.a << endl;
cout << "d1.p = " << *(d1.p) << endl;
cout << "d2.a = " << d2.a << endl;
cout << "d2.p = " << *(d2.p) << endl;
return 0;
}