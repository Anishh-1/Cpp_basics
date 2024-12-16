#include <iostream>
#include <vector>
using namespace std;

/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
*/
int main(){
    // n^n = 0 ,, n^0 = n
    vector<int> vec = {3,4,2,4,2};
    int result;
    for(int value : vec){
        result ^= value;
    }
    cout<< result<< endl;


    return 0;
}