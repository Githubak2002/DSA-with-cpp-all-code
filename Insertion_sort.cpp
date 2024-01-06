// INSERTION SORT - 

#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" "; 

  cout<<endl;
}

// INSERTION SORT - pass by value - O(n^2) complexity
void insertionSort(vector<int> arr){
  for (int i = 1; i < arr.size(); i++){
    for (int j = i; j > 0; j--){
      if(arr[j-1] > arr[j]){
        swap(arr[j-1],arr[j]);
      }
      else
        break;
    } 
  }
  cout<<"After INSERTION Sort"<<endl;
  printarray(arr);
}

int main(){
  cout<<"\n======================\n";
  vector<int> arr = {3,6,5,2,8,1};
  cout<<"Array is"<<endl;
  printarray(arr);
  insertionSort(arr);

  return 0;
}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

