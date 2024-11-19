#include <iostream>
using namespace std;

long factorial(int n){
    long value = 1;
    for(int i = 1 ; i <= n ; i++){
        value *= i;
    }
    return value;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number > 0 && number <= 20){
        cout << "The factorial of given number is: " << factorial(number) << endl;
    } else{
        cout<<"Please enter a number between 0 and 20. \n"; 
    }
    
    

    return 0;
}