#include <iostream>
#include <list>
using namespace std;

void display(list<int> lis)
{
    list<int>::iterator it;
    for (it = lis.begin(); it != lis.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
};
int main()
{
    list<int> list1;
    list<int> list2;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list1.pop_back();

    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(7);
    list2.push_back(5);
    cout << "List-1 is: ";
    display(list1);
    cout << "List-2 is: ";
    display(list2);

    cout << "Front of list is: " << list1.front() << endl;
    cout << "Back of list is: " << list1.back() << endl;
    cout << "Size of list is: " << list1.size() << endl;
    list2.sort();
    cout<< "Sorted List-2: ";
    display(list2);
    cout << "Merged List is: ";
    list1.merge(list2);
    display(list1);
}