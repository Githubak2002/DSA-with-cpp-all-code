// 125. Valid Palindrome

#include<iostream>
#include<vector>
#include<string>
using namespace std;

// print array ele
void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

// fun to convert [single] upper case Char to Lower case
char lowerCaseFun(char ch){
  if(ch >= 'a' && ch <= 'z')
    return ch;
  else
    return ch+32;
}

// fun to convert each Upper case char in string to Lower case
string lowerCaseFun(string s) {
  for (int i = 0; i < s.length(); i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
          s[i] = s[i] + 32; // Convert uppercase to lowercase
      }
  }
  cout<<"string converted "<<s<<endl;
  return s;
}

// ignorring special char and checking if string is palindron not case sensitive
bool isPalindrome(string s) {
    s = lowerCaseFun(s);

    int start = 0, end = s.length() - 1;
    while (start <= end) {
        if (!(s[start] >= 'a' && s[start] <= 'z') && !(s[start] >= '0' && s[start] <= '9')) {
            start++;
        } else if (!(s[end] >= 'a' && s[end] <= 'z') && !(s[end] >= '0' && s[end] <= '9')) {
            end--;
        } else {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
    }
    return true;
}


int main(){
  cout<<"\n\n==============\n";
  char ch = 'Z';
  string s1 = "ak isI; KA";
  string s2 = "A man, a plan, a canal: Panama";
  string s3 = "race a car";
  string s4 = "RaCE is11s;i ECAR";
  string s5 = "0P";
  string empty_s = " ";
  // cout<<"String to lower case = "<<lowerCaseFun(s5)<<endl;
  cout<<"String s = "<<s5<<endl;
  cout<<"Is string palindrom = "<<isPalindrome(s5)<<endl;

  // cout<<"String length =  "<<s.length()<<endl;
  // cout<<"First=  "<<s[0]<<endl;
  // cout<<"Last =  "<<s[s.length()-1]<<endl;
  return 0;
}