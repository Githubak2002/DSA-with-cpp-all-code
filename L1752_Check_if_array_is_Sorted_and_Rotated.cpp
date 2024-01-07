// 1752. Check if Array Is Sorted and Rotated

/*
Input: nums = [3,4,5,1,2]
Output: true

Input: nums = [2,1,3,4]
Output: false
*/

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

bool check(vector<int>& nums) {
  int count = 0,n = nums.size();
  for (int i = 1; i < n; i++)
  {
    if(nums[i-1] > nums[i])
      count++;  
  }
  if(nums[n-1]>nums[0])
    count++;
  
  return count<=1;
}

int main(){
  cout<<"\n\n==============\n";
  vector<int> arr = {1,2,3,4,5};
  vector<int> arr1 = {4,5,1,2,3};
  vector<int> arr2 = {4,4,7,6,2};
  cout<<"arr is sorted and rotated ? "<<check(arr2);
  return 0;
}