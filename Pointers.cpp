// Array of pointers
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"value of a- \n"<<a;
    cout<<"value of a- \n"<<*ptr;
    cout<<"value of a- \n"<<*(&a);
    cout<<"value of a- \n"<<*(*(&ptr));
    cout<<"value of a- \n"<<&a;
    cout<<"value of a- \n"<<ptr;
    return 0;
}
