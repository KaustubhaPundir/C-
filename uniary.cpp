#include<iostream>
using namespace std;

class demo {
    int x, y, z;
public:
    void getdata(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    void display() const {
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
    }

    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    demo S;
    S.getdata(10, 20, 30);
    
    S.display();

    -S;

    S.display();

    return 0;
}
