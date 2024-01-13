// 867. Transpose Matrix


#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

// print 2D arr ele
void print2Darr(vector<vector<int>> arr){
  int rows = arr.size(),cols = arr[0].size();
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
    {
      cout<<arr[row][col]<<" ";
    }
    cout<<endl;
  }
}

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
  int m = matrix.size();
  int n = matrix[0].size();
  vector<vector<int>> ans (n,vector<int>(m,0));
  int row = 0,col = 0;
  for (int i = 0; i < m; i++)
  {
    row = 0;
    for (int j = 0; j < n; j++)
      ans[row++][col] = matrix[i][j];
    col++;
  }
  return ans;
}

int main(){
  cout<< "\n\n=======================\n\n";

  vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
  vector<vector<int>> mat2 = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
  cout<<"Matrix is "<<endl;
  print2Darr(mat2); 
  
  vector<vector<int>> ans;
  ans = transpose(mat2);

  cout<<"\nTraspose of Matrix is "<<endl;
  print2Darr(ans); 

  cout<< "\n\n=======================";
  return 0;
}