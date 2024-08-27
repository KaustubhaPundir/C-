#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int *ptr[5];
    cout<<"Enter elements- ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        ptr[i]=&arr[i];

    }
    cout<<"the values are- ";
    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr[i]<<endl;
    }
    
    
    return 0;
}
