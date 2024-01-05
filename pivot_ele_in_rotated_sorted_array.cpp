// Binary search in rotated sotted array.
#include<iostream>
#include<vector>
using namespace std;

// binary search
int binarySearch(vector<int> arr,int start,int end,int key){
  int mid;
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid] == key)
      return mid;
    else if(arr[mid]>key)
      end = mid - 1;
    else
      start = mid + 1;
  }
  return -1;
}

int pivotEle(vector<int> arr){
  int s = 0,e = arr.size()-1,mid;
  while(s<e){
    mid = s + (e-s)/2;
    if(arr[mid]>=arr[0])
      s = mid + 1;
    else
      e = mid;
  }
  return s;
}

int search(vector<int>& nums, int target){
  int s = 0,e = nums.size()-1,mid,pivot_ele,result;
  while(s<e){
    mid = s + (e-s)/2;
    if(nums[mid]>=nums[0])
      s = mid + 1;
    else
      e = mid;
  }
  pivot_ele = s;
  cout<<"\nPivot ele in the array is = "<<pivot_ele<<endl;
  // int pivot_ele = pivotEle(nums);
  s=0,e=nums.size()-1;
  if((nums[pivot_ele] <= target) && (target <= nums[e]))
    result = binarySearch(nums,pivot_ele,e,target);
  else
    result = binarySearch(nums,s,pivot_ele-1,target);
  return result;
}

int main(){
  cout<<"\n\n==============\n";

  vector<int> arr = {5,6,1,2,3,4};
  vector<int> arr1 = {8,9,10,11,2,3};
  vector<int> arr2 = {3,1};

  // cout<<binarySearch(arr2,7,5);
  // cout<<"peak index of array is = "<<peakIndexInMountainArray(arr);
  // cout<<"\nPivot ele in the array is = "<<pivotEle(arr2);
  cout<<"\nEle is present at = "<<search(arr2,1);

  return 0;
}