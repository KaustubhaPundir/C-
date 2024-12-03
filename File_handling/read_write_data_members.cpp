#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("file.txt");
    char name[20];
    float price;
    cout<<"Enter name of the product:";
    cin>>name;
    cout<<"Enter the price of the product:";
    cin>>price;
    fout<<name<<endl;
    fout<<price<<endl;
    fout.close();
    ifstream fin("file.txt");
    fin>>name;
    fin>>price;
    cout<<"Name of the product: "<<name<<endl;
    cout<<"Price of the product: "<<price<<endl;
    fin.close();
    return 0;
}
