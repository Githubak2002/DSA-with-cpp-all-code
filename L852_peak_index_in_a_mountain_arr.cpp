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
#include<algorithm>
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

int main(){
  cout<<"\n\n==============\n";

  int arr1[6] = {1,3,4,5,6,7};
  int arr2[7] = {1,2,3,4,5,6,7};

  cout<<binarySearch(arr2,7,5);

  return 0;
}

