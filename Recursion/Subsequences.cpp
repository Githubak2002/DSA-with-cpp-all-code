// RECURSION with subsequence
#include <bits/stdc++.h>
using namespace std;

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}


// SUM OF N natural no - printing sum
void printSumOfN(int i,int sum){
  if(i<0){
    cout<<"sum = "<<sum<<endl;
    return;
  }
  printSumOfN(i-1,sum+i);
}

// SUM OF N natural no - returning sum
int returnSumOfN(int n){
  if(n == 0){
    return 0;
  }
  return n+returnSumOfN(n-1);
}

// REVERSE AN ARRAY
void reverseArr(int arr[],int start,int end){
  // void reverseArr(int arr[],int start,int n){
  // if(start >= n/2) return
  if(start >= end)
    return;

  swap(arr[start],arr[end]);
  reverseArr(arr,start+1,end-1);
}

void allSubSequences(){
  
}


int main()
{
  cout<<"\n\n";

    // REVERSING AN ARRAY
  int arr[5] = {1,2,3,4,5};
  cout<<"Reversing the arr \n";
  reverseArr(arr,0,4);
  for(int  i = 0; i < 5; i++)
      cout<<arr[i]<<" ";



  
  

  cout<<"\n\n";
  return 0;
}
