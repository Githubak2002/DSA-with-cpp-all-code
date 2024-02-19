// 2679. Sum in a Matrix

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

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

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}

// my code
int getMax(vector<int> arr)
{
  int max = INT16_MIN;
  for (int j = 0; j < arr.size(); j++)
  {
    if (arr[j] > max)
      max = arr[j];
  }
  return max;
}

int matrixSum(vector<vector<int>> &nums)
{
  vector<int> storMax;
  int vectorMax;
  int rows = nums.size(), cols = nums[0].size();
  int x, y, max = INT16_MIN, res = -1, sum = 0;
  for (int op = 0; op < cols; op++)
  {
    storMax = {};
    for (int i = 0; i < rows; i++)
    {
      max = INT16_MIN;
      for (int j = 0; j < cols; j++)
      {
        if (nums[i][j] > max)
        {
          max = nums[i][j];
          x = i;   y = j;
        }
      }
      storMax.push_back(max);
      nums[x][y] = -1;
    }
    vectorMax = getMax(storMax);
    // cout<<"vec max \n";  printarray(storMax);
    sum = sum + vectorMax;
    // cout<<"\nFor loop and sum = "<<sum<<endl;
    // print2Darr(nums);

  }
  return sum;
}

// vectorMax = max_element(storMax.begin(), storMax.end());

int main()
{
  cout << "\n\n=======================\n\n";

  vector<vector<int>> arr = {{7, 2, 1,8}, {4,6, 4, 2}, {6, 5, 3,3}, {3, 2, 1,1}};
  vector<vector<int>> arr1 = {{7, 2, 1}, {6, 4, 2}, {6, 5, 3}, {3, 2, 1}};

  cout<<"given matrix\n";
  print2Darr(arr);

  int res = matrixSum(arr);
  cout << "res = " << res << endl;
  // print2Darr(arr);

  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());

