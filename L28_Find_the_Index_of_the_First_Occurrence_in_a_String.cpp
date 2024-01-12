// 28. Find the Index of the First Occurrence in a String

/*
Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0

Example 2:
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

int strStr(string haystack, string needle)
{
  int hyLen = haystack.length();
  int neLen = needle.length();
  int ansIndex = -1, i, j,temp;

  for (i = 0; i < hyLen; i++)
  {
    // cout<<"i = "<<i<<endl;
    j = 0;
    if (needle[j] == haystack[i])
    {
      ansIndex = i;
      temp = i;
      for (int j = 1; j < neLen; j++)
      {
        temp++;
        if (haystack[temp] != needle[j])
        {
          ansIndex = -1;
          break;
        }
      }
      if (ansIndex != -1)
        return ansIndex;
    }
  }
  return ansIndex;
}

int main()
{
  cout << "\n\n=======================\n\n";

  // string haystack = "sadbutsad";
  // string needle = "sad";
  string haystack = "mississippi";
  string needle = "issip";
  cout << "Needle first loc = " << strStr(haystack, needle);

  cout << "\n\n=======================";
  return 0;
}