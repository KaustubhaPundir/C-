#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string>& m) {
    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << itr->first << " => " << itr->second << endl;
    }
    cout << endl;
}

int main() {
    // Initialize 
    map<int, string> map1 = {{1, "apple"}, {2, "banana"}, {3, "cherry"}};
    map<int, string> map2 = {{4, "date"}, {5, "elderberry"}, {6, "fig"}};

    cout << "Initial map1: ";
    printMap(map1);

    // Insertion
    map<int, string>::iterator itr = map1.begin(); 
    map1.insert(itr, {7, "grape"});  
    map1[8] = "honeydew";  
    cout << "After insertion, map1: ";
    printMap(map1);

    // Deletion
    itr = map1.find(2);  
    if (itr != map1.end()) {
        map1.erase(itr);
    }
    cout << "After deletion (key 2), map1: ";
    printMap(map1);

    // Sorting
    cout << "After sorting (already sorted by keys), map1: ";
    printMap(map1);

    // Merging
    map1.merge(map2);  // Merges map2 into map1
    cout << "After merging map2 into map1: ";
    printMap(map1);
    return 0;
}
