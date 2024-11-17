#include <iostream>
using namespace std;

/*
Syntax:
    condition ? statement_1 : statement_2 ;
                 (true)         (false)
*/

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    
     (number % 2 == 0) ? cout << "The number is even.\n" : cout << "The number is odd.\n";


    return 0;
}