//Program to Demonstrate Constructor Overloading.
#include<iostream>
using namespace std;
class complex{
	float real,imag;
	public:
	complex()
	{
	}
	complex(float a)
	{
	real=imag=a;
	}
	complex(float r,float i)
	{
	real=r;
	imag=i;
	}
	friend complex sum(complex,complex);
	friend void show(complex);
};
complex sum(complex c1,complex c2)
{
complex c3;
c3.real=c1.real+c2.real;
c3.imag=c1.imag+c2.imag;
return (c3);
}
void show(complex c)
{cout<<c.real<<"+"<<c.imag<<"i"<<endl;
}
int main()
{
complex A(2.7,3.5);
complex B(1.6);
complex C;
C=sum(A,B);
cout<<"A=";show(A);
cout<<"B=";show(B);
cout<<"C=";show(C);
return 0;
}