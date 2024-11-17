#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Enter the current hour (24-hour format): ";
    cin >> hour;

    if( hour < 0 || hour > 23) {
        cout << "Invalid input! Please enter a valid hour (0-23).\n";
    }
    else {
       if (hour >= 5 && hour < 12) {
            cout << "Good Morning!\n";
        } 
        else if (hour >= 12 && hour < 17) {
            cout << "Good Afternoon!\n";
        } 
        else if (hour >= 17 && hour < 21) {
            cout << "Good Evening!\n";
        } 
        else {
            cout << "Good Night!\n";
        }
    }

    return 0;
}
