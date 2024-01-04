//  852. Peak Index in a Mountain Array

/*

Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
*/

// binary code

#include<iostream>
#include<vector>
using namespace std;

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

int peakIndex(int arr[],int n){
  int start = 0, end = n-1,mid;
  while(start != end){
    mid = start + (end-start)/2;
    // cout<<"\nmid = "<<mid<<endl;
    if(arr[mid] < arr[mid+1])
      start = mid + 1;
    else if(arr[mid]> arr[mid+1])
      end = mid;
      // end = mid - 1;
  }
  return start;
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

// int peakIndex(int arr[],int n){
//   int start = 0, end = n-1,mid;
//   while(start < end){
//     mid = start + (end-start)/2;
//     if(arr[mid] < arr[mid+1])
//       start = mid + 1;
//     else if(arr[mid]> arr[mid+1])
//       end = mid - 1;
//   }
//   return start;
// }

int main(){
  cout<<"\n\n==============\n";

  vector<int> arr = {4,5,6,5,4};
  int arr1[6] = {1,3,5,6,2,1};
  int arr2[7] = {6,7,5,4,3,2,1};
  int arr3[7] = {1,2,3,5,4,3,1};
  int arr4[7] = {7,6,5,4,3,2};

  // cout<<binarySearch(arr2,7,5);
  cout<<"peak index of array is = "<<peakIndex(arr1,6);

  cout<<"peak index of array is = "<<peakIndexInMountainArray(arr);

  

  return 0;
}

