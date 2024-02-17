// L73. Set Matrix Zeroes
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

void setZeroes(vector<vector<int>> &matrix)
{
  int rows = matrix.size(), cols = matrix[0].size();
  vector<int> tmpr(rows, 1), tmpc(cols, 1);
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
    {
      if (matrix[row][col] == 0)
      {
        tmpr[row] = 0;
        tmpc[col] = 0;
      }
    }
  }
  // printarray(tmpr);
  // printarray(tmpc);
  for (int i = 0; i < tmpr.size(); i++)
  {
    for (int j = 0; j < tmpc.size(); j++)
    {
      if (tmpr[i] == 1 && tmpc[j] == 1)
        continue;
      else
        matrix[i][j] = 0;
    }
  }
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<vector<int>> arr1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  vector<vector<int>> arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1,3,1,5}};

  print2Darr(arr);
  setZeroes(arr);
  cout << "After setting zeros\n";
  print2Darr(arr);

  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());

// print arr ele
