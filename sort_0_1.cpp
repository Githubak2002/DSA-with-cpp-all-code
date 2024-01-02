// sort 0,1 array
/*
Ex  - 0 1 0 0 1
o/p - 0 0 0 1 1
*/

#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i];
  cout<<endl;
}


int main(){
  cout<<"\n\n==============\n";

  vector<int> arr = {1,0,0,0,1,0,1};
  printArr(arr);

  
  return 0;
}
