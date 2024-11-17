#include <iostream>
using namespace std;
/*
Loops are used for doing repetitive tasks.
-> 3 Types.
1. For loop
2. While loop
3. Do while loop

*/

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

   
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl; 

    

    /*
    Same thing can be done through while and do-while loops.


    /while loop:

     int i = 1;  
    while (i <= n) {
        cout << i << " ";
        i++;  
    }

    cout << endl;
     
    //do while loop:

     int i = 1; 
    do {
        cout << i << " ";
        i++;  
    } while (i <= n);

    cout << endl; 
    
    */

    return 0;

}