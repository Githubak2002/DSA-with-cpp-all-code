// 33. Search in Rotated Sorted Array

/*
Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

#include<iostream>
#include<vector>
using namespace std;

// binary search
int binarySearch(int arr[],int n, int key){
  int start = 0, end = n-1,mid;
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

int peakIndexInMountainArray(vector<int>& arr){
  int start = 0, end = arr.size()-1,mid;
  while(start != end){
    mid = start + (end-start)/2;
    if(arr[mid] < arr[mid+1])
      start = mid + 1;
    else if(arr[mid]> arr[mid+1])
      end = mid;
  }
  return start;
}

int pivotEle(vector<int> arr){
  int s = 0,e = arr.size()-1,mid;
  while(s<e){
    mid = s + (e-s)/2;
    if(arr[mid]>arr[0])
      s = mid + 1;
    else
      e = mid;
  }
  return s;
}



int main(){
  cout<<"\n\n==============\n";

  vector<int> arr = {5,6,1,2,3,4};
  vector<int> arr1 = {8,9,10,11,2,3};

  // cout<<binarySearch(arr2,7,5);
  // cout<<"peak index of array is = "<<peakIndexInMountainArray(arr);
  cout<<"Pivot ele in the array is = "<<pivotEle(arr1);

  return 0;
}