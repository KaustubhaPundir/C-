#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
    void setdata(int v1, int v2){
        a=v1;
        b=v2;
    }
    void printnum(){
        cout<<"complex No " << a << " + " << b << "i"<<"\n";
    }    
    void sum(complex o1, complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setdata(1,2);
    c1.printnum();
    c2.setdata(4,3);
    c2.printnum();
    c3.sum(c1,c2);
    c3.printnum();
    return 0;
}