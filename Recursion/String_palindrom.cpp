// RECURSION - string palindrom?
#include <bits/stdc++.h>
using namespace std;

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}


// REVERSE AN ARRAY
void reverseArr(int arr[],int start,int end){
  if(start >= end)
    return;

  swap(arr[start],arr[end]);
  reverseArr(arr,start+1,end-1);
}

// CHECK IF STRING IS PALINDROM 
bool isPalindrom(string s,int len){

}

int main()
{
  cout<<"\n\n";

  string s = "abcdcba";
  int len = s.length();
  cout<<"is "<<s<<" palindrom = "<<isPalindrom(s)<<endl;

  cout<<"\n\n";
  return 0;
}