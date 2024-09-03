#include<iostream>
using namespace std;
// Program for pointer to objects
class demo{
    public:
        int a;
    void print(){
        cout<<a<<"\n";
    }
};
    int main(){
        demo obj, *p;
        p=&obj;
        int demo::*ptr;
        obj.*ptr=100;
        obj.print();
        p->*ptr=200;
        p->print();
        return 0;
    }
