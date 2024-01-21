// 81. Search in Rotated Sorted Array II

#include <iostream>
#include <vector>
// #include<algorithm>
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

bool search1(vector<int> &nums, int target)
{
  int pivot_index = pivot(nums);
  int pivot_ele = nums[pivot_index];
  int res = -1;
  // cout<<"Pivot index = "<<pivot_index<<endl;
  // cout<<"Pivot ele = "<<pivot_ele<<endl;
  int s = nums[0], e = nums[nums.size() - 1];

  if (target >= pivot_ele && target <= e)
  {
    res = binarySearch(nums, pivot_index + 1, nums.size() - 1, target);
    // cout<<"ele < piot_ele and  ele = "<<res<<endl;
    return (res >= 0);
  }
  else
  {
    res = binarySearch(nums, 0, pivot_index, target);
    // cout<<"ele < piot_ele and  ele = "<<res<<endl;
    return (res >= 0);
  }

  // return false;
}

bool search(vector<int> &nums, int target)
{
  int l = 0;
  int r = nums.size() - 1;
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (nums[mid] == target)
      return true;
    if ((nums[l] == nums[mid]) && (nums[r] == nums[mid]))
    {
      l++;
      r--;
    }
    else if (nums[l] <= nums[mid])
    {
      if ((nums[l] <= target) && (nums[mid] > target))
        r = mid - 1;
      else
        l = mid + 1;
    }
    else
    {
      if ((nums[mid] < target) && (nums[r] >= target))
        l = mid + 1;
      else
        r = mid - 1;
    }
  }
  return false;
}
int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {1};
  vector<int> arr2 = {2, 3, 4, 0, 0, 1, 2};
  vector<int> arr1 = {2, 3, 4, 5, 0, 1};

  cout << "pivot = " << pivot(arr1) << endl;
  cout << "ele present " << search(arr1, 5) << endl;

  // cout<<"ele present "<<binarySearch(arr,0,2,3)<<endl;

  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());
