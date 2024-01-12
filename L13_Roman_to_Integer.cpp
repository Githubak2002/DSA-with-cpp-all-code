// 13. Roman to Integer

/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Example 2:
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

Example 3:
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

#include<iostream>
#include<vector>
using namespace std;

// roman to int [single char]
int charToNo(char ch){
  switch (ch)
  {
    case 'M': return 1000; break;
    case 'D': return 500;  break;
    case 'C': return 100;  break;
    case 'L': return 50;   break;
    case 'X': return 10;   break;
    case 'V': return 5;    break;
    case 'I': return 1;    break;
    default: return -1;    break;
  }
}

int romanToInt(string s) {
  int len = s.length(),ans = 0,j,no1,no2,i;
  for (i = 0; i < len-1; i++)
  {
    // j = i+1;
    no1 = charToNo(s[i]);
    no2 = charToNo(s[i+1]);
    if(no1>=no2)
      ans = ans + no1;
    else
      ans = ans - no1; 

    // cout<<"no = "<<ans<<endl;
  }
  no1 = charToNo(s[i]);

  // cout<<"s[i] = "<<s[i]<<endl;
  // cout<<"no = "<<ans<<endl;

  ans = ans + no1;
  return ans;
}

int main(){
  cout << "\n\n=======================\n\n";

  string s = "MCMXCIV";
  string s1 = "II";
  cout<<"Roman   = "<<s<<endl;
  cout<<"Intiger = "<<romanToInt(s1)<<endl;

  cout << "\n\n=======================";
  return 0;
}

// print arr ele
void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}


// switch (ch)
//   {
//     case 'M': res = 1000; break;
//     case 'D': res = 500;  break;
//     case 'C': res = 100;  break;
//     case 'L': res = 50;   break;
//     case 'X': res = 10;   break;
//     case 'V': res = 5;    break;
//     case 'I': res = 1;    break;
//     default: cout<<"Not valid Char"; break;
//   }