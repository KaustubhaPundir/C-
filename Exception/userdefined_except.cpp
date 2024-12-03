#include<iostream>
#include<exception>
using namespace std;

class myexception:public exception{
    virtual const char * what() const throw(){
        return "Divison by 0 exception occured";
    }
};

int main(){
    try{
        int x,y=0;
        cout<<"Enter x: "<<endl;
        cin>>x;
        cout<<"Enter y: "<<endl;
        cin>>y;
        if(y==0){
            throw myexception();
        }
        else{
            cout<<x/y;
        }
    }
    catch(exception &e){
        cout<<e.what();
    }
    return 0;
}
