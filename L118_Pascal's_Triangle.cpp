// 118. Pascal's Triangle

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

//  print 2D arr ele
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

// I tried
vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> ans;
  for (int i = 1; i <= numRows; i++)
  {
    vector<int> row(i, 1);
    int j = 0;
    if (i >= 3)
      j = 2;
    while (j >= 2 && j < i)
    {
    }
    ans.push_back(row);
  }

  // if(numRows >= 1)

  return ans;
}

// leet code solution - comination formula
vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> result;
  for (int i = 0; i < numRows; i++)
  {
    vector<int> row(i + 1, 1);
    for (int j = 1; j < i; j++)
    {
      row[j] = result[i - 1][j - 1] + result[i - 1][j];
    }
    result.push_back(row);
  }
  return result;
}

int main()
{
  cout << "\n\n=======================\n\n";

  int rows = 2;
  vector<vector<int>> ans;
  ans = generate(rows);
  print2Darr(ans);

  cout << "\n\n=======================";
  return 0;
}
