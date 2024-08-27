#include <iostream>
using namespace std;
class emp1{
    char name[50];
    float age;
    public:
    void getdata(){
        cout << "enter name: ";
        cin >> name;
        cout << "enter your age: ";
        cin >> age;
    }

    void putdata()
    {
        cout << name << "\n";
        cout << age << "\n";
    }
} ;
int main(){
    emp1 manager[3];
    int i;
    for(i=0; i<3; i++)
    {
        cout << "detail of manager" << (i+1) << endl;
        manager[i].getdata();
    }
for(i=0; i<3; i++)
    {
        cout << "manager" << (i+1) << endl;
        manager[i].putdata();
    }
    return 0;
    
}