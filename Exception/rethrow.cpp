#include <iostream>
using namespace std;
void divison(int x, int y)
{
    cout << "Inside function"<<endl;
    try
    {
        if (y == 0)
        {
            throw y;
        }
        else
        {
            cout << "Division=" << x / y<<endl;
        }
    }
    catch (int)
    {
        cout << "caught inside function"<<endl;
        throw;
    }
}

int main()
{
    cout << "Inside function"<<endl;
    try
    {
        divison(10, 2);
        divison(10, 0);
    }
    catch (int)
    {
        cout << "caught inside main"<<endl;
    }
}
