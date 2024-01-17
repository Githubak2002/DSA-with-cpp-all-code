// 2798. Number of Employees Who Met the Target

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target){
  int count = 0;
  for (int i = 0; i < hours.size(); i++)
  {
    if(hours[i] >= target)
      count++;
  }
  return count;
}

int main(){
  cout << "\n\n=======================\n\n";

  vector<int> arr = {0,1,2,3,4};
  int target = 2;

  cout<<"ans = "<<numberOfEmployeesWhoMetTarget(arr,target);

  cout << "\n\n=======================";
  return 0;
}

