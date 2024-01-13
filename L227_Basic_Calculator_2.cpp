// 227. Basic Calculator 2

#include<iostream>
#include<vector>
#include<typeinfo>
// #include<algorithm>
using namespace std;

// remove Spaces
string removeSpaces(string s){
  string ans;
  int len = s.length();
  for (int i = 0; i < len; i++)
  {
    if(s[i] == ' ')
      continue;
    else
      ans.push_back(s[i]);
  }
  return ans;
}

// char to no
int charToNo(char ch){
  return 2*(ch - '0');
}

int calculate(string s) {
  s = removeSpaces(s);
  string newStr = "";

  int len = s.length(),hlp = 0;
  
  char ch1,ch2;
  int n1,n2;

  for (int i = 0; i < 3; i++)
  {
    while(hlp<len-2){
      if(s[hlp+1] == '/'){
        n1 = charToNo(s[hlp]);
        n2 = charToNo(s[hlp+2]);

      }
      newStr.push_back(s[hlp]);


    }
  }
  
  return -1;    
}

int main(){
  cout << "\n\n=======================\n\n";

  string s = " 3+5 / 2 ";
  // cout<<"string after removing SPACES = "<<removeSpaces(s)<<endl;

  // calculate(s);

  char s2 = '5';
  // int x = Number(s2);
  int x = s2 - '0';
  // cout<<"x = "<<x*2<<endl;
  // cout<<"tyep of x = "<<typeid(x).name()<<endl;
  // cout<<"tyep of s2 = "<<typeid(s2).name()<<endl;

  // cout<<"no ? "<<charToNo('2');

  string
  cout << "\n\n=======================";
  return 0;
}




// print arr ele
void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}