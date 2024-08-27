//Array of Object

#include <iostream>
using namespace std;
class empl{
    char name[50];
    float age;
    public:
    void gatdata()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter your Age: ";
        cin>>age;
    }
    void putdata()
    {
        cout<< name <<endl;
        cout<< age <<endl;
    }
};
int main()
{
    empl manager[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        cout<<"Detail of Manager: "<< (i+1) <<endl;
        manager[i].gatdata();
    }
    for ( i = 0; i < 3; i++)
    {
        cout<<"Manager: " <<endl <<(i+1) << ")";
        manager[i].putdata();
    }
    return 0;
}