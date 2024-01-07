// 2535. Difference Between Element Sum and Digit Sum of an Array

/*
Input: nums = [1,15,6,3]
Output: 9
Explanation: 
The element sum of nums is 1 + 15 + 6 + 3 = 25.
The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
The absolute difference between the element sum and digit sum is |25 - 16| = 9.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

int sumOfDigits1(int n){
  int sum = 0,r=0;
  // int n = arr.size();
  while(n!=0){
    r = n%10;
    sum = sum + r;
    n = n/10;
  }
  return sum;  
}

int sumOfArrEle(vector<int> arr){
  int sum = 0;
  int n = arr.size();
  for (int i = 0; i < n; i++)
    sum = sum + arr[i];
  return sum;  
}

int sumOfDigits(vector<int> arr){
  int sum = 0,r=0,n;
  int size = arr.size();
  for (int i = 0; i < size; i++)
  {
    n = arr[i];
    while(n!=0){
      r = n%10;
      sum = sum + r;
      n = n/10;
    }
  }
  return sum;
}

int differenceOfSum(vector<int>& nums) {
  int x = sumOfArrEle(nums);
  int y = sumOfDigits(nums);

  return abs(x-y);
}

/*    some one else
int differenceOfSum(vector<int>& nums) {
  int tsum = accumulate(nums.begin(),nums.end(),0);

  int digitSum = 0;

  for(auto x : nums){
      while(x){
          int rem = x % 10;
          digitSum+= rem;
          x = x/10;
      }
  }

  return abs(tsum - digitSum);
}
*/


int main(){
  cout<<"\n\n==============\n";
  vector<int> a = {1,15,6,3};   // |25 - 16| = 9
  vector<int> a1 = {1,2,3,4};   // 10 - 10| = 0

  // cout<<"Sum of digits = "<<sumOfDigits(a);
  cout<<"Diff is = "<<differenceOfSum(a)<<endl;
  cout<<"Diff is = "<<differenceOfSum(a1)<<endl;
  return 0;
}