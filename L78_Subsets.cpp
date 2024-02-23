// 78. Subsets

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}

// print 2D arr ele
void print2Darr(vector<vector<int>> arr)
{
  int rows = arr.size(), cols = 3;
  // int rows = arr.size(), cols = arr[0].size();
  cout<<"r = "<<rows<<" c = "<<cols<<endl;
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }
}

void print2Da(vector<vector<int>> arr)
{
  int rows = arr.size(), cols = 3;
  // cout<<"r = "<<rows<<" c = "<<cols<<endl;
  for (int row = 0; row < rows; row++)
  {
    printarray(arr[row]);
  }
}

vector<vector<int>> subsets(vector<int> &nums)
{
  vector<vector<int>> arr;
  int size = nums.size();
  for (int i = 0; i < pow(2, size); i++)
  {
    int tmp = i;
    vector<int> s = {};
    for (int x = 0; x < size; x++)
    {
      // cout << "i>> & 1 = " << (tmp & 1) << endl;
      if ((tmp & 1) == 1)
      {
        s.push_back(nums[x]);
        // cout<<"pushed "<<nums[x]<<" "<<endl;
      }
      tmp = tmp>>1;
    }
    // cout<<"\narr = "; printarray(s);
    arr.push_back(s);
  }

  return arr;
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {1, 2, 3};
  vector<vector<int>> a;
  a = subsets(arr);
  cout<<"res arr is "<<endl;
  print2Da(a);
  // cout<<"1<<1 = "<<(1<<2);


  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());

// print arr ele

