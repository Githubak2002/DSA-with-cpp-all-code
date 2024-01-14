// 509. Fibonacci Number

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

int fib(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return ((n - 1) + (n - 2));
  // return fib(n-1) + fib(n-2);
}

int main()
{
  cout << "\n\n=======================\n\n";

  int n = 4;
  cout<<"Fibonacci no of "<<n<<" is "<<fib(n)<<endl;
  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}