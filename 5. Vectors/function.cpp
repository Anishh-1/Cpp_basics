#include <iostream>
#include <vector>
using namespace std;

/*functions in vectors:
    size : Returns the number of elements in the vector.
    push_back(value) : Adds an element to the end of the vector.
    pop_back : Removes the last element of the vector.
    front : Returns a reference to the first element.
    back : Returns a reference to the last element.
    at(index) : Returns a reference to the element at the specified index (bounds-checked).
*/

int main(){
    vector<int> vec;

    cout<< "size = "<< vec.size() << endl;

    vec.push_back(10); // vec: [10]
    vec.push_back(20); // vec: [10, 20]
    vec.push_back(30); // vec: [10, 20, 30]
    
     for (int val : vec) {
        cout << val << endl;
    }

    cout << "Size: " << vec.size() << endl;      // 3
    cout << "First Element: " << vec.front() << endl; // 10
    cout << "Last Element: " << vec.back() << endl;   // 30
    cout << "Element at index 1: " << vec.at(1) << endl; // 20

    vec.pop_back(); // [10, 20]
    cout << "After pop_back, Last Element: " << vec.back() << endl; // 20


    return 0;
}