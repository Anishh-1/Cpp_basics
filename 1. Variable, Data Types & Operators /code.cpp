#include <iostream>
using namespace std;

// This is the starting point of code execution.

/* 
Variables: Containers to store data.
Naming convention: Variable names should start with a letter (a-z, A-Z) or an underscore (_); 
they cannot start with a number.
--> Variable names are also called identifiers.

Data Types:
int - 4 bytes (typically) - used for integer values.
char - 1 byte - stores a single character.
float - 4 bytes - used for decimal values (single precision).
bool - stores either true (1) or false (0).
double - 8 bytes - used for double-precision floating-point numbers.

Type casting:
Converting data from one type to another. 
For example, casting a double to an int.

Input in C++:
The cin statement is used to take user input.
Syntax: cin >> variable_name;
*/

int main() {
    int age = 20;           // Integer to store age
    char grade = 'A';       // Char to store a single character (e.g., grade)
    float PI = 3.14f;       // Float to store decimal numbers
    bool isRaining = false; // Bool to store true/false (weather status)
    double price = 100.99;  // Double to store price with higher precision

    cout << age << endl;    // Prints the value of age
    cout << grade << endl;  // Prints the character stored in grade
    cout << PI << endl;     // Prints the value of PI
    cout << isRaining << endl; // Prints 0 (false) or 1 (true)
    cout << price << endl;  // Prints the price value

    int value = grade;      // Implicitly converts char to int (ASCII value of 'A')
    int newPrice = (int)price; // Explicit type casting from double to int
    cout << value << endl;  // Prints the ASCII value of grade ('A' -> 65)
    cout << newPrice << endl; // Prints the integer value of price (100)

    // Taking input from user.
    int newAge;
    cout << "Enter the age: ";
    cin >> newAge;             //take input
    cout << "Your age is: " << newAge << endl; // Print the value

    return 0;
}
