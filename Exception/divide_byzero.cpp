#include<iostream>
using namespace std;
void div(int x,int y,int z){
    if((x-y)!=0){
        cout<<"Division="<<z/(x-y)<<endl;
    }
    else{
        throw(x-y);
    }
}


int main(){
    try{
        div(10,20,30);
        div(10,10,30);
    }
    catch(int i){
        cout<<"Division by zero exception caught"<<endl;
    }
    cout<<"End of try catch system";
}
