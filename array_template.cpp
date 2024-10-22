#include <iostream>
using namespace std;

template <class T>
class Array
{
    T arr[10];
    int size;

public:
    Array()
    {
        size = 10;
    }
    T getvalue(int index){
        return arr[index];
    }
    void insert(int index, T value){
        arr[index] = value;
    }
};
int main(){
    Array<int>O;
    O.insert(0,10);
    Array<float>P;
    P.insert(1,0.5f);
    cout<< O.getvalue(0)<<endl;
    cout<< P.getvalue(1)<<endl;
    return 0;

}