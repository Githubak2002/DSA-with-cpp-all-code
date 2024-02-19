// 1221. Split a String in Balanced Strings
#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

int balancedStringSplit(string s)
{
  int res = 0,len = s.size();
  // cout<<"string is = "<<s<<endl;
  // cout<<"Len = "<<len<<endl;

  int c1 = 0,c2 = 0;
  for (int  i = 0; i < len; i++)
  {
    if(s[i] == 'R')
      c1++;
    if(s[i] == 'L')
      c2++;
    if(c1 == c2){
      res++;
      c1 = c2 = 0;
    }
  }
  
  return res;
}

int main()
{
  cout << "\n\n=======================\n\n";

  string s = "RLRRLLRLRL";
  cout<<"res = "<<balancedStringSplit(s)<<endl;

  cout << "\n\n=======================";
  return 0;
}

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
