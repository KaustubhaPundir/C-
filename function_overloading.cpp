#include<iostream>
#include<stdlib.h>
using namespace std;

class sample{
        int a,b,c;

public:
    void getvalue(int p, int q,int r){
        a=p;
        b=q;
        c=r;
    }
    void putvalue(){
        cout<<a<<","<<b<<","<<c<<endl;
    }
    void operator ()(int p,int q,int r){
        a=p;
        b=q;
        c=r;
    }
};
int main(){
    sample s1;
    s1.getvalue(10,20,30);
    s1.putvalue();
    return 0;
}
// constructor overloading using different structures.