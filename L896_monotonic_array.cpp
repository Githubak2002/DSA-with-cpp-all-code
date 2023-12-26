/*  896. Monotonic Array

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:

Input: nums = [1,2,2,3]
Output: true
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
        
}

int main(){
  vector<int> arr = {1,2,2,3};
  // int arr[4] = {1,2,2,3};
  cout<<"\n\n==============";
  cout<<isMonotonic(arr)<<endl;
  return 0;
}
