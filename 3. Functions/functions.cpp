#include <iostream>
using namespace std;

/*
    Functions:
         Blocks of code designed to perform a specific task.
         Think as a black box that takes an input and returns an output.

         returnType printHello(){
                cout << "Hello";
         } 
    
    Parameters: inputs taken by functions
            returnType name (type p1, type p2){

            }
    -helps to minimize redundancy.
    -modularity of code.

        Literals: Fixed values like 3, 'A', 3.14, "Hello", directly written in the code.
        Arguments: Actual values passed to a function when it is called. (e.g., sum(5, 4);).
        Parameters: Variables defined in a function to receive arguments. (e.g., int sum(int x, int y) { return x + y; }).
*/

// function definition

    void printHello(){
        cout << "Hello" << endl;

    }

    int sum (int a , int b) {
        return  a + b;
    }
    
    int minValue(int a , int b, int c){
        
        if (a < b && a < c) {
            return a;
        } else if (b < c) {
            return  b;
        } else {
            return c;
        }
    }


    int main(){
    
        printHello();
        cout << sum(3 , 5) << endl;
        cout << "The minimum value is: " << minValue( 4, 7, 1 ) << endl;

    return 0;
    }