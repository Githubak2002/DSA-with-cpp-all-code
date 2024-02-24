// 496. Next Greater Element I
// NOTE - SHOULD BE IMPLIMENTED USING STACK
#include <bits/stdc++.h>
#include <vector>
// #include<cmath>            // pow(x,n);
// #include<algorithm>
using namespace std;

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Next greater element
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
  vector<int> ans;
  int len1 = nums1.size(), len2 = nums2.size(), flag = 0, tmp;
  for (int i = 0; i < len1; i++)
  {
    for (int j = 0; j < len2; j++)
    {
      if (nums1[i] == nums2[j])
      {
        tmp = nums2[j];
        // cout<<"num1 = "<<nums1[i]<<" num2 = "<< nums2[j]<<"\n";
        while (j < (len2 - 1))
        {
          if (nums2[j + 1] > tmp)
          {
            // cout<<"j+1 ele = "<<nums2[j+1]<<" > j ele = "<<nums2[j]<<endl;
            flag = 1;
            ans.push_back(nums2[j + 1]);
            break;
          }
          j++;
        }
        if (flag == 0)
          ans.push_back(-1);

        flag = 0;
        break;
      }
    }
  }
  return ans;
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {4, 1, 2}, arr5 = {1, 3, 4, 2};
  vector<int> arr11 = {2, 4}, arr13 = {1, 2, 3, 4};
  vector<int> arr14 = {5, 7}, arr33 = {5, 1, 2, 3, 4, 6, 7};
  vector<int> arr1 = {5, 9}, arr3 = {4, 3, 9, 7, 5, 2, 3, 1, 2, 8, 20};

  vector<int> ans;
  cout << "res array is" << endl;
  ans = nextGreaterElement(arr1, arr3);
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