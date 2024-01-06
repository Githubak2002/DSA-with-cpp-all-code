// 217. Contains Duplicate

#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";   
  cout<<endl;  
}

bool containsDuplicate(vector<int>& nums) {
  for(int i = 0; i< nums.size()-1;i++){
    for (int j = i+1; j < nums.size(); j++){
      if(nums[i] == nums[j]){
        return true;
        break;
      }
    } 
  }
  return false;
}

int main(){
  cout<<"\n\n==============\n";
  vector<int> arr = {1,2,3,4};
  vector<int> arr1 = {1,2,3,4,5,6,7,8,3};

  cout<<"Array contains Duplicate "<<containsDuplicate(arr1);
  return 0;
}

