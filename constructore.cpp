// constructore
#include <iostream>

using namespace std;

class complex{
    int a,b;
    public:
    complex(void);
    void print(){
        cout << a <<"+" << b <<"i";
    }
};
complex ::complex(){
    a=0;
    b=0;
    }
int main(){
          complex C1, C2, C3;
    C1.print();
    C2.print();
    C3.print();
}