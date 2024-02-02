// 1108. Defanging an IP Address

#include <iostream>
#include <vector>
using namespace std;

// print arr ele
void printarray(string str)
{
  for (int i = 0; i < str.size(); i++)
    cout << str[i];
  cout << endl;
}

string defangIPaddr(string address)
{
  string ans = "";
  for (auto ch : address)
  {
    if (ch != '.')
      ans += ch;
    else
      ans += "[.]";
  }
  return ans;
}

int main()
{
  cout << "\n\n=======================\n\n";
  string s = "1.1.1.1";
  cout << "o/p string will be ";
  // printarray(s);
  defangIPaddr(s);
  cout << "\n\n=======================";
  return 0;
}

// sort(arr.begin(), arr.end());
