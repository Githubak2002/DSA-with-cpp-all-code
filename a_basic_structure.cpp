// 263. Ugly Number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  cout << "\n\n=======================\n\n";
  vector<int> a, arr = {2,2,0,1,0,1};

  sort(arr.begin(), arr.end());

  // a = sort(arr[0],arr.size()-1);
  // arr.sort(arr[0],arr[arr.size()-1]);
  cout << "\n\n=======================";
  return 0;
}

// print arr ele
void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

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

char toLowerCaseFun(char ch){
  if(ch >= 'a' && ch <= 'z')
    return ch;
  else
    return ch+32;
}


// string str;
// cout<<"enter a string"<<endl;
// getline(cin,str);
// cout<<"String = "<<str;