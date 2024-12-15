#include <iostream>
using namespace std;

int main(){
    int n = 4;
     //for(int i = 1 to n) n times
     //for(int i = 0 to n-1) n times
     for(int i = 1; i<=n ; i++){//outer
        for(int j = 1; j<=n ; j++){
            cout << j << " ";

        }
        cout << endl;
     }

     cout << endl;

     for(int i = 1; i<=6 ; i++){//outer
        for(int j = 1; j<=6 ; j++){
            cout << "* ";

        }
        cout << endl;
     }

     cout << endl;

     for(int i = 0; i<n ; i++){//outer
        char ch='A';
        for(int j = 0; j<n ; j++){
            cout << ch <<" ";
            ch = ch+1;
        }
        cout << endl;
     }
    return 0;
}
