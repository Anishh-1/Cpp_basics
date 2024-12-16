#include <iostream>
#include <vector>
using namespace std;
/*
    a dynamic array that can grow or shrink in size
    
    Vectors Syntax:
    vector<int> vec;
    vector<int> vec ={1,2,3}
    vector<int>vec(3,0) , (size, value)
                        
*/
    int main(){
         vector<int> vec ={1,2,3}; //0
         cout<< vec[0] <<endl;

         vector<int> vect(5,0); //0
         //cout<< vect[0] <<endl;
         for(int i : vect){
            cout<< i << endl;
         }
         cout<< endl;

         vector<char> c ={'a','b','c','d','e'};
         for(char value : c){
            cout<< value << endl;
         }

    return 0;
    }