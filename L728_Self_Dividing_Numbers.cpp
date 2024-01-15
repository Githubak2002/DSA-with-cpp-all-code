// 728. Self Dividing Numbers

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

// print arr ele
void printarray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}

bool selfDiv(int n)
{
  // cout<<"fun ";
  int tmp = n, rem = 0;
  while (n != 0)
  {
    rem = n % 10;
    // cout<<"digit = "<<rem<<endl;
    if (rem==0 || tmp%rem != 0)
      return false;
    else
      n = n/10;
  }
  return true;
}

vector<int> selfDividingNumbers(int left, int right)
{
  vector<int> ans;
  cout<<"l = "<<left<<" r = "<<right<<endl;
  for (int i = left; i <= right; i++)
  {
    cout<<"loop ";
    
    if (selfDiv(i)){
      cout<<"SD nno hai = "<<i<<endl;
      ans.push_back(i);
    }
  }
  return ans;
}

int main()
{
  cout << "\n\n=======================\n\n";

  // int n = 128;
  // cout << "is " << n << " SDN " << selfDiv(n) << endl;

  vector<int> ans;
  int l = 1, r = 22;
  ans = selfDividingNumbers(l, r);
  cout << "SLD vector = " << endl;
  printarray(ans);

  cout << "\n\n=======================";
  return 0;
}
