#include <iostream>
#include <list>
using namespace std;

void display(list<int>& lst) {
 list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
}

int main() {
    // Initialize two lists
    list<int> lst1 = {10, 20, 30, 40, 50};
    list<int> lst2 = {15, 25, 35, 45, 55};

    cout << "Initial list lst1: ";
    display(lst1);

    // Insertion
    lst1.push_front(5);      
    lst1.push_back(60);      
    cout << "After insertion (front and back), lst1: ";
    display(lst1);

    // Deletion
    lst1.pop_front();       
    lst1.pop_back();        
    cout << "After deletion (front and back), lst1: ";
    display(lst1);

    // Sorting
    lst1.sort();
    cout << "After sorting lst1: ";
    display(lst1);

    // Merging
    lst1.merge(lst2); 
    cout << "After merging lst2 into lst1: ";
    display(lst1);

    // Reversing
    lst1.reverse();
    cout << "After reversing lst1: ";
    display(lst1);

    return 0;
}
