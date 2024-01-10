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

vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int row = matrix.size();
  int col = matrix[0].size();
  int count = 0;
  vector<int> ans;

  int startingCol = 0;
  int startingRow = 0;
  int endingRow = row-1;
  int endingCol = col-1;

  while(count < col*row)
  {
    // printing starting row
    for (int index = startingCol ; count < col*row && index < endingCol; index++)
    {
      // cout<<matrix[startingRow][index];
      ans.push_back(matrix[startingRow][index]);
      count++;
    }
    startingRow++;

    // printing ending col
    for (int index = startingRow ; count < col*row && index < endingRow; index++)
    {
      // cout<<matrix[index][endingCol];
      ans.push_back(matrix[index][endingCol]);
      count++;
    }
    endingCol--;

    // printing ending row
    for (int index = endingCol ; count < col*row && index < startingCol; index--)
    {
      // cout<<matrix[endingRow][index];
      ans.push_back(matrix[endingCol][index]);
      count++;
    }
    endingRow--;

    // printing starting col
    for (int index = endingRow ; count < col*row && index < startingRow; index--)
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
  vector<int> ans;

  for (int i = 0; i < arr.size(); i++)
  {
    for (int col = 0; col < arr[0].size(); col++)
    {
      cout<<arr[i][col]<<" ";
    }
    cout<<endl;
  }
  

  // ans = spiralOrder(arr);
  // cout<<"Result matrix = "<<endl;
  // printarray(ans);

  cout << "\n\n=======================";
  return 0;
}


