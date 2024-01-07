// 189. Rotate Array

#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

void rotate(vector<int>& nums, int k) {
  int s = nums.size();
  vector<int> temp(s);
  for (int i = 0; i < s; i++){
    temp[(i+k)%s] = nums[i];
  }
  nums = temp;
}

void rotate1(vector<int>& nums, int k) {
  int temp,s = nums.size(),j;
  for (int i = 0; i < k; i++){
    temp = nums[s-1];
    for (j = s-2; j >= 0 ; j--){
      nums[j+1] = nums[j];
    }
    j=0;
    nums[j] = temp;
  }
}

int main(){
  cout<<"\n\n==============\n";
  vector<int> arr = {3,4,1,2};
  vector<int> arr1 = {5,4,3,2,1};
  printarray(arr);
  rotate(arr,2);
  printarray(arr);

  return 0;
}