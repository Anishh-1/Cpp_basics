#include <iostream>
using namespace std;

/*
Operators in C++:

1. Arithmetic Operators:
   These operators are used to perform basic arithmetic operations on numerical values.
   - '+' : Addition
   - '-' : Subtraction
   - '*' : Multiplication
   - '/' : Division (integer or floating point division)
   - '%' : Modulo (remainder of division)


2. Relational Operators:
   These operators are used to compare two values and return a boolean result. Its either true(1) or false(0).
   - '==' : Equal to
   - '!=' : Not equal to
   - '>' : Greater than
   - '<' : Less than
   - '>=' : Greater than or equal to
   - '<=' : Less than or equal to

3.Logical Operators:
   Logical operators are used to perform logical operations.
   - '&&' : Logical AND - returns true if both operands are true
   - '||' : Logical OR - returns true if at least one operand is true
   - '!'  : Logical NOT - inverts the boolean value.

*/

int main() {
    // Arithmetic operators example
    int a = 4, b = 7;

    int sum = a + b;
    cout << "Sum is = " << sum << endl;
    cout << "Difference is = " << (b - a) << endl; 
    cout << "Product is = " << (a * b) << endl; 
    
    // Division
    cout << "Quotient (integer division) is = " << (b / a) << endl; // Division, prints 1 (integer division 7 / 4)
    cout << "Quotient (floating-point division) is = " << (b / float(a)) << endl; // Floating-point division, prints 1.75 (7 / 4.0)

    // Modulo (remainder of division)
    cout << "Remainder is = " << (b % a) << endl; 

    // Relational operators example
    cout << "Is a equal to b? " << (a == b) << endl; 
    cout << "Is a not equal to b? " << (a != b) << endl; 
    cout << "Is a greater than b? " << (a > b) << endl; 
    cout << "Is a less than b? " << (a < b) << endl;  
    cout << "Is a greater than or equal to b? " << (a >= b) << endl; 
    cout << "Is a less than or equal to b? " << (a <= b) << endl; 

    // Logical operators example
    bool condition1 = (a < b); 
    bool condition2 = (a == 5); 
    cout << "AND (a < b && a == 5): " << (condition1 && condition2) << endl; 
    cout << "OR (a < b || a == 5): " << (condition1 || condition2) << endl; 
    cout << "NOT (!(a == 5)): " << !condition2 << endl;

    return 0;
}
