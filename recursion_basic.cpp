// recursion basic

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

int recursiveFactorial(int n)
{
  if (n == 0)
    return 1;
  return n * recursiveFactorial(n - 1);
}

int recursivePower(int n)
{
  if (n == 0)
    return 1;
  return 2 * recursivePower(n - 1);
}

void recursivecount(int n)
{
  if (n == 0)
    return;

  recursivecount(n - 1);
  cout << n << " ";
}

int recursiveFibonaci(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  int ans = recursiveFibonaci(n - 1) + recursiveFibonaci(n - 2);
}
// 0 1 1 2 3 5 8

int main()
{
  cout << "\n\n=======================\n\n";

  int n = 4;
  // cout << n << "!  =  " << recursiveFactorial(n) << endl;
  // cout << "2^" << n << " =  " << recursivePower(n) << endl;
  // cout << "counting is = ";   recursivecount(n);
  cout << n << "th ele of fibonaci series is (index = 0) = " << recursiveFibonaci(n);

  cout << "\n\n=======================";
  return 0;
}

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}