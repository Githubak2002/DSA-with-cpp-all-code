// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]


#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void printarr(vector<int>arr){
    for(int b = 0; b < arr.size();b++)
        cout<<arr[b]<<" ";
    cout<<"\n";
}

vector<int> findDuplicates(vector<int>& nums) {

    vector<int> temp = {0,10};
    printarr(temp);

}

int main(){
    // vector<int> arr = {1,52,2,3,3,3,9,3,7,1};
    // vector<int> res = findDuplicates(arr);
    vector<int> temp = {0,4,5};
    // cout<<temp.max_size();
    
    printarr(temp);
    
    return(0);
}   