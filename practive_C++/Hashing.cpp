// HASHING 
#include <bits/stdc++.h>
#include <iostream>
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

// no of time ele appears using hashing
void eleAppears(vector<int> arr,int max_ele){
  int len = arr.size();
  vector<int> hashArr (max_ele+1,0);
  for (int i = 0; i < len; i++)
  {
    hashArr[arr[i]] += 1; 
  }
  // printarray(hashArr);
  
  for (int  i = 0; i < hashArr.size(); i++)
  {
    if(hashArr[i] != 0)
      cout<<"ele "<<i<<" is present "<<hashArr[i]<<" times\n";
  }
  

}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> arr = {2,4,7,6,1,9,9,9,9};
  int max_ele = 9;
  eleAppears(arr,max_ele);
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