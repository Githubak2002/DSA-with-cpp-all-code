// 263. Ugly Number

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

int main(){
  cout << "\n\n=======================\n\n";


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