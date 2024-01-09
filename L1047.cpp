// 1047. Remove All Adjacent Duplicates In String

#include <iostream>
#include <vector>
using namespace std;

// my code --- TLE - time limit exceeds 
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
  while (i < s.length()){
    if (temp.empty() || s[i] != temp.back())
      temp.push_back(s[i]);
    else
      temp.pop_back();
    i++;
  }
  return temp;
}

// TRY once more------- and CORRECT 100% ---
string removeDuplicates2(string s)
{
  string temp = "";  int i = 0;
  while (i < s.length())
  {
    if (temp.empty() || temp.back() != s[i])
      temp.push_back(s[i]);
    else if(temp.back() == s[i])
      temp.pop_back();
    i++;
  }
  s = temp;
  return s;
}

int main()
{
  cout << "\n\n=======================\n\n";

  string str = "abbaca";
  string str1 = "abcffggvvc";
  cout << "Res string = " << removeDuplicates(str)<<endl;
  cout << "Res string = " << removeDuplicates2(str1)<<endl;

  // string str = "abbaca";
  // cout<<"erase = "<<str.erase(1,2);     // aaca

  cout<<"empty ? = "<<str.empty()<<endl;   // 0
  cout<<"string last char = "<<str.back()<<endl;  // a 

  cout << "\n\n=======================";
  return 0;
}