#include <iostream>
using namespace std;

int sumOfN(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;  
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The sum of numbers is: " << sumOfN(number) << endl;

    return 0;
}