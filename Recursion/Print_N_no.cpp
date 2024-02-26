// RECURSION
#include <bits/stdc++.h>
using namespace std;

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}


// print N natural no
void printNno(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  printNno(++i, n);
}

// print N to 1 with BACKTRACKING
void printNnoBacktracking(int i, int n)
{
  if (i > n)
    return;
  printNnoBacktracking(i + 1, n);
  cout << i << endl; // after function call → backtracking
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

    // REVERSING AN ARRAY
  int arr[5] = {1,2,3,4,5};
  cout<<"Reversing the arr \n";
  reverseArr(arr,0,4);
  for(int  i = 0; i < 5; i++)
      cout<<arr[i]<<" ";
  
  


  
  // printNno(i,n);
  // printNnoBacktracking(i, n);
  // printSumOfN(n,0);
  // cout<<"sum of 1 to "<<n<<" = "<<returnSumOfN(n)<<endl;

  cout<<"\n\n";
  return 0;
}
