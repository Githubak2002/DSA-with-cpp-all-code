// 442. Find All Duplicates in an Array

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

    // vector<int> temp = {0,10};
    // printarr(temp);
    printarr(nums);
    sort(nums.begin(),nums.end());
    // printarr(nums);
    // int temp = 0;
    vector<int> ans;
    for(int t=0;t<nums.size()-1;t++){
        if(nums[t] == nums[t+1])
            ans.push_back(nums[t]);
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,2,3,3,9,9,1,98,34,23,32};
    vector<int> res = findDuplicates(arr);
    // vector<int> temp = {0,4,5};
    // cout<<temp.max_size();
    
    printarr(res);
    
    return(0);
}   