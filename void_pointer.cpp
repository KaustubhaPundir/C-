#include<iostream>
using namespace std;

int main(){
    void *ptr;
    float a =10.2;
    ptr =&a;
    // cout << ptr;
    
    cout << *((float*)ptr);
    cout<<ptr;
    return 0;
}