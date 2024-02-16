// L73. Set Matrix Zeroes
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

void setZeroes(vector<vector<int>>& matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
  vector<int> tmpr,tmpc;
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
    {
      if(matrix[row][col] == 0){
        tmpr.push_back(row);
        tmpc.push_back(col);

        // cout<<"i = "<<row<<" j = "<<col<<endl;
        // tmpc = col; tmpr = row;
        // for (int row = 0; row < rows; row++)
        //   matrix[row][tmpc] = 0;
        // for (int col = 0; col < cols; col++)
        //   matrix[tmpr][col] = 0;
      }
    }
  }

  for (int k = 0; k < cols; k++)
  {
    
  }
  
  // printarray(tmpr);
  // printarray(tmpc);
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<vector<int>> arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

  print2Darr(arr);
  setZeroes(arr);
  // cout<<"After setting zeros\n";
  // print2Darr(arr);

  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());

// print arr ele
