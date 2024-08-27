//call by value

#include<iostream>
using namespace std;

void swapnumbers(int num1, int num2){
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
}
int main(){
    int num1=2,num2=4;
    cout<<"Values before swapping- ";
    cout<<"num1- "<<num1<<" num2- "<<num2;
    swapnumbers(num1,num2);
    cout<<"\nValues after swapping- ";
    cout<<"num1- "<<num1<<" num2- "<<num2;
    return 0;
}