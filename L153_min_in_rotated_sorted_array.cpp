// 153. Find Minimum in Rotated Sorted Array

#include <iostream>
#include <vector>
using namespace std;

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}

//  pivot ele is
int pivot(vector<int> arr)
{
  int s = 0, e = arr.size(), mid;
  while (s != e)
  {
    mid = s + (e - s) / 2;
    // if(arr[mid]<arr[mid+1])
    if (arr[mid] >= arr[0])
      s = mid + 1;
    else
      e = mid;
  }
  return s;
}

// binary search
int binarySearch(vector<int> arr, int start, int end, int key)
{
  int mid;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == key)
      return mid;
    else if (arr[mid] > key)
      end = mid - 1;
    else
      start = mid + 1;
  }
  return -1;
}

int findMin(vector<int> &nums)
{
  int s = 0, e = nums.size(), mid;
  if (nums[0] <= nums[e - 1])
    return nums[0];
  while (s != e)
  {
    mid = s + (e - s) / 2;
    if (nums[mid] >= nums[0])
      s = mid + 1;
    else
      e = mid;
  }
  return nums[s];
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {11, 13, 15, 17};
  vector<int> arr1 = {3, 4, 5, 1, 2};
  vector<int> arr2 = {2};

  int i = findMin(arr);
  // cout << "pivot index = " << i << endl;
  cout << "pivot ele = " << i << endl;
  // cout << "ele present " << search(arr1, 5) << endl;

  // cout<<"ele present "<<binarySearch(arr,0,2,3)<<endl;

  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());
