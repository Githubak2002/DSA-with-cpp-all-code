// 204. Count prime no

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

// print arr ele
void printindex(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    // cout<<arr[i];
    if (arr[i] == 1)
      cout << i << " ";
  }
  cout << endl;
}

// returns no of prime < n
int countPrimes(int n)
{
  vector<bool> isPrime(n, true);

  int count = 0;
  for (int i = 2; i < n; i++)
  {
    if (isPrime[i])
    {
      count++;
      for (int j = i * 2; j < n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
  return count;
}

vector<int> countPrime(int n)
{
  vector<int> ans(n, true);
  int count = 0;
  if (n == 1 || n == 0)
  {
    ans.clear();
    ans.push_back(0);
    return ans;
  }

  ans[0] = 0;
  ans[1] = 0;
  for (int i = 2; i < n; i++)
  {
    int j = 2;
    while (i * j < n)
    {
      ans[i * j] = 0;
      j++;
    }
    if (ans[i] == 1)
      count++;
  }
  cout << "No of prims = " << count << endl;
  return ans;
}
int main()
{
  cout << "\n\n=======================\n\n";

  int n;
  cout << "n = ";
  cin >> n;

  vector<int> ans;
  ans = countPrime(n);
  printindex(ans);

  cout << "\n\n=======================";
  return 0;
}
