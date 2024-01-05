// INSERTION SORT

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" "; 

  cout<<endl;
}

void insertionSort(vector<int> &arr){
  for (int i = 1; i < arr.size(); i++){
    for (int j = i; j > 0; j--){
      if(arr[j-1] > arr[j])
        swap(arr[j-1],arr[j]);
    } 
  }
  // printarray(arr);
}

int main(){
  cout<<"\n\n==============\n";
  vector<int> arr = {3,6,5,2,8,1};
  printarray(arr);
  insertionSort(arr);
  printarray(arr);

  return 0;
}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

