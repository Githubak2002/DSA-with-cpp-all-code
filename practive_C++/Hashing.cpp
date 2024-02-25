// HASHING
/*
10^8 operation will take 1sec to execute
Max array size can be declared – 10^6 – in main function and 10^7 globally. 
*/

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

// no of time ele appears - using hashing
void eleAppears(vector<int> arr, int max_ele)
{
  int len = arr.size();
  vector<int> hashArr(max_ele + 1, 0);
  for (int i = 0; i < len; i++)
  {
    hashArr[arr[i]] += 1;
  }
  // printarray(hashArr);

  for (int i = 0; i < hashArr.size(); i++)
  {
    if (hashArr[i] != 0)
      cout << "ele " << i << " is present " << hashArr[i] << " times\n";
  }
}

// no of time char appears - using hashing
void charAppares(string s)
{
  int len = s.length();
  int n = 0;
  vector<int> storesChar (26,0);
  for (int i = 0; i < len; i++)
  {
    n = s[i] - 97;
    storesChar[n] += 1;
  }
  char ch;
  for (int m = 0; m < storesChar.size(); m++)
  {
    if(storesChar[m] != 0){
      ch = m+97;
      cout << "Char " << ch << " is present " << storesChar[m] << " times\n";
    }
  }
  
  
}

int main()
{
  cout << "\n\n=======================\n\n";

  // vector<int> arr = {2, 4, 7, 6, 1, 9, 9, 9, 9};
  // int max_ele = 9;
  // eleAppears(arr, max_ele);

  string s = "abavcfabva";
  charAppares(s);

  // vector<char> charArr = {'a','b','c','a','f','g','d','s','f'};
  // int a = 'a' - 97; cout<<"a = "<<a<<endl;    // o/p - 0  HINT


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