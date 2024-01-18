// 2221. Find Triangular Sum of an Array

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

// print arr ele
void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

int triangularSum(vector<int> &nums)
{
  if(nums.size() == 1)
    return nums[0];
  
  int ans = -1;

  vector<int> row;
  do{
    for (int i = 0; i < nums.size()-1; i++){
      row.push_back((nums[i]+nums[i+1])%10);
    }
    printarray(row);
    nums.clear();
    nums = row;
    row.clear();
  }while(nums.size() > 1); 
  return nums[0];
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {1,2,3,4,5};
  vector<int> arr2 = {12,2,5,4,1};
  vector<int> arr1 = {5};
  cout<<"Sum = "<<triangularSum(arr2)<<endl;

  // cout<<"arr len = "<<arr.size()<<endl;
  // arr.clear();
  // arr = arr1;
  // cout<<"arr len = "<<arr.size()<<endl;

  cout << "\n\n=======================";
  return 0;
}
