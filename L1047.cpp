// 1047. Remove All Adjacent Duplicates In String

#include <iostream>
#include <vector>
using namespace std;

// my code
string removeDuplicates1(string s)
{
  int hlp = 1, len;
  while (hlp == 1)
  {
    len = s.length();
    for (int i = 0; i < len - 1; i++)
    {
      if (s[i] == s[i + 1])
      {
        // cout<<"i = "<<i<<" s[i] = "<<s[i]<<" i+1 = "<<i+1<<" s[i+1] = "<<s[i+1]<<endl;
        s.erase(i, 2);
        hlp = 1;
        break;
      }
      hlp = 0;
    }
    // cout<<"s = "<<s<<endl;
  }
  return s;
}

// copied from LCODE
string removeDuplicates(string s)
{
  string temp = "";
  int i = 0;

  while (i < s.length())
  {
    if (temp.empty() || s[i] != temp.back())
      temp.push_back(s[i]);
    else
      temp.pop_back();
    i++;
  }

  return temp;
}

// TRY once more-------
string removeDuplicates2(string s)
{

  string temp = "";

  int i = 0;
  while (i < s.length() - 1)
  {
    if (s[i] == s[i + 1])
    {
      i++;
    }
    else
    {
      temp.push_back(s[i]);
      i++;
    }
  }
}

int main()
{
  cout << "\n\n=======================\n\n";

  string str = "abbaca";
  cout << "Res string = " << removeDuplicates(str);

  // cout<<"erase = "<<str.erase(1,2);     // aaca

  cout << "\n\n=======================";
  return 0;
}