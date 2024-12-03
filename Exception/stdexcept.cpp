#include <iostream>
#include<stdexcept>
using namespace std;
int arraccess(int arr[],int index,int size){
    if(index<0||index>=size){
        throw out_of_range("index out of bound");
    }
    return arr[index];
}

int main()
{
   int numbers[]={10,20,30,40,50};
   int size=sizeof(numbers)/sizeof(numbers[0]);
   int index;
   cout<<"Enter index: ";
   cin>>index;
   try{
    int result=arraccess(numbers,index,size);
    cout<<"value at index: "<<index<<result;
   }
   catch(exception &e){
    cout<<"Exception:"<<e.what()<<endl;
   }
}
