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

void sort01(vector<int> arr){
  cout<<"sort\n";
  int i = 0, j = arr.size()-1;
  while(i<j){
    while (arr[i]==0)
      i++;
    while (arr[j]==1)
      j--;

    if(i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
    printArr(arr);
    
  }
}




int main(){
  cout<<"\n\n==============\n";

  vector<int> arr = {1,1,0,0,1,0,1};
  printArr(arr);

  sort01(arr);
  printArr(arr);

  return 0;
}
