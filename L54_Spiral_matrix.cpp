// 54. Spiral Matrix


#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;


void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

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

vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int row = matrix.size();
  int col = matrix[0].size();
  int count = 0;
  vector<int> ans;

  // cout<<"fun called"<<endl;

  int startingCol = 0;
  int startingRow = 0;
  int endingRow = row-1;
  int endingCol = col-1;

  while(count < col*row)
  {
    // printing starting row
    for (int index = startingCol ;  count < col*row && index <= endingCol; index++)
    {
      // cout<<matrix[startingRow][index];
      ans.push_back(matrix[startingRow][index]);
      count++;
    }
    startingRow++;

    // printing ending col
    for (int index = startingRow ; count < col*row && index <= endingRow; index++)
    {
      // cout<<matrix[index][endingCol];
      ans.push_back(matrix[index][endingCol]);
      count++;
    }
    endingCol--;

    // printing ending row
    for (int index = endingCol ; count < col*row && index >= startingCol; index--)
    {
      // cout<<matrix[endingRow][index];
      ans.push_back(matrix[endingRow][index]);
      count++;
    }
    endingRow--;

    // printing starting col
    for (int index = endingRow ; count < col*row && index >= startingRow; index--)
    {
      // cout<<matrix[index][startingCol];
      ans.push_back(matrix[index][startingCol]);
      count++;
    }
    startingCol++;
  }
  return ans;
}

int main(){
  cout << "\n\n=======================\n\n";

  vector<vector<int>> arr = {{1,2,3},{8,9,4},{7,6,5}};
  vector<vector<int>> arr1 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  vector<int> ans;

  // print2Darr(arr);
  
  ans = spiralOrder(arr1);
  cout<<"Result matrix = "<<endl;
  printarray(ans);

  cout << "\n\n=======================";
  return 0;
}


