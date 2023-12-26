/*  896. Monotonic Array

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:

Input: nums = [1,2,2,3]
Output: true
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
  bool isMonotonic = 0;
  int f = 0;

  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] < nums[i - 1])
    {
      f = 1;
      break;
    }
  }

  if (f == 0)
    return 1;

  f = 0;

  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] > nums[i - 1])
    {
      f = 1;
      return 0;
    }
  }

  return 1;
}

int main()
{
  vector<int> arr1 = {1, 2, 2, 3};
  // vector<int> arr = {8,4,4,3};
  vector<int> arr = {1, 1};
  // int arr[4] = {1,2,2,3};
  cout << "\n\n==============\n";
  cout << endl
       << isMonotonic(arr) << endl;
  return 0;
}
