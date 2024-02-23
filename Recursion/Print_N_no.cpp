// RECURS ION
#include <bits/stdc++.h>
using namespace std;

// print N natural no
void printNno(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  printNno(++i, n);
}

// print N to 1 with backtracking
void printNnoBacktracking(int i, int n)
{
  if (i > n)
    return;
  printNnoBacktracking(i + 1, n);
  cout << i << endl; // after function call → backtracking
}

// Sum of N natural no - printing sum
void printSumOfN(int i,int sum){
  if(i<0){
    cout<<"sum = "<<sum<<endl;
    return;
  }
  printSumOfN(i-1,sum+i);
}

// Sum of N natural no - returning sum
int returnSumOfN(int n){
  if(n == 0){
    return 0;
  }

  return n+returnSumOfN(n-1);
}

int main()
{
  // cout<<"Enter value of n = ";
  // int n;
  // cin>>n;
  // cout<<"\n";
  int i = 1, n = 5;

  // printNno(i,n);
  // printNnoBacktracking(i, n);
  // printSumOfN(n,0);
  cout<<"sum of 1 to "<<n<<" = "<<returnSumOfN(n)<<endl;
  return 0;
}
