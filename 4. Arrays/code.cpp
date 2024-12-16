#include <iostream>
using namespace std;
  //Arrays are used to store homogeneous data. It is like containers.
    // -> stores same type of data and contigeous in memory + linear

int main(){
    int marks[5] = {49, 34, 53, 43, 32};
  
    double price[] = {98.34, 23.43 ,34}; //3

    // to access the data 
    // indexing starts from 0
    cout<< marks[0] << endl;// marks at index 0  1st position
    cout<< marks[1] << endl;
    cout<< marks[2] << endl;
    cout<< marks[3] << endl;
    cout<< marks[4] << endl;// marks at index 4  last position (size-1)
    //cout<< marks[5] << endl;//-> gives warning

    cout<< endl;


    //use loops : 0 to size-1

    int sizeOfArray = sizeof(marks)/sizeof(int);

    for(int i=0; i<sizeOfArray ;i++){
        cout<<marks[i] << endl;
    }

    cout<< endl;

    //Find smallest value in array
    int nums[] ={5, 6, 3, 2, 4, 1 , 8 , 9};
    int sizeOfNums = 8;
    int smallest = INT_MAX;
    int maxValue = INT_MIN;

    for(int i = 0; i < sizeOfNums ; i++){

        if(nums[i] < smallest ){
            smallest = nums[i];
        }
        
        //-> smallest = min(nums[i] , smallest); also max for max value
        maxValue = max(nums[i], maxValue);
    }
    cout << "Smallest value is " << smallest << endl;
    cout << "Max value is " << maxValue << endl;



     return 0;
}