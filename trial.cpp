#include <iostream>
using namespace std;
class item
{
    static int count;
    int num;

public:
    void getdata(int a)
    {
        num = a;
        count++;
    }
    static void getcount()
    {
        cout << "value of count: " << count << "\n";
    }
};
int item :: count; 
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(10);
    b.getdata(20);
    c.getdata(30);
    cout << "After getting data= ";
    a.getcount();
    b.getcount();
    c.getcount();
}