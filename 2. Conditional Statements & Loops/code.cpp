#include <iostream>
using namespace std;

/*
Conditional Statements:

It allows us to make decisions in our program.
-> 2 Types:

if else: 

   if (condition) { 
       do this
    }
    else {
    do sth else
    }

if-else if-else:

It allows us to check multiple conditions one by one.
-> execute the first one that is true.


    if (condition1) {
        do this
    } else if (condition2) {
        do this one
    } else {
        do something else
    }


*/

int main(){

    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0){
        cout<< "The number is even.\n";
    }
    else{
         cout<< "The number is odd.\n";
    }

return 0;
}