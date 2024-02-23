// 2149. Rearrange Array Elements by Sign
#include <bits/stdc++.h>
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

vector<int> rearrangeArray1(vector<int> &nums)
{
  int len = nums.size();
  int n = len / 2, j = 0;
  vector<int> v1, v2;
  for (int i = 0; i < len; i++)
  {
    if (nums[i] < 0)
      v2.push_back(nums[i]);
    else
      v1.push_back(nums[i]);
  }

  for (int i = 0; i < n; i++)
  {
    nums[j] = v1[i];
    j++;
    nums[j] = v2[i];
    j++;
  }

  return nums;
}

vector<int> rearrangeArray(vector<int> &nums)
{
  vector<int> ans (nums.size(),0);  
  int a = 0,b = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    if(nums[i]>0){
      ans[a] = nums[i];
      a += 2;
    }
    else{
      ans[b] = nums[i];
      b += 2;
    }

  }
  return ans;
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {1, 2, -5, 4, -3, -2}, ans;
  ans = rearrangeArray(arr);
  printarray(ans);

  cout << "\n\n=======================";
  return 0;
}

// print 2D arr ele
void print2Darr(vector<vector<int>> arr)
{
  int rows = arr.size(), cols = arr[0].size();
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }
}