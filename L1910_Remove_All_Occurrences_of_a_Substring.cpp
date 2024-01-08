// 1910. Remove All Occurrences of a Substring

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

string removeOccurrences(string s, string part)
{
  while (s.length() != 0 && s.find(part) < s.length())
    s.erase(s.find(part), part.length());
  return s;
}

/* my code without erase function
string removeOccurrences(string s, string part)
{

  int index = s.find(part);
  int part_len = part.length(), s_len = s.length();

  // cout<<"\nStr len = "<<s_len<<" Part len = "<<part_len<<endl;
  // cout<<"index = "<<index<<endl;

  string newstr;
  while (index != -1)
  {
    newstr = "";
    for (int i = 0; i < s_len; i++)
    {
      if (i == index)
        i = i + part_len - 1;
      else
        newstr.push_back(s[i]);
    }
    s = newstr;
    index = s.find(part);
    s_len = s.length();
  }
  return s;
}
*/

int main()
{
  cout << "\n\n=======================\n\n";
  string str = "daabcbaabcbc";
  string str1 = "sorrry";
  string part = "abc";
  string part1 = "z";

  cout << "After removing part from string, string is = ";
  cout << removeOccurrences(str, part) << endl;

  /*
  string mainString = "Hello, how are you?";
  string subString = "how";

  int foundIndex = mainString.find(subString);
  if (foundIndex)
    cout << "Substring found at index: " << foundIndex << endl;
  else
    cout << "Substring not found" << endl;
  */
  cout << "\n=======================";
  return 0;
}
