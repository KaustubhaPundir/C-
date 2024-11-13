#include <iostream>

#define SIZE 5

using namespace std;

class STACK
{
private:
    int num[SIZE];
    int top;

public:
    STACK()
    {
        top = -1;
    }

    int isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int isFull()
    {
        if (top == (SIZE - 1))
            return 1;
        else
            return 0;
    }

    int push(int n)
    {
        try
        {
            if (isFull())
            {
                throw top;
            }
            ++top;
            num[top] = n;
            return n;
        }
        catch (int i)
        {
            cout << "overflow exception"<<endl;
        }
    }

    int pop()
    {
        try
        {
            if (isEmpty())
            {
                throw top;
            }
            int temp;
            temp = num[top];
            --top;
            return temp;
        }
        catch (int i)
        {
            cout << "underflow"<<endl;
        }
    }

    void displayItems()
    {
        int i;
        cout << "STACK is: ";
        for (i = (top); i >= 0; i--)
            cout << num[i] << " ";
        cout << endl;
    }
};

int main()
{
    STACK stk;
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.push(7);


    
    return 0;
}
